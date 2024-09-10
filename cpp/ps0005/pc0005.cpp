#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // prompting user for 2 operands and an operator 2/2
    float num1 , num2;
    cout << "Enter tow operands: ";
    cin >> num1 >> num2;
    char op;
    cout << "Enter the operator + - * / % ";
    cin >> op;

    // checking user inputs and processing 4/4
    // printing the result if all data is valid 1/1
    if(num2 == 0)
    {
        if (num1 == 0 && (op == '/' || op == '%')) cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity.";
        else if(op == '%' || op == '/') cout << "Math Error: cannot divide by 0.\n";
        else 
        {
            switch (op)
            {
                case '+':
                    cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << num1 + num2 << endl;
                    break;
                case '-':
                    cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << num1 - num2 << endl;
                    break;
                case '*':
                    cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << num1 * num2 << endl;
                    break;
                case '/':
                    cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << num1 / num2 << endl;
                    break;
                case '%':
                    cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << int(num1) % int(num2) << endl;
                    break;
                default:
                    cout << "invalid character for operator.\n";
            }  
        }
    }
    else if((int(num1) != num1 || int(num2) != num2 ) &&  op == '%' ) cout << "cannot execute modulo operation for floating point numbers.";
    else
    {
        switch (op)
        {
            case '+':
                cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << num1 * num2 << endl;
                break;
            case '/':
                cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << num1 / num2 << endl;
                break;
            case '%':
                cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " <<int(num1) % int(num2) << endl;
                break;
            default:
                cout << "invalid character for operator.\n";
        }
    }
    return 0;
}
// great work 😎 8.5/10 ⭐
