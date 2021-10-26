#include "Characteristic.hpp"

#include <cmath>

using namespace pathfinder::core::character::characteristics;

Characteristic::Characteristic( Characteristic::ID id, short value )
        : _id( id )
          , _name()
          , _value( value )
          , _modifier( floor( _value - 10. / 2. ) )
          , _temp_value( 0 )
{
}

Characteristic::Characteristic( const Characteristic &characteristic )
        : Characteristic( characteristic._id, characteristic._value )
{
}

Characteristic &Characteristic::operator=( const Characteristic &characteristic )
{
    if ( &characteristic != this )
    {
        _id = characteristic._id;
        _name = characteristic._name;
        _value = characteristic._value;
        _modifier = characteristic._modifier;
        _temp_value = characteristic._temp_value;
    }
    return *this;
}

Characteristic::ID Characteristic::get_id() const
{
    return _id;
}

const std::string &Characteristic::get_name() const
{
    return _name;
}

void Characteristic::set_name( const std::string &name )
{
    _name = name;
}

short Characteristic::get_value() const
{
    return _value;
}

void Characteristic::set_value( short value )
{
    _value = value;
}

short Characteristic::get_modifier() const
{
    return _modifier;
}

void Characteristic::set_modifier( short modifier )
{
    _modifier = modifier;
}

short Characteristic::get_temp_value() const
{
    return _temp_value;
}

void Characteristic::set_temp_value( short temp_value )
{
    _temp_value = temp_value;
}

std::ostream &pathfinder::core::character::characteristics::operator<<( std::ostream &os, const Characteristic &characteristic )
{
    os << "_id: " << characteristic._id << " _value: " << characteristic._value << " _modifier: " << characteristic._modifier << " _temp_value: " << characteristic._temp_value;
    return os;
}

bool Characteristic::operator==( const Characteristic &rhs ) const
{
    return _id == rhs._id;
}

bool Characteristic::operator!=( const Characteristic &rhs ) const
{
    return !( rhs == *this );
}
