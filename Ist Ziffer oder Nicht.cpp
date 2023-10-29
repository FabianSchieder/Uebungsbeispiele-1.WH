#include <iostream>

using namespace std;

bool isDigit(char);

int main()
{
    char input;

    cout << "Gib ein Zeichen ein, das ueberprueft werden soll: ";
    cin >> input;

    if(isDigit(input))
    {
        cout << input << " ist eine Ziffer!";
    }
    else
    {
        cout << input << " ist keine Ziffer!";
    }

    return 0;
}

bool isDigit(char input)
{
    if(input >= 48 && input <= 57)
    {
        return true;
    }
    else
    {
        return false;
    }
}