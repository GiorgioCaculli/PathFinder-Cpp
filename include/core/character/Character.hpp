#ifndef PATHFINDER_CPP_CHARACTER_HPP
#define PATHFINDER_CPP_CHARACTER_HPP

#include <string>

#include "race/Race.hpp"
#include "characteristics/Characteristic.hpp"

#include <array>

namespace rpg
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
            std::array< characteristics::Characteristic *, characteristics::Characteristic::CHARACTERISTICS_COUNT > _characteristics;
        public:
            Character( std::string name, bool gender, int age,
                    race::SkinTone skin_tone, float height,
                    float weight, race::Color hair_color,
                    race::Color eye_color, const std::string &birth_place,
                    const std::string &birth_date,
                    std::string alignment );
            ~Character() override = default;
            const std::string &get_name() const;
            void set_name( const std::string &name );
            const std::string &get_alignment() const;
            void set_alignment( const std::string &alignment );
            int get_experience() const;
            void set_experience( int experience );
            const std::array< characteristics::Characteristic *, characteristics::Characteristic::CHARACTERISTICS_COUNT > &get_characteristics() const;
            void set_characteristics( const std::array< characteristics::Characteristic *, characteristics::Characteristic::CHARACTERISTICS_COUNT > &characteristics );
            virtual std::string to_string() const;
        };
    }
}

#endif //PATHFINDER_CPP_CHARACTER_HPP
