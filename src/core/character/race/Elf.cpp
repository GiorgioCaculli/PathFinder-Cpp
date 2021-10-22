#include "Elf.hpp"

using namespace pathfinder::core::character::race;

Elf::Elf( const std::string &name, bool gender, int age, SkinTone skin_tone,
        float height, float weight, Color hair_color,
        Color eye_color, const std::string &birth_place,
        const std::string &birth_date, const std::string &alignment )
        : Character( name, gender, age, skin_tone, height, weight, hair_color,
        eye_color, birth_place, birth_date, alignment )
{
}

Elf::~Elf()
= default;
