#include <iostream>

#include "main.hpp"
#include "core/character/race/Elf.hpp"
#include "ui/gui/MainFrame.hpp"

#include <QApplication>

using namespace pathfinder::core::character;
using namespace pathfinder::ui::gui;

int main( int argc, char *argv[] )
{
    std::cout << "Hello, World!" << std::endl;

    int res = 0;

    QApplication app( argc, argv );
    MainFrame mf;
    mf.show();
    res = app.exec();

    return res;
}
