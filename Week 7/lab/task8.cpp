#include <iostream>
using namespace std;
float calculation(int age, int tprice, float machinep);

main()
{
    int age;
    int tprice;
    float machinep;
    float money;

    cout<<"please enter age "<<endl;
    cin>>age;
    cout<<"Enter machine price"<<endl;
    cin>>machinep;
    cout<<"Enter the price of toys"<<endl;
    cin>>tprice;

    money = calculation(age, tprice, machinep);                

    if(money >= 0)
    {
    cout << "so money " <<  money <<  " $ needed";
    }
    else
    {
    money = money * -1;
    cout << "She is " <<  money <<  " $ short";
    }

}

float calculation(int age, int tprice, float machinep)
{
    float answer;
    int gmoney = 0;
    int tmoney = 0;

    for(int i =2; i<=age;i=i+2)       
    {
        gmoney = gmoney + i * 5;
        gmoney-= 1;
    }


    for(int i = 1; i <=age;i=i+2)       
    {
        tmoney = tmoney + tprice;
    }

    answer = (gmoney+tmoney)-machinep;
    return answer;
}