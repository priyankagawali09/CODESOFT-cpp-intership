/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int mynum=rand() %100+1;
    int guess;
    cout << "Welcome to my the Guessing Game!" << endl;
    cout<<"ENter number bewteen 1to 100"<<endl;
    do{
        cout<<"Enter Number : ";
        cin>>guess;
        if(guess < mynum) {
            cout << "Your guess is too low.(please enter higher number)" << endl;
        } else if(guess > mynum) {
            cout << "Your guess is too high.(please enter lower number)" << endl;
        } else {
            cout << "Congratulations! You've guessed the number ( " << mynum <<")\n" << endl;
        }
    }while(guess != mynum);
    return 0;
}

