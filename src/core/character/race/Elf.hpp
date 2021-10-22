#ifndef PATHFINDER_CPP_ELF_HPP
#define PATHFINDER_CPP_ELF_HPP

#include <ostream>
#include "../Character.hpp"

namespace pathfinder
{
    namespace core
    {
        namespace character
        {
            namespace race
            {
                class Elf
                        : public Character
                {
                public:
                    Elf( const std::string &name, bool gender, int age,
                            SkinTone skin_tone, float height, float weight,
                            Color hair_color, Color eye_color,
                            const std::string &birth_place,
                            const std::string &birth_date,
                            const std::string &alignment );

                    ~Elf() override;
                };
            }
        }
    }
}

#endif //PATHFINDER_CPP_ELF_HPP
