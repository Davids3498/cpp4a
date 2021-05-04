#include <iostream>
#include <string>
#include <fstream>
#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Virologist.hpp"

using namespace std;

namespace pandemic
{
    Virologist::Virologist(Board b, City c) : Player(b, c, "Virologist") {}

}