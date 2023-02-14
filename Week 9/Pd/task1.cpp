#include <iostream>
using namespace std;
main()
{
    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    int kg;
    string fruit;
    int total;
    int x;
    cout << "Enter fruit name" << endl;
    cin >> fruit;
    cout << "Enter amount" << endl;
    cin >> kg;

    for (int idx = 0; idx < 4; idx++)
    {
        if (fruits[idx] == fruit)
        {
            x = idx;
        }
    }
    total = kg * price[x];
    cout << total;
}
