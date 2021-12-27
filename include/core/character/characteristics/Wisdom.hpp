#ifndef PATHFINDER_WISDOM_HPP
#define PATHFINDER_WISDOM_HPP

#include "Characteristic.hpp"

namespace rpg
{
    namespace character
    {
        namespace characteristics
        {
            class Wisdom
                    : public Characteristic
            {
            public:
                explicit Wisdom( short value );
                Wisdom( const Wisdom &wisdom );
                Wisdom &operator=( const Wisdom &wisdom );
                ~Wisdom() override;
            };
        }
    }
}

#endif //PATHFINDER_WISDOM_HPP
