#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */

using namespace std;

int main()
{
    int guessNumber, secretNumber;
    //Initilize
     srand (static_cast<unsigned int>((time(nullptr))));

    // Generate(1-10)
    secretNumber = rand() % 10 + 1;

    //Ask the user to guess
    cout << "Guess my number ( 1-10 ) : ";

    do {
        cin >> guessNumber;
        if (secretNumber < guessNumber) {
            cout << "The number is lower than that." << endl;
        } else if (guessNumber > secretNumber) {
            cout << "The number is higher than that." << endl;
        }
    } while(guessNumber != secretNumber);

    cout << "Congratulations, the number is :" << guessNumber << endl;

    return 0;
}
