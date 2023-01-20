#include<iostream>
using namespace std;  
void asterics(int rows);

main()
{
int rows;
cout<<"Enter the number of rows"<<endl;
cin>>rows;

asterics(rows);

}

void asterics(int rows)
{

    for(int i=1; i<=rows; i++)
        {
        
            for(int j=1; j<=i; j++)
                {
                    cout<<"*";
                }
            for(int j=rows ; j>=i; j--)
                {
                    cout<<" ";
                }
            for(int j=rows; j>=i; j--)
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
        


