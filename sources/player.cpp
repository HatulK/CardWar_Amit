//
// Created by vboxuser on 3/24/23.
//
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "string"
#include "player.hpp"

using namespace ariel;

int Player::cardesTaken() {
    return 0;
}

int Player::stacksize() {
    return 0;
}

Player::Player(std::string name) : name(name) {

}

Player::~Player() {

}

Player::Player() {

}
#endif