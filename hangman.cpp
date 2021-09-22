#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    string wordList[] = {"flavor", "twig", "annoying", "cast", "spade", "challenge", "supreme", "land", "wandering", "bone"};
    int incorrect = 6;
    int wordNumber = rand() % 10;
    string word = wordList[wordNumber];
    char guess;
    string guessWord;
    vector<char> guessed;

    cout << word << endl << endl;
    cout << "There are " << word.length() << " letters in the word." << endl << endl;

    for (int i = 0; i < word.length(); i++)
    {
        guessWord += "-";
    }
    
    while (incorrect > 0)
    {
        bool guessResult = false;

        cout << incorrect << " guesse(s) left" << endl;
        cout << "Guess a letter in the word: " << guessWord << endl;
        cin >> guess;
        guessed.push_back(guess);
        cout << endl << "guessed words: ";
        for (auto i = guessed.begin(); i != guessed.end(); ++i)
            cout << *i << " ";
        
        for (int i = 0; i < word.length(); i++)
        {
            if(guess == word[i])
            {
                guessWord[i] = guess;
                guessResult = true;
            }
        }
        cout << endl;

        if (guessResult == false)
        {
            incorrect--;
        }
        
        
        if (word == guessWord)
        {
            cout << "congratulations, you guessed the word " << guessWord << " correctly." << endl;
            break;
        }

        switch (incorrect)
        {
        case 6:
        {
            cout << " _______    " << endl;
            cout << "|       |   " << endl;
            cout << "|           " << endl;
            cout << "|           " << endl;
            cout << "|           " << endl;
            cout << "|           " << endl;
            cout << "|           " << endl;
            break;
        }
        case 5:
        {
            cout << " _______    " << endl;
            cout << "|       |   " << endl;
            cout << "|       O   " << endl;
            cout << "|           " << endl;
            cout << "|           " << endl;
            cout << "|           " << endl;
            cout << "|           " << endl;
            break;
        }
        case 4:
        {
            cout << " _______    " << endl;
            cout << "|       |   " << endl;
            cout << "|       O   " << endl;
            cout << "|       |   " << endl;
            cout << "|       |   " << endl;
            cout << "|       |   " << endl;
            cout << "|           " << endl;
            break;
        }
        case 3:
        {
            cout << " _______    " << endl;
            cout << "|       |   " << endl;
            cout << "|       O   " << endl;
            cout << "|       |   " << endl;
            cout << "|      /|   " << endl;
            cout << "|       |   " << endl;
            cout << "|           " << endl;
            break;
        }
        case 2:
        {
            cout << " _______    " << endl;
            cout << "|       |   " << endl;
            cout << "|       O   " << endl;
            cout << "|       |   " << endl;
            cout << "|      /|\\ " << endl;
            cout << "|       |   " << endl;
            cout << "|           " << endl;
            break;
        }
        case 1:
        {
            cout << " _______    " << endl;
            cout << "|       |   " << endl;
            cout << "|       O   " << endl;
            cout << "|       |   " << endl;
            cout << "|      /|\\ " << endl;
            cout << "|       |   " << endl;
            cout << "|      /    " << endl;
            cout << "Game Over" << endl;
            cout << "You have used up all of your guesses." << endl;
            break;
        }
        case 0:
        {
            cout << " _______    " << endl;
            cout << "|       |   " << endl;
            cout << "|       O   " << endl;
            cout << "|       |   " << endl;
            cout << "|      /|\\ " << endl;
            cout << "|       |   " << endl;
            cout << "|      / \\ " << endl;
            cout << "Game Over" << endl;
            cout << "You have used up all of your guesses." << endl;
            break;
        }
        default:
        {
            cout << "incorrect input, try again" << endl;
        }

        }
    }
}
