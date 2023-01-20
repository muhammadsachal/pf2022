#include <iostream>
using namespace std;

void fibseries(int length);
main()
{
    int input;
    cout << " enter the length  ";
    cin >> input;

    if(input >2)
    {
        fibseries(input);
    }
    else if(input == 1)               
    {
        cout << endl << 0; 
    }
    else if(input == 2)                 
    {
        cout <<  endl << 0 << endl << 1; 
    }
}

void fibseries(int length)
{
    int num1 = 0;
    int num2 = 1;
    int sum = 0;

    cout << endl<< 0 <<endl;     
    cout << 1 << endl;

    for(int i = 0; i < length-2; i++)   
    {
        sum = num1+num2;
        num1 = num2;
        num2 = sum;
        cout << sum << endl;
    }
}