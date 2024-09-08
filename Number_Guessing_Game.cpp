#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secret_random_number = rand() % 10 + 1;
    int in_user_guess = 0;

    cout << "--Welcome to the Number Guessing Game. -- " << endl;
    cout << "Enter any number between range of 1 to 10. Try to guess it. " << endl;

    while (true)
    {
        cout << "Please enter your guess: ";
        cin >> in_user_guess;

        if (in_user_guess < secret_random_number)
        {
            cout << "Sorry please try again. (The number is too low). " << endl;
        }
        else if (in_user_guess > secret_random_number)
        {
            cout << "Sorry please try again. (The number is too high). " << endl;
        }

        else
        {
            cout << "Congratulations You guessed the correct number, which is: " << secret_random_number<<endl;
            cout << "Exiting..";
            break;
        }
    }

    return 0;
}