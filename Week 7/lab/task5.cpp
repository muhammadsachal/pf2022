#include <iostream>
using namespace std;

int digitsf(int num);

main()
{
    int num;
    int reqNum;

    int digits;
    cout << "Enter digit "<<endl;
    cin >> num;

    digits = digitsf(num);
    cout << digits;
}

int digitsf(int num)
{
    int x = 0;       
    int digit = 0;      
    int sum = 0;       
    while( num > 0)
    {
        digit = num%10;
        sum = sum + digit;
        num=num/10;
        x = sum;
    }
    return x;
}