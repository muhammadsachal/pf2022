#include <iostream>
using namespace std;
main()
{
    string movies[5] = {"gladiator", "starwars", "terminator", "takinglives", "tombrider"};
    string movie;
    cout << "Enter the movie name" << endl;
    cin >> movie;
    int price = 500;

    for (int idx = 0; idx <= 4; idx++)
    {
        if (movies[idx] == movie)
        {
            if (idx % 2 == 0)
            {
                cout << (price * 10) / 100;
            }
            else if (idx % 2 != 0)
            {
                cout << (price * 5) / 100;
            }
        }
    }
}
