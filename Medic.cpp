#include <iostream>
#include <string>
#include <fstream>
#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Medic.hpp"

using namespace std;

namespace pandemic
{
    Medic::Medic(Board b, City c) : Player(b, c, "Medic") {}

}