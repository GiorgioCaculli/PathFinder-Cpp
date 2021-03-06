#include <iostream>

#include "main.hpp"
#include "ui/gui/MainFrame.hpp"
#include <core/character/race/Elf.hpp>
#include <core/character/characteristics/Force.hpp>
#include <core/character/characteristics/Dexterity.hpp>
#include <core/character/characteristics/Constitution.hpp>
#include <core/character/characteristics/Intelligence.hpp>
#include <core/character/characteristics/Wisdom.hpp>
#include <core/character/characteristics/Charisma.hpp>

#include <QApplication>

using namespace rpg::character;
using namespace pathfinder::ui::gui;

int main( int argc, char *argv[] )
{
    std::cout << "Calling: ";
    for( int i = 0; i < argc; i++ )
    {
        std::cout << argv[ i ];
    }
    std::cout << std::endl;
    std::cout << "Hello, World!" << std::endl;

    int res = 0;

    Character character = race::Elf(
            "Seldon Gelleger",
            true,
            92,
            race::SkinTone::GREEN,
            1.95f,
            80.f,
            race::Color::GREEN,
            race::Color::GREEN,
            "Bari",
            "April",
            "Loyal" );

    auto *force = new characteristics::Force( 10 );
    auto *dexterity = new characteristics::Dexterity( 11 );
    auto *constitution = new characteristics::Constitution( 12 );
    auto *intelligence = new characteristics::Intelligence( 13 );
    auto *wisdom = new characteristics::Wisdom( 14 );
    auto *charisma = new characteristics::Charisma( 15 );

    std::array< characteristics::Characteristic *, characteristics::Characteristic::CHARACTERISTICS_COUNT > characteristics =
            {
                    force, dexterity, constitution, intelligence, wisdom, charisma
            };

    character.set_characteristics( characteristics );

    std::cout << character.to_string() << std::endl;

    QApplication app( argc, argv );
    MainFrame mf;
    mf.show();
    res = QApplication::exec();

    for ( characteristics::Characteristic *characteristic: characteristics )
    {
        delete characteristic;
    }

    return res;
}
