#include <iostream>
using namespace std;

float moneyCalc(float money, int year);

main()
{
    int year;
    float money;
    float remaining;

    cout << "money and year is: ";
    cin >> money;
    cin >> year;

    remaining = moneyCalc(money, year);

    if(remaining>0)
    {
    cout << "remaining " <<  remaining << "$";
    }
    else{
    remaining = remaining * -1;
    cout << "He lacks this much worth " <<  remaining;
    }
}

float moneyCalc(float money, int year)
{
    int currentAge = 19;
    int ageMoney = 0;
    int yearMoney = 0;
    float answer;

    year = year - 1800;        
    for(int i = 0; i<=year;i++)
    {
        yearMoney = yearMoney + 12000;
    }
    for(int i = 1; i<=year;i=i+2)
    {
        ageMoney = ageMoney + (50 * currentAge);
        currentAge = currentAge + 2;
    }

    answer = money - (ageMoney + yearMoney);
    return answer;

}