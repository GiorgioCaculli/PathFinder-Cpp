#include "Intelligence.hpp"

using namespace pathfinder::core::character::characteristics;

Intelligence::Intelligence( short value )
: Characteristic( INTELLIGENCE, value )
{
    set_name( "Intelligence" );
}

Intelligence::Intelligence( const Intelligence &intelligence )
: Intelligence( intelligence.get_value() )
{
}

Intelligence &Intelligence::operator=( const Intelligence &intelligence )
{
    if( &intelligence != this )
    {
        Characteristic::operator=( intelligence );
    }
    return *this;
}

Intelligence::~Intelligence()
= default;
