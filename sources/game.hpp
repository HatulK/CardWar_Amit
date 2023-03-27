#include "player.hpp"

namespace ariel {
    class Game {
    public:
        void playTurn();

        void printLastTurn();

        void playAll();

        void printWiner();

        void printLog();

        void printStats();

        Game(Player &player1, Player &player2);
        ~Game();

    private:
        Player player1;
        Player player2;
    };
}