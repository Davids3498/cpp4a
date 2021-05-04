#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"

namespace pandemic
{
    class Player
    {
    private:
        std::string Role;

    public:
        Player(Board, City, const std::string &);
        Player() {}
        virtual Player &build();
        virtual Player &take_card(City);
        virtual Player &fly_direct(City);
        virtual Player &treat(City);
        virtual Player &drive(City);
        virtual Player &fly_charter(City);
        virtual Player &fly_shuttle(City);
        virtual Player &discover_cure(Color);
        std::string role();
    };
}