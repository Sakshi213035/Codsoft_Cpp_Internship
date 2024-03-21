#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand((unsigned int  )time(NULL));
    int number=(rand() % 100) + 1; 
    int guess=0;
    do{
        cout<<"Enter your guess(1-100):"<<endl;
        cin>>guess;
            if (guess==number)
            cout<<"Congratulation!Correct Guess"<<endl;
            
            else if (guess>number)
            cout<<"Your guess is too high!"<<endl;
            
            else if (guess<number)
                cout<<"Your guess is too low!"<<endl;
            
    }while(guess!=number);
    return 0;

}