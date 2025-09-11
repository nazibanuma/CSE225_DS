#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    sum = a + b;
    cout << "Sum: " << sum << endl;
    return 0;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << num << " is Even" << endl;
    else
        cout << num << " is Odd" << endl;
    return 0;
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Largest number is: " << a << endl;
    else if (b >= a && b >= c)
        cout << "Largest number is: " << b << endl;
    else
        cout << "Largest number is: " << c << endl;

    return 0;
}
