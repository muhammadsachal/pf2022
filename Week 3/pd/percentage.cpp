#include<iostream>
using namespace std;
main()
{


string name;
int a,b,c,d,e;
 float percentage;

 cout<<"Enter your name"<<endl;
 cin>>name;

 cout<<"Enter your subject 1 marks "<<endl;
cin>>a;
  cout<<"Enter your subject 2 marks "<<endl;
cin>>b;
   cout<<"Enter your subject 3 marks "<<endl;
cin>>c;
    cout<<"Enter your subject 4 marks "<<endl;
cin>>d;
     cout<<"Enter your subject 5 marks "<<endl;
cin>>e;

percentage=((a+b+c+d+e)/500)*100;

cout<<"percentage is:"<<percentage<<endl;

}

