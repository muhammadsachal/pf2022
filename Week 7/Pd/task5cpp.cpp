#include<iostream>
using namespace std;  
int triangle(int rows);
main()
{
    int rows;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    
    triangle(rows);

}
int triangle(int rows)
{
    int sum=0;
    for(int number=1; number<=rows; number++)
    {  
        sum=sum+number;
    }
    cout<<sum;

}
