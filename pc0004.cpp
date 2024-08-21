#include <iostream>
using namespace std;
int main()
{
    double num1 ;
    cout << "Enter a number form 32 to 126 : ";
    cin >> num1 ;
    char t = char(num1);
    if (num1 >= 32 && num1 <= 126)
    {
        cout << "The character for " << num1 << " is " << char(num1) << "." << endl;
    }
    else 
    {
         if(num1 < 32 && num1 != 0 && int(num1) == num1) cout << "Invalid: number is out of the range!";
        else if( t == num1  || num1 == 0) cout << "Invalid character/s or zero value!\n";
        else if ( int(num1) != num1 ) cout << "Invalid: a floating point number!\n";
    }
    return 0;
}