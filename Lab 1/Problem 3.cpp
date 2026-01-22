#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;

    cout<<setfill('*')<<setw(10)<<""<<" Welcome to number guessing Game"<<setw(10)<<""<<endl<<endl;
    cout<<"I have chosen a number between 1 and 100.Try to guess it!"<<endl;

    for(int i = 1; 1; i++)
    {
    cout<<endl<<"Enter your guess : ";
    cin>>num;

    if(num > 56)
    {
    cout<<"Too high! try again."<<endl;
    }
    else if(num < 56)
    {
    cout<<"Too low! Try again."<<endl;
    }
    else
    {
        cout<<"Congratulations! You guessed the number in "<<i<<" attempts!";
        return 0;
    }
    cout<<"Do you want t play it again (y/n) : "<<endl;
    char ch;
    cin>>ch;

    if(ch == 'n')
        return 0;
    }
    return 0;
}
