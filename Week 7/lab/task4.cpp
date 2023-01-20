#include <iostream>
using namespace std;

int digitsf(int num, int reqNum)
main()
{
    int num;
    int reqNum;

    int digits;
    cout << "Enter the number "<<endl;
    cin >> num;
    cout<<"For frequency"<<endl;
    cin>>reqNum;

    digits = digitsf(num, reqNum);
    cout << digits;
}

int digitsf(int num, int reqNum)
{
    int x = 0;
    int digit;
    for(int i = 1; num > 0; i++)
    {
        digit = num%10;
        if(digit==reqNum){
            x=x+1;
        }
        num=num/10;
    }
    return x;
}