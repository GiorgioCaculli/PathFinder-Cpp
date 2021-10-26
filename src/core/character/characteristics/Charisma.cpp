#include "Charisma.hpp"

using namespace pathfinder::core::character::characteristics;

Charisma::Charisma( short value )
        : Characteristic( CHARISMA, value )
{
    set_name( "Charisma" );
}

Charisma::Charisma( const Charisma &charisma )
        : Charisma( charisma.get_value() )
{

}

Charisma &Charisma::operator=( const Charisma &charisma )
{
    if ( &charisma != this )
    {
        Characteristic::operator=( charisma );
    }
    return *this;
}

Charisma::~Charisma()
= default;
