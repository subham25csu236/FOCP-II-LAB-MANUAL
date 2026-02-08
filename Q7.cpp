/* A game compares three players' scores to find who is ahead. Implement a solution to accept three scores 
and identify the winner. */
#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int score;

    void input() {
        cout << "Enter player name: ";
        cin >> name;
        cout << "Enter score: ";
        cin >> score;
    }
};

class Game {
public:
    void findWinner(Player p1, Player p2, Player p3) {
        if (p1.score > p2.score && p1.score > p3.score) {
            cout << "Winner: " << p1.name << endl;
        }
        else if (p2.score > p1.score && p2.score > p3.score) {
            cout << "Winner: " << p2.name << endl;
        }
        else if (p3.score > p1.score && p3.score > p2.score) {
            cout << "Winner: " << p3.name << endl;
        }
        else {
            cout << "It's a tie between two or more players!" << endl;
        }
    }
};

int main() {
    Player p1, p2, p3;
    Game g;

    cout << "Enter details for Player 1\n";
    p1.input();

    cout << "\nEnter details for Player 2\n";
    p2.input();

    cout << "\nEnter details for Player 3\n";
    p3.input();

    cout << "\nResult:\n";
    g.findWinner(p1, p2, p3);

    return 0;
}