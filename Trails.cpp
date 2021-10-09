/*
Welcome to Smeagles trails.

You have to guess what three numbers Smeagles is thinking, he will give you hints but as you progress the trails will get harder.

Will you get away with the ONE RING or will smeagle kill you.

*/

#include <iostream>
using namespace std;

void PrintInto(){
    
    cout<<"\n\nAfter being chased by goblins through the mines of Morior, you stubble opon a ring.\nAs you pick it, a creature appears. \"What you got there\" he mutters.\n\"Nothing you reply.....\" finish later\n"<< endl;
}

//Play the game
void playGuessingGame(int level){

    cout<< "\n Level " << level;

    // Intailize the three numbers
    int NumberOne = 3;
    int NumberTwo = 3;
    int NumberThree = 4;
    int NumberSum= NumberOne + NumberTwo + NumberThree;
    int NumberProduct = NumberOne * NumberTwo * NumberThree;

    // Hints
    cout<< "\n Smaegal Is thinking of three numbers....  ";
    cout<< "\n The Sum of the numbers are  " << NumberSum;
    cout<< "\n And the Product of the numbers are " << NumberProduct;

    //Get User Input
    cout<< "\n\n \"Guess filthy Hobitsees..\"\n";
   
    int PlayerGuessOne,PlayerGuessTwo,PlayerGuessThree;
    cin >> PlayerGuessOne;
    cin >> PlayerGuessTwo;
    cin >> PlayerGuessThree;

    cout<< "\n You guessed ...."<< PlayerGuessOne << "..."<< PlayerGuessTwo<< "..." << PlayerGuessThree << endl;
    
    int GuessSum = PlayerGuessOne + PlayerGuessTwo + PlayerGuessThree;
    int GuessProduct = PlayerGuessOne * PlayerGuessTwo * PlayerGuessThree;

    //Check if they user has the correct numbers and print the corrisponding message
    if(GuessSum == NumberSum && GuessProduct == NumberProduct){
        cout<< "\n\n Thats Correct, you survive....this time\n";
    }
    else{
        cout<< "\n\n Thats INCORRECT, yous are going to be tasty\n";
    }

}


int main(){

    int StartLvl = 2;
    const int MaxLvl = 3;
    int Lives = 3;

    PrintInto();

    // Intailize the game till the max level
    while (StartLvl <= MaxLvl){
        playGuessingGame(StartLvl);
        cin.clear();
        cin.ignore();
        StartLvl++;
    }
    
    return 0;
}