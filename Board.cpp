#include <iostream>
#include <string>
#include "City.hpp"
#include "Board.hpp"
using namespace std;

namespace pandemic
{

    bool Board::is_clean()
    {
        cout << "is_clean" << endl;
        return false;
    }
    Board Board::operator[](City)
    {
        cout << "operator[]" << endl;
        return *this;
    }
    Board Board::operator=(int)
    {
        cout << "operator=" << endl;
        return *this;
    }
    ostream &operator<<(std::ostream &out, const Board &b)
    {
        return out << "Board operator <<";
    }
    void Board::remove_cures()
    {
        cout << "remove_cures" << endl;
    }

}