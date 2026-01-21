
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check the precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to convert infix expression to postfix
// expression
string infixToPostfix(string infix)
{
    stack<char> st;
    string postfix = "";
    for (int i = 0; i < infix.length(); i++)
    {
        char c = infix[i];

        // If the scanned character is an operand, add it to
        // output string.
        if (isalnum(c))
            postfix += c;

        // If the scanned character is an '(', push it to
        // the stack.
        else if (c == '(')
            st.push('(');

        // If the scanned character is an ')', pop and to
        // output string from the stack until an '(' is
        // encountered.
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }

        // If an operator is scanned
        else
        {
            while (!st.empty()&& (precedence(c)<= precedence(st.top())))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all the remaining elements from the stack
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

double evaluate(string postfix)
{
    stack<double> st;

    for(int i=0; i<postfix.length(); i++)
    {
        char c = postfix[i];

        if(isalnum(c))
        {
            cout << "c = "<<(double)c<< endl;
            double num = c - '0';
            st.push(num);
        }
        else
        {

            double s= st.top();
            //cout<<"s = " <<s<<endl;
            st.pop();
            double p = st.top();
            //cout<<"p = " <<p<<endl;
            st.pop();

            double value;

            if(c=='+')
            {
                value = p + s;

            }
            else if(c == '*')
            {
                value = p * s;
            }
            else if(c == '-')
            {
                value = p - s;
            }
            else
            {
                value = p / s;
            }

            cout<< "value = "<< value<<endl;
            st.push(value);

        }

    }
    return st.top();

}

int main()
{
    string infix = "1+2*3";
    cout << "Infix Expression: " << infix << endl;
    string postfix = infixToPostfix(infix) ;
    cout << "Postfix Expression: " << postfix << endl;
    cout << "Postfix Evaluation: " << evaluate(postfix) << endl;
    return 0;
}
