#include<iostream>
using namespace std;  
void asterics(int rows);
void astericss(int rows);
main()
{
int rows;
cout<<"Enter the number of rows"<<endl;
cin>>rows;

asterics(rows);
astericss(rows);

}

void asterics(int rows)
{

    for(int i=1; i<=rows; i++)
        {
            for(int j=rows ; j>=i; j--)
                {
                    cout<<" ";
                }
            for(int j=1; j<=i; j++)
                {
                    cout<<"*";
                }
        cout<<endl;
        }
        
}

void astericss(int rows)
{

    for(int i=1; i<=rows; i++)
        {
            for(int j=1; j<=i; j++)
                {
                    cout<<" ";
                }
            for(int j=rows; j>=i; j--)
                {
                    cout<<"*";
                } 
        cout<<endl;
        }
}
