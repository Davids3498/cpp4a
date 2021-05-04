#include <iostream>
#include <string>
#include <fstream>
#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"

using namespace std;

namespace pandemic
{
    Researcher::Researcher(Board b, City c) : Player(b, c, "Researcher"){}
    string Player::role()
    {
        return Player::Role;
    }
}