#include<iostream>
using namespace std;  
void bound(int sequence);
main()
{
    int sequence;
    cout<<"ENTER THE NUMBER:"<<endl;
    cin>>sequence;
    bound(sequence);
}
void bound(int sequence)
{
    for(int numbers=1; numbers<=sequence; numbers++)
        {
            if(numbers%4==0)
            {
                int result;
                result=numbers*10;
                cout<<result;  
            }
        }
}
