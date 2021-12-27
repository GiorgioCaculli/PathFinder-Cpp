#ifndef PATHFINDER_DEXTERITY_HPP
#define PATHFINDER_DEXTERITY_HPP

#include "Characteristic.hpp"

namespace rpg
{
    namespace character
    {
        namespace characteristics
        {
            class Dexterity
                    : public Characteristic
            {
            public:
                explicit Dexterity( short value );
                Dexterity( const Dexterity &dexterity );
                Dexterity &operator=( const Dexterity &dexterity );
                ~Dexterity() override;
            };
        }
    }
}

#endif //PATHFINDER_DEXTERITY_HPP
