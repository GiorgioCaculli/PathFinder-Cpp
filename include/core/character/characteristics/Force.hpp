#ifndef PATHFINDER_FORCE_HPP
#define PATHFINDER_FORCE_HPP

#include "Characteristic.hpp"

namespace rpg
{
    namespace character
    {
        namespace characteristics
        {
            class Force
                    : public Characteristic
            {
            public:
                explicit Force( short value );
                Force( const Force &force );
                Force &operator=( const Force &force );
                ~Force() override;
            };
        }
    }
}

#endif //PATHFINDER_FORCE_HPP
