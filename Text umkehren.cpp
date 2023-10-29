#include <iostream>

using namespace std;

string turnWord(string);

int main()
{
    string input;

    cout << "Gibt das umzudrehende Wort ein: ";
    cin >> input;

    cout << "Umgedreht: " << turnWord(input);

    cin >> input;
    return 0;
}

string turnWord(string word)
{
    for(int i = 0; i < word.size() / 2; i++)
    {
        char temp = word.at(i);
        word.at(i) = word.at(word.size() - 1 - i);
        word.at(word.size() - 1 - i) = temp;
    }

    return word;
}