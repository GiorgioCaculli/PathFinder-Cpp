#include "Dexterity.hpp"

using namespace pathfinder::core::character::characteristics;

Dexterity::Dexterity( short value )
: Characteristic( DEXTERITY, value )
{
    set_name( "Dexterity" );
}

Dexterity::Dexterity( const Dexterity &dexterity )
: Dexterity( dexterity.get_value() )
{
}

Dexterity &Dexterity::operator=( const Dexterity &dexterity )
{
    if( &dexterity != this )
    {
        Characteristic::operator=( dexterity );
    }
    return *this;
}

Dexterity::~Dexterity()
= default;
