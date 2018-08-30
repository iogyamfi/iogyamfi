
#include<iostream>
using namespace std;

int num,i;
{
    int num, i;
    bool prime_number = true;
    cout << "enter an integer : ";
    cin>> num;
    for(i = 2;i<= num / 2; ++i)
    {
        if(n % i == 0)
        {
            prime_number = false;
            break;
        }
    }
    if (prime_number)
        cout << " this is a prime number";
        cout << "this is not a prime number";
        return 0;
}
