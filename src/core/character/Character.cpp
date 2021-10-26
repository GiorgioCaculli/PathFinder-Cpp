#include "Character.hpp"

#include <utility>

using namespace pathfinder::core::character;

Character::Character( std::string name, bool gender, int age, race::SkinTone skin_tone, float height, float weight, race::Color hair_color, race::Color eye_color, const std::string &birth_place, const std::string &birth_date, std::string alignment )
        : Race( gender, age, skin_tone, height, weight, hair_color, eye_color, birth_place, birth_date )
          , _experience( 0 )
          , _name( std::move( name ) )
          , _alignment( std::move( alignment ) )
          , _characteristics()
{
}

const std::string &Character::get_name() const
{
    return _name;
}

void Character::set_name( const std::string &name )
{
    Character::_name = name;
}

const std::string &Character::get_alignment() const
{
    return _alignment;
}

void Character::set_alignment( const std::string &alignment )
{
    Character::_alignment = alignment;
}

int Character::get_experience() const
{
    return _experience;
}

void Character::set_experience( int experience )
{
    _experience = experience;
}

const std::array< characteristics::Characteristic *, characteristics::Characteristic::CHARACTERISTICS_COUNT > &Character::get_characteristics() const
{
    return _characteristics;
}

void Character::set_characteristics( const std::array< characteristics::Characteristic *, characteristics::Characteristic::CHARACTERISTICS_COUNT > &characteristics )
{
    _characteristics = characteristics;
}

std::ostream &pathfinder::core::character::operator<<( std::ostream &os,
        const Character &character )
{
    os <<
       "name: " << character._name << std::endl <<
       static_cast< const race::Race & >( character ) << std::endl <<
       "alignment: " << character._alignment << std::endl <<
       "experience: " << character._experience << std::endl;
    for ( characteristics::Characteristic *characteristic: character._characteristics )
    {
        os << characteristic->get_name() << " : " << characteristic->get_value() << std::endl;
    }
    return os;
}
