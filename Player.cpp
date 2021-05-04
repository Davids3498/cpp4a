#include <iostream>
#include <string>
#include <fstream>
#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
using namespace std;

namespace pandemic
{
    Player::Player(Board b, City c, const string &PRole)
    {
        Role = PRole;
    }
    Player &Player::build()
    {
        cout << "build " << endl;
        return *this;
    }
    Player &Player::take_card(City)
    {
        cout << "take_card " << endl;
        return *this;
    }
    Player &Player::fly_direct(City)
    {
        cout << "fly_direct " << endl;
        return *this;
    }
    Player &Player::treat(City)
    {
        cout << "treat " << endl;
        return *this;
    }
    Player &Player::drive(City)
    {
        cout << "drive " << endl;
        return *this;
    }
    Player &Player::fly_charter(City)
    {
        cout << "fly_charter " << endl;
        return *this;
    }
    Player &Player::fly_shuttle(City)
    {
        cout << "fly_shuttle " << endl;
        return *this;
    }
    Player &Player::discover_cure(Color)
    {
        cout << "discover_cure " << endl;
        return *this;
    }
}