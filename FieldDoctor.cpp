#include <iostream>
#include <string>
#include <fstream>
#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "FieldDoctor.hpp"

using namespace std;

namespace pandemic
{
    FieldDoctor::FieldDoctor(Board b, City c) : Player(b, c, "FieldDoctor") {}

}