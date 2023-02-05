#include<iostream>
using namespace std;
main()
{
    int number[5];
    
    for(int idx=1;idx<5;idx++)
    {
        cout << "ENter the numbers";
        cin >> number[idx];
       
    }
int smallest=number[0];
    for(int idx=1;idx<5;idx++)
    {
        if(number[idx]<smallest)
        {
            smallest=number[idx];
        }

       
    }
    cout << smallest;
     
}