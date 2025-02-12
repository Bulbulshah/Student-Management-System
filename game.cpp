#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int num,guess,attempts;
    char ch;
    do
    {
        cout<<"Welcome to the Guessing Game!"<<endl<<"Instructions:"<<endl;
        cout<<"1. The computer will think of a number between 1 and 100."<<endl;
        cout<<"2. You have 4 chances to guess the number."<<endl;
        cout<<"3. After each guess, you'll get a hint if your guess is too high or too low."<<endl;
        cout<<"4. After the game, you can choose to play again or exit."<<endl<<endl;
        srand(time(0));
        num=rand()%100+1;
        attempts=4;
        while(attempts>0)
        {
            cout<<"Enter your guess: ";
            cin>>guess;
            if(guess==num)
            {
                cout<<"Congratulations! You guessed the correct number!"<<endl;
                break;
            }
            else if(guess<num)
            {
                cout<<"Your guess is too low."<<endl;
            }
            else
            {
                cout<<"Your guess is too high."<<endl;
            }
            attempts--;
        }
        if(attempts==0)
        {
            cout<<"You've used all your attempts. The correct number was "<<num<<"."<<endl;
        }
        cout<<"Do you want to play again? (y for Yes, n for No): ";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
    cout<<"Thanks for playing!"<<endl;
    return 0;
}