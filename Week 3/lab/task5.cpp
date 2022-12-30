#include<iostream>
using namespace std;
main() 
{
int m,i,c;
float aggregate;

cout<<"matric marks"<<endl;
cin>>m;

cout<<"intermediate marks"<<endl;
cin>>i;

cout<<"ecat marks"<<endl;
cin>>c;

aggregate=((m/1100.0)*40.0+(i/1100.0)*10.0+(c/500.0)*50.0);
cout<<aggregate;

}

