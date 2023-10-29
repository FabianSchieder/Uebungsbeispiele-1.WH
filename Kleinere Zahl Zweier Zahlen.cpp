#include <iostream>

using namespace std;

float smallerNumber(float, float);

int main()
{
    float numberOne;
    float numberTwo;
    float number;

    cout << "Gib deine Erste Zahl ein: ";
    cin >> numberOne;
    cout << "Gib deine Zeweite Zahl ein: ";
    cin >> numberTwo;

    number = smallerNumber(numberOne, numberTwo);

    cout << "Die kleinere Zahl ist: " << number;
}

float smallerNumber(float numberOne, float numberTwo)
{
    if(numberOne < numberTwo)
    {
        return numberOne;
    }

    return numberTwo;
}
