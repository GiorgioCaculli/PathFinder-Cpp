#include "Wisdom.hpp"

using namespace pathfinder::core::character::characteristics;

Wisdom::Wisdom( short value )
        : Characteristic( WISDOM, value )
{
    set_name( "Wisdom" );
}

Wisdom::Wisdom( const Wisdom &wisdom )
        : Wisdom( wisdom.get_value() )
{
}

Wisdom &Wisdom::operator=( const Wisdom &wisdom )
{
    if ( &wisdom != this )
    {
        Characteristic::operator=( wisdom );
    }
    return *this;
}

Wisdom::~Wisdom()
= default;
