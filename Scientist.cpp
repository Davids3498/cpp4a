#include <iostream>
#include <string>
#include <fstream>
#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Scientist.hpp"
using namespace std;

namespace pandemic
{
    Scientist::Scientist(Board b, City c, int) : Player(b, c, "Scientist") {}

}