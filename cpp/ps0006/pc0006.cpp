#include <iostream>
#include <cmath>
using namespace std;
void counter(int end, int start = 0, int step = 1);

int main(void)
{
    // running my valid test cases
    
    counter(5); // 0 1 2 3 4 5
    cout << "\n===============" << endl;
    
    counter(3, 1); // 1 2 3
    cout << "\n===============" << endl;
    
    counter(-21, 6, -3); // 6 3 0 -3 -6 -9 -12 -15 -18 -21
    cout << "\n===============" << endl;
    
    counter(10, 10, 0); // 10
    cout << "\n===============" << endl;
    
    
    
    // // running invalid test cases, have to give clear error
    
    counter(100, 10, 0); // Error: can't start from 10 to 100 with step 0
    cout << "\n===============" << endl;
    
    counter(10, 10, 3); // Error: can't start from 10 to 10 with step 3
    cout << "\n===============" << endl;
    
    counter(33, 33, -4); // Error: can't start from 33 to 33 with step -4
    cout << "\n===============" << endl;
    
    counter(-15, 11, 4); // Error: can't start from -15 to 11 with step 4
    cout << "\n===============" << endl;
    
    counter(3, 1, -1); // Error: can't start from 1 to 3 with step -1
    cout << "\n===============" << endl;
    
    counter(-1, 3); // Error: can't start from 3 to -1 with step 1
    cout << "\n===============" << endl;
    
    counter(-1, -8, 3); // Error: can't start from -8 to -1 with step 3
    cout << "\n===============" << endl;
    
    counter(-8, 31, -2); // Error: can't start from 31 to -8 with step -2
    cout << "\n===============" << endl;
    
    
    
    // running bonus test cases
    
    counter(100, 1); // 1 2 3 4 5 6 ... 95 96 97 98 99 100
    cout << "\n===============" << endl;
    
    counter(100); // Massive number of iterations for our humble counter
    cout << "\n===============" << endl;
    
    counter(200, -44); // Massive number of iterations for our humble counter
    
    
    
    return 0;
}

void counter(int end, int start, int step){
    if(step == 0 && start == end) {cout << start << endl; return;}
    if(step != 0 && ( start % step != 0 || end % step != 0   )  )
        {
            cout << "Error: can't start from " << start << " to " << end << " with step " << step << endl;
            return;
        }
        if(abs(end - start) >= 100 )
        {
            cout << " Massive number of iterations for our humble counter\n";
            return;
        }
    if (step == 0 && start != end) 
        {   
            cout << "Error: can't start from " << start << " to " << end << " with step " << step << endl;
            return;
        }
    if (start == end)
        {
            cout << "Error: can't start from " << start << " to " << end << " with step " << step << endl;
            return;
        }
    if (step > 0)
        {
            if(start > end)
                {
                    cout << "Error: can't start from " << start << " to " << end << " with step " << step << endl;
                    return;
                }
            for (int i = start ;i <= end ; i +=step)
                {
                    cout << i << " ";
                }
            return;
        }
  
    else
        {
            if(start < end)
                {
                    cout << "Error: can't start from " << start << " to " << end << " with step " << step << endl;
                    return;
                }
            for(int i = start ; i >= end ; i += step)
                {
                    cout << i << " ";
                }
            return;
        }
}