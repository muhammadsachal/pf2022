#include<iostream>
using namespace std;
main()
{
    int number,dig1,dig2,dig3,dig4,sum;

    cout<<"Enter a 4 digit number"<<endl;
    cin>>number;

    dig1=(number%10);

    cout<<dig1;

    number=(number/10);

    dig2=(number%10);
    cout<<dig2;

    number=(number/10);

    dig3=(number%10);
    cout<<dig3;

    number=(number/10);

    dig4=number;

    cout<<dig4;

    sum=(dig3+dig4);
    sum=(sum+dig2);
    sum=(sum+dig1);

    cout<<"Sum is:"<<sum<<endl;

    
} 