#include<iostream>
using namespace std;
main()
{

float vegp,fruitp,vegc,fruitc,total,convert;
int vegkg,fruitkg;

cout<<"vegetable price per kilogram"<<endl;
cin>>vegp;
cout<<"fruit price per kilogram"<<endl;
cin>>fruitp;
cout<<"vegetable in kilogram"<<endl;
cin>>vegkg;
cout<<"fruit in  kilogram"<<endl;
cin>>fruitkg;

vegc=(vegp*vegkg);
cout<<"Vegetablen cost is"<<vegc<<endl;

fruitc=(fruitp*fruitkg);
cout<<"fruit price"<<fruitc<<endl;

total=fruitc+vegc;
cout<<total<<endl;

convert=(total*101);
cout<<convert<<endl;





}