//
// Created by vboxuser on 3/24/23.
//
#ifndef CARD_HPP
#define CARD_HPP
#include "card.hpp"
using namespace ariel;
ariel::Card::Card(int num, std::string suit) {

}

int ariel::Card::getNum(){
    return num;
}


std::string &ariel::Card::getSuit(){
    return suit;
}

int ariel::Card::compareCards(ariel::Card card1) {
    return 0;
}

Card::~Card() {

}
#endif