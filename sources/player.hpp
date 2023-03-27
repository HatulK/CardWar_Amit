#include "string"
#pragma once
namespace ariel {
    class Player {
    public:
        int stacksize();

        int cardesTaken();

        Player(std::string name);

        Player();

        ~Player();

    private:
        std::string name;
    };
}