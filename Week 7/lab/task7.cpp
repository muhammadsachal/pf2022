#include <iostream>
#include<cmath>
using namespace std;

void printPercentage(float number, float total);

main()
{
    int n;
    int input;
    int range1 = 0; 
    int r2 = 0;
    int r3 = 0;
    int r4 = 0;
    int r5 = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input > 0 && input < 200)
        {
            range1 += 1;
        }
        else if(input < 400)
        {
            r2 += 1;
        }
        else if(input < 600)
        {
            r3 += 1;
        }
        else if(input < 800)
        {
            r4 += 1;
        }
        else if(input < 1001)
        {
            r5 += 1;
        }
    }
    cout << endl;
    printPercentage(range1,n);
    printPercentage(r2,n);
    printPercentage(r3,n);
    printPercentage(r4,n);
    printPercentage(r5,n);
}


void printPercentage(float number, float total)
{
    float percentage;
    percentage = (number / total)*100;
    percentage*=100;
    percentage = ceil(percentage);
    percentage/=100;

    cout << percentage <<"%"<< endl;
}