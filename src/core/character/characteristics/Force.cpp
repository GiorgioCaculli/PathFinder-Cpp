#include "Force.hpp"

using namespace pathfinder::core::character::characteristics;

Force::Force( short value )
        : Characteristic( FORCE, value )
{
    set_name( "Force" );
}

Force::Force( const Force &force )
        : Force( force.get_value() )
{
}

Force &Force::operator=( const Force &force )
{
    if ( &force != this )
    {
        Characteristic::operator=( force );
    }
    return *this;
}

Force::~Force()
= default;
