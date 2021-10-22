#include "Character.hpp"

using namespace pathfinder::core::character;

Character::Character( const std::string &name, bool gender, int age,
        race::SkinTone skin_tone, float height,
        float weight, race::Color hair_color, race::Color eye_color,
        const std::string &birth_place,
        const std::string &birth_date,
        const std::string &alignment )
        : Race( gender, age, skin_tone, height, weight, hair_color, eye_color,
        birth_place, birth_date )
{
    set_name( name );
    set_alignment( alignment );
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

std::ostream &pathfinder::core::character::operator<<( std::ostream &os,
        const Character &character )
{
    os <<
       "name: " << character._name <<
       static_cast<const race::Race &>(character) <<
       " alignment: " << character._alignment;
    return os;
}
