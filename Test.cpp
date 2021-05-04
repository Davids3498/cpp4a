#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;
#include <vector>

TEST_CASE("Role assertion")
{
    Board board;
    Virologist Viro{board, City::Atlanta};
    Medic Med{board, City::Kinshasa};
    Dispatcher Dis{board, City::MexicoCity};
    OperationsExpert OE{board, City::Johannesburg};
    GeneSplicer GS{board, City::HoChiMinhCity};
    FieldDoctor FD{board, City::Washington};
    Scientist Sci{board, City::Chicago, 4};
    Researcher Res{board, City::SaoPaulo};
    CHECK(Viro.role() == "Virologist");
    CHECK(Med.role() == "Medic");
    CHECK(Dis.role() == "Dispatcher");
    CHECK(OE.role() == "OperationsExpert");
    CHECK(GS.role() == "GeneSplicer");
    CHECK(FD.role() == "FieldDoctor");
    CHECK(Sci.role() == "Scientist");
    CHECK(Res.role() == "Researcher");
}

TEST_CASE("Drive")
{
    Board board;
    Virologist Viro{board, City::Atlanta};
    Viro.take_card(City::Tehran)
        .take_card(City::Lima)
        .take_card(City::SaoPaulo)
        .take_card(City::Kolkata)
        .take_card(City::Bogota)
        .take_card(City::Sydney);
    CHECK_THROWS(Viro.drive(City::Tehran));
    CHECK_THROWS(Viro.drive(City::Lima));
    CHECK_THROWS(Viro.drive(City::SaoPaulo));
    CHECK_THROWS(Viro.drive(City::Kolkata));
    CHECK_THROWS(Viro.drive(City::Sydney));
    CHECK_THROWS(Viro.drive(City::Bogota));
}

TEST_CASE("Board")
{
    Board board;
    CHECK(board.is_clean() == true);
    board[City::Kinshasa] = 1;
    CHECK(board.is_clean() == false);
    Virologist Viro{board, City::Kinshasa};
    Viro.take_card(City::Kinshasa)
        .take_card(City::Kinshasa)
        .take_card(City::Kinshasa);
    Viro.treat(City::Kinshasa);
    CHECK(board.is_clean() == true);
    CHECK_THROWS(Viro.treat(City::Kinshasa));
    board[City::Kinshasa] = 3;
    Medic Med{board, City::Kinshasa};
    CHECK(board.is_clean() == false);
    Med.take_card(City::Kinshasa)
        .take_card(City::Kinshasa)
        .take_card(City::Kinshasa);
    Med.treat(City::Kinshasa);
    CHECK(board.is_clean() == true);
}