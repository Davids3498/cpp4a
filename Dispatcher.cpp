#include <iostream>
#include <string>
#include <fstream>
#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Dispatcher.hpp"

using namespace std;

namespace pandemic
{
    Dispatcher::Dispatcher(Board b, City c) : Player(b, c, "Dispatcher") {}

}