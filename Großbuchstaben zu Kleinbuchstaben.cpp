#include <iostream>

using namespace std;

string lowerLetter(string);

int main()
{
    string word;

    cout << "Eingabe: ";
    cin >> word;

    word = lowerLetter(word);

    cout << "Umgewandelt: " << word;

    return 0;
}

string lowerLetter(string word)
{
    char letter;

    for(int i = 0; i < word.size(); i++)
    {
        if(word.at(i) >= 65 && word.at(i) <= 90)
        {
            letter = word.at(i) + 32;
            word.at(i) = letter;
        }
    }

    return word;
}