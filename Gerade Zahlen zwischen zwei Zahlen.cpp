#include <iostream>

using namespace std;

void evenNumbers(int, int);

int main()
{
    int numberOne;
    int numberTwo;

    cout << "Gib deine Erste Zahl ein: ";
    cin >> numberOne;
    cout << "Gib deine Zweite Zahl ein: ";
    cin >> numberTwo;

    evenNumbers(numberOne, numberTwo);

    return 0;
}

void evenNumbers(int numberOne, int numberTwo)
{
    if(numberOne > numberTwo)
    {
        for(int i = numberTwo; i <= numberOne; i++)
        {
            if(i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }

    if(numberOne < numberTwo)
    {
        for(int i = numberOne; i <= numberTwo; i++)
        {
            if(i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }
}