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
    
    else if (int(num) != num)
        cout << "Invalid: a floating point number!\n";
    
    else if (num >= 32 && num <= 126)
    {
        char t = char(num);
        cout << "The character for " << num << " is " << char(num) << "." << endl;
    }
    
    else
        cout << "Invalid: number is out of the range!";
    
    return 0;
}
// good work 👍 6.5/10
