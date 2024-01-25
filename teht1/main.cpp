#include <cstdlib>
#include <iostream>
#include <ctime>


// TEHTÄVÄ 1.1


// using namespace std;
// int passed = true;

// int main() {
//     srand(time(NULL));
//     int randNum;
//     int userNum;
//     randNum = rand() % 20;
//     cout << "Type a number: ";
//     cin >> userNum;
//     while(passed){
//         if (randNum < userNum){
//             cout << "Too high. Guess a new number: ";
//             cin >> userNum;
//         }
//         else if(randNum > userNum){
//             cout << "Too low. Guess a new number: ";
//             cin >> userNum;
//         }
//         else if(randNum == userNum){
//             cout << "Correct";
//             passed = false;
//         }
//     }
// }


// TEHTÄVÄ 1.2
using namespace std;

int guesses = 0;

void game(int maxnum) {
    int passed = true;
    int randNum;
    int userNum;

    srand(time(NULL));
    cout << "Korkein etsittava luku: ";
    cin >> maxnum;
    randNum = rand() % maxnum;

    cout << "Arvaa luku: ";
    cin >> userNum;

    while(passed){
        if (randNum < userNum){
            cout << "Liian suuri. Arvaa uusiksi: ";
            cin >> userNum;
            guesses++;
        }
        else if(randNum > userNum){
            cout << "Liian pieni. Arvaa uusiksi: ";
            cin >> userNum;
            guesses++;
        }
        else if(randNum == userNum){
            cout << "Oikein. ";
            passed = false;
        }
    }
}

int main(){
    int maxnum = 0;
    game(maxnum);
    cout << "Arvaukset: " << guesses + 1;
    return 0;
}
