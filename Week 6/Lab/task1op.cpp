#include<iostream> 
using namespace std;
int dis(string day, string month,int amount,int disc);
main()
{
    string day,month;
    int amount;
    int disc;

    cout<<"Enter the day"<<endl;
    cin>>day;
    cout<<"Enter the  month"<<endl;
    cin>>month;
    cout<<"Enter amount"<<endl;
    cin>>amount;

    dis(day,month,amount,disc);

}
int dis(string day, string month,int amount,int disc)
{
    if(day=="sunday" && month=="october")
        {

            disc=(amount*10)/100;
            amount=amount-disc;
            cout<<amount;
        }
    else if(day=="sunday" && month!="october")
        {

        disc=(amount*5)/100;
            amount=amount-disc;
            cout<<amount;
        }
    else if(day!="sunday" && month=="october")
        {
            cout<<amount;
        }
}


