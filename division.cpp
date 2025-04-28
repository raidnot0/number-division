#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout << "Enter your number: " << endl;
    cin >> num;
    
    if(num % 2 == 0 && num % 7 == 0)
    {
        cout << num << " is divisible by 2 & 7";
    }
    else
    {
        cout << num << " is not divisible by 2 & 7";
    }

    return 0;
}