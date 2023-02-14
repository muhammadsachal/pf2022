#include <iostream>
using namespace std;
main()
{
    string elements[4];

for(int i=0; i<4; i++)
{
    cout<<"Enter the elements";
    cin>>elements[i];

    if(elements[1] == elements[2] && elements[2] == elements[3] && elements[3] == elements[4])
    {

    cout<<"same";

    }
    else 
    {
        cout<<"not";
    }
}

}