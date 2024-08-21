#include <iostream>
using namespace std;
int main()
{
    long long num;
    cout << "Enter number: ";
    cin >> num;
    if( num % 2 == 0)
    {
        cout << "Number is even" <<endl;
    }
    else
    {
        cout << "Number is odd" <<endl;
    }

    return 0;
}