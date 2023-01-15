#include<iostream>
using namespace std;

string sign(int date,string month);
main()
{
    int date;
    string month;
    cout<<"Enter the date"<<endl;
    cin>>date;
    cout<<"Enter the month"<<endl;
    cin>>month;

    sign(date,month);

}
string sign(int date,string month)
{
    if(month=="march" || month=="april")
    {
        if(date>=21 || date<=19)
            {

                cout<<"THE RAM"<<endl;

            }


    }
    else if(month=="april" || month=="may")
    {
        if(date>=20 || date<=20)
            {

                cout<<"THE BULL"<<endl;

            }


    }
    if(month=="may" || month=="june")
    {
        if(date>=21 || date<=20)
            {

                cout<<"THE Twins"<<endl;

            }


    }
    if(month=="june" || month=="july")
    {
        if(date>=21 || date<=22)
            {

                cout<<"THE Crab"<<endl;

            }


    }
    if(month=="july" || month=="august")
    {
        if(date>=23 || date<=22)
            {

                cout<<"THE Lion"<<endl;

            }


    }
    if(month=="august" || month=="september")
    {
        if(date>=23 || date<=22)
            {

                cout<<"THE Virgin"<<endl;

            }


    }
    if(month=="september" || month=="october")
    {
        if(date>=23  || date<=22)
            {

                cout<<"THE Scales"<<endl;

            }


    }
    if(month=="october" || month=="november")
    {
        if(date>=23 || date<=21)
            {

                cout<<"THE Scorpion"<<endl;

            }


    }
    if(month=="november" || month=="december")
    {
        if(date>=21 || date<=19)
            {

                cout<<"THE Archer"<<endl;

            }


    }
    if(month=="december" || month=="january")
    {
        if(date>=22 || date<=19)
            {

                cout<<"THE Goat"<<endl;

            }


    }
    if(month=="january" || month=="february")
    {
        if(date>=20 || date<=18)
            {

                cout<<"THE Water Bearer"<<endl;

            }


    }
    if(month=="february" || month=="march")
    {
        if(date>=19 || date<=20)
            {

                cout<<"THE Fishes"<<endl;

            }

    }
    if(date < 1 || date > 31)
    {string nope = "INVALID DATE!!!!!!!!!!!";
    return nope;}


}
    


