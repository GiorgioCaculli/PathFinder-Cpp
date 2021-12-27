#ifndef PATHFINDER_CONSTITUTION_HPP
#define PATHFINDER_CONSTITUTION_HPP

#include "Characteristic.hpp"

namespace rpg
{
    namespace character
    {
        namespace characteristics
        {
            class Constitution
                    : public Characteristic
            {
            public:
                explicit Constitution( short value );
                Constitution( const Constitution &constitution );
                Constitution &operator=( const Constitution &constitution );
                ~Constitution() override;
            };
        }
    }
}

#endif //PATHFINDER_CONSTITUTION_HPP
