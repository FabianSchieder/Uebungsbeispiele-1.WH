#include <iostream>

using namespace std;

string upperLetter(string);

int main()
{
    string word;

    cout << "Eingabe: ";
    cin >> word;

    word = upperLetter(word);

    cout << "Umgewandelt: " << word;

return 0;
}

string upperLetter(string word)
{
    char letter;

    for(int i = 0; i < word.size(); i++)
    {
        if(word.at(i) >= 97 && word.at(i) <= 122)
        {
            letter = word.at(i) - 32;
            word.at(i) = letter;
        }
    }

return word;
}