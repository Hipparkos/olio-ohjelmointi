#include "game.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

Game::Game(int){
    cout << "Korkein etsittava luku: ";
    cin >> maxNum;
    numOfGuesses = 0;
}

Game::~Game(){
    cout << "Peli paattyi";
}

void Game::printGameResult(){
    cout << "Arvaukset: " << numOfGuesses << endl;
}

void Game::play(){
    srand(time(NULL));
    randNum = rand() % maxNum;
    int passed = true;

    while(passed){
        cout << "Arvaa luku: ";
        cin >> playerGuess;
        numOfGuesses++;

        if (randNum < playerGuess){
            cout << "Liian suuri. Arvaa uusiksi: " << endl;
        }
        else if(randNum > playerGuess){
            cout << "Liian pieni. Arvaa uusiksi: " << endl;
        }
        else{
            cout << "Oikein. ";
            printGameResult();
            passed = false;
        }
    }
}
