#include<iostream>
using namespace std;
string all(string temp,string humidity);
main() 
{
    string temp, humidity;
    cout<<"Enter the temperature"<<endl;
    cin>>temp;
    cout<<"Enter the humidity"<<endl;
    cin>>humidity;

    if(temp=="warm" && humidity=="dry" )
    {
        cout<<"Play tennis"<<endl;

    }
    
    else if(temp=="warm" && humidity=="humid" )
    {
        cout<<"swim"<<endl;

    }
    
    else if(temp=="cold" && humidity=="dry" )
    {
        cout<<"Play basketball"<<endl;

    }
    
    else if(temp=="cold" && humidity=="humid" )
    {
        cout<<"watch tv"<<endl;

    }
}
