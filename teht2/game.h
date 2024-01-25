#ifndef GAME_H
#define GAME_H

class Game{
public:
    Game(int);
    ~Game();
    void play();

private:
    int maxNum;
    int playerGuess;
    int randNum;
    int numOfGuesses;
    void printGameResult();
};



#endif // GAME_H
