#include <iostream>
using namespace std;
int main()
{
    // prompting user for number 1.5/1.5
    double num;
    cout << "Enter a number form 32 to 126 : ";
    cin >> num;

    // checking invalidaty of user's input 3/4
	// printing the number and the opposite printable character 2/2
    if(num == 0)
        cout << "Invalid character/s or zero value!\n";
    
    else if (int(num1) != num1)
        cout << "Invalid: a floating point number!\n";
    
    else if (num >= 32 && num <= 126)
    {
        char t = char(num1);
        cout << "The character for " << num1 << " is " << char(num1) << "." << endl;
    }
    
    else
        cout << "Invalid: number is out of the range!";
    
    return 0;
}
// good work 👍 7/10
