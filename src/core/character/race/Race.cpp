#include "Race.hpp"

using namespace pathfinder::core::character::race;

Race::Race( bool gender, int age, SkinTone skin_tone, float height, float weight,
        Color hair_color, Color eye_color,
        const std::string &birth_place, const std::string &birth_date )
{
    set_male( gender );
    set_age( age );
    set_skin_tone( skin_tone );
    set_height( height );
    set_weight( weight );
    set_hair_color( hair_color );
    set_eye_color( eye_color );
    set_birth_place( birth_place );
    set_birth_date( birth_date );
}

Race::Race( const Race &race )
        : _gender( race.is_male() )
          , _age( race.get_age() )
          , _skin_tone( race.get_skin_tone() )
          , _height( race.get_height() )
          , _weight( race.get_weight() )
          , _hair_color( race.get_hair_color() )
          , _eye_color( race.get_eye_color() )
          , _birth_place( race.get_birth_place() )
          , _birth_date( race.get_birth_date() )
{ }

Race &Race::operator=( const Race &race )
{
    if ( &race == this )
    {
        _gender = race.is_male();
        _age = race.get_age();
        _skin_tone = race.get_skin_tone();
        _height = race.get_height();
        _weight = race.get_weight();
        _hair_color = race.get_hair_color();
        _eye_color = race.get_eye_color();
        _birth_place = race.get_birth_place();
        _birth_date = race.get_birth_date();
    }
    return *this;
}

Race::~Race()
= default;

bool Race::is_male() const
{
    return _gender;
}

void Race::set_male( bool gender )
{
    Race::_gender = gender;
}

int Race::get_age() const
{
    return _age;
}

void Race::set_age( int age )
{
    Race::_age = age;
}

SkinTone Race::get_skin_tone() const
{
    return _skin_tone;
}

void Race::set_skin_tone( SkinTone skinTone )
{
    Race::_skin_tone = skinTone;
}

float Race::get_height() const
{
    return _height;
}

void Race::set_height( float height )
{
    Race::_height = height;
}

float Race::get_weight() const
{
    return _weight;
}

void Race::set_weight( float weight )
{
    Race::_weight = weight;
}

Color Race::get_hair_color() const
{
    return _hair_color;
}

void Race::set_hair_color( Color hair_color )
{
    Race::_hair_color = hair_color;
}

Color Race::get_eye_color() const
{
    return _eye_color;
}

void Race::set_eye_color( Color eye_color )
{
    Race::_eye_color = eye_color;
}

const std::string &Race::get_birth_place() const
{
    return _birth_place;
}

void Race::set_birth_place( const std::string &birthPlace )
{
    Race::_birth_place = birthPlace;
}

const std::string &Race::get_birth_date() const
{
    return _birth_date;
}

void Race::set_birth_date( const std::string &birthDate )
{
    Race::_birth_date = birthDate;
}

bool Race::operator==( const Race &rhs ) const
{
    return _gender == rhs._gender &&
            _age == rhs._age &&
            _skin_tone == rhs._skin_tone &&
            _height == rhs._height &&
            _weight == rhs._weight &&
            _hair_color == rhs._hair_color &&
            _eye_color == rhs._eye_color &&
            _birth_place == rhs._birth_place &&
            _birth_date == rhs._birth_date;
}

bool Race::operator!=( const Race &rhs ) const
{
    return !( rhs == *this );
}

std::ostream &pathfinder::core::character::race::operator<<( std::ostream &os,
        const Race &race )
{
    os <<
       " gender: " << race._gender <<
       " age: " << race._age <<
       " skinTone: " <<
       static_cast< std::underlying_type< SkinTone >::type>(race._skin_tone) <<
       " height: " << race._height <<
       " weight: " << race._weight <<
       " hairColor: " <<
       static_cast< std::underlying_type< Color >::type>(race._hair_color) <<
       " eyeColor: " <<
       static_cast< std::underlying_type< Color >::type>(race._eye_color) <<
       " birthPlace: " << race._birth_place <<
       " birthDate: " << race._birth_date;
    return os;
}
