#include <iostream>
#include <ctime>
using namespace std;

int money = 100;

void Casino()
{
    int amount = 0; // initial amount
    cout << "Welcome to the casino!" << endl;
    cout << "\n";
    cout << "Your balance: " << "$" << money << endl;
    cout << "Insert money to play (requires $5 to play): " << endl;
    cin >> amount;

    if(amount == 5)
    {
        cout << "...Loading casino..." << endl;
        money -= 5; // depletes $5
        srand(time(0));
        int value = 1 + rand() % 4; // any random number b/w 1-4
        cout << "You must get the lucky number '3' to win money!" << endl;
        cout << "Your number: " << value << endl; // if 3 gets randomly generated, player wins $10

        if(value == 3)
        {
            cout << "Congratulations! You won $15 dollars!" << endl;
            money += 15; // adds $15
            cout << endl;
            Casino(); // repeats the Casino function
        }
        else
        {
            cout << "You didn't get the lucky number. Try again!" << endl;
            cout << endl;
            Casino();
        }
    }
    else
    {
        cout << "Insufficient amount deposited. Please try again." << endl;
        cout << endl;
        Casino();
    }
}

int main()
{
    Casino();
}
