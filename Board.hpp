#pragma once
#include <iostream>
#include <string>
#include "City.hpp"
namespace pandemic
{
    class Board
    {
    private:
    public:
        Board()
        {
            std::cout << "This is board" << std::endl;
        }
        bool is_clean();
        Board operator[](City);
        Board operator=(int);
        friend std::ostream &operator<<(std::ostream &, const Board &);
        void remove_cures();
    };
}