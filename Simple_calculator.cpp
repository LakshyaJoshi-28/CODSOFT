#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char symbol;

    cout << "Welcome to my Calculator: " << endl;
    cout << "----------------------" << endl;

    cout << "Enter symbol : " << endl;
    cin >> symbol;

    cout << "Enter two numbers: " << endl;
    cin >> x;
    cin >> y;

    switch (symbol)
    {
    case '+':
        cout << x << " + " << y << " = " << x + y;
        break;

    case '-':
        cout << x << " - " << y << " = " << x - y;
        break;

    case '*':
        cout << x << " * " << y << " = " << x * y;
        break;

    case '/':
        cout << x << " / " << y << " = " << x / y;
        break;

    default:

        cout << "Symbol doesn't exist" << endl;
        break;
    }

    cout << endl;

    return 0;
}