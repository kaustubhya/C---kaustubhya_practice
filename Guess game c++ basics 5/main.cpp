#include <iostream>

using namespace std;

int main()
{
    int secretNumber = 8;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (secretNumber != guess && !outOfGuesses){
            if (guessCount < guessLimit){
                cout << "Enter Guess: ";
                cin >> guess;
                guessCount++;
                }
                else{
                outOfGuesses = true;
            }
    }

            if(outOfGuesses){
                cout << "You Lose!!";
            }

            else{
                cout << "You Win! ";
            }
    return 0;
}
