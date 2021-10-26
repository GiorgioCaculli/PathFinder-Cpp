#include "Constitution.hpp"

using namespace pathfinder::core::character::characteristics;

Constitution::Constitution( short value )
        : Characteristic( CONSTITUTION, value )
{
    set_name( "Constitution" );
}

Constitution::Constitution( const Constitution &constitution )
        : Constitution( constitution.get_value() )
{

}

Constitution &Constitution::operator=( const Constitution &constitution )
{
    if ( &constitution != this )
    {
        Constitution::operator=( constitution );
    }
    return *this;
}

Constitution::~Constitution()
= default;
