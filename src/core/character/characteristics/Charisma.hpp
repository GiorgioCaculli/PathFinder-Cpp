#ifndef PATHFINDER_CHARISMA_HPP
#define PATHFINDER_CHARISMA_HPP

#include "Characteristic.hpp"

namespace pathfinder
{
    namespace core
    {
        namespace character
        {
            namespace characteristics
            {
                class Charisma
                        : public Characteristic
                {
                public:
                    explicit Charisma( short value );
                    Charisma( const Charisma &charisma );
                    Charisma &operator=( const Charisma &charisma );
                    ~Charisma() override;
                };
            }
        }
    }
}

#endif //PATHFINDER_CHARISMA_HPP
