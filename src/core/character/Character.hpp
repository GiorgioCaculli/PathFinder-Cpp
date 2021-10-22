#ifndef PATHFINDER_CPP_CHARACTER_HPP
#define PATHFINDER_CPP_CHARACTER_HPP

#include <string>
#include <ostream>

#include "race/Race.hpp"

namespace pathfinder
{
    namespace core
    {
        namespace character
        {
            class Character
                    : public race::Race
            {
            private:
                std::string _name;
                std::string _alignment;
                int _experience;
            public:
                Character( const std::string &name, bool gender, int age,
                        race::SkinTone skin_tone, float height,
                        float weight, race::Color hair_color,
                        race::Color eye_color, const std::string &birth_place,
                        const std::string &birth_date,
                        const std::string &alignment );
                virtual ~Character() = default;
                const std::string &get_name() const;
                void set_name( const std::string &name );
                const std::string &get_alignment() const;
                void set_alignment( const std::string &alignment );
                friend std::ostream &operator<<( std::ostream &os, const Character &character );
            };
        }
    }
}

#endif //PATHFINDER_CPP_CHARACTER_HPP
