#include "string"

namespace ariel {
    class Card {
    public:
        Card(int num, std::string suit);
        ~Card();
    private:
        int num;
    public:
        int getNum();

        int compareCards(Card card1);


        std::string &getSuit();


    private:
        std::string suit;
    };
}