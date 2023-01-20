#include <iostream>
using namespace std;


int GCDcalc(int num1, int num2);
int LCMcalc(int num1, int num2, int GCD);

main()
{
    int num1;
    int num2;
    int GCD;
    int LCM;

    cout << "Enter 2 numbers: ";

    cin >> num1;
    cin >> num2;

    GCD = GCDcalc(num1, num2);
    LCM = LCMcalc(num1, num2, GCD);
    cout << "GCD is: " << GCD << endl;
    cout << "LCM is: " << LCM << endl;
}


int GCDcalc(int num1, int num2)
{
    if(num2 > num1) 
    {
        int t;
        t = num2;
        num2 = num1;
        num1 = t;
    }

    while(num1%num2!=0)
    {
        int remainder;
        remainder = num1%num2; 
        num1 = num2;
        num2 = remainder;
    }
    return num2;

}
int LCMcalc(int num1, int num2, int GCD)
{
    return (num1*num2)/GCD;
}