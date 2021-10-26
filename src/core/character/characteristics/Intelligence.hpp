#ifndef PATHFINDER_INTELLIGENCE_HPP
#define PATHFINDER_INTELLIGENCE_HPP

#include "Characteristic.hpp"

namespace pathfinder
{
    namespace core
    {
        namespace character
        {
            namespace characteristics
            {
                class Intelligence
                        : public Characteristic
                {
                public:
                    explicit Intelligence( short value );
                    Intelligence( const Intelligence &intelligence );
                    Intelligence &operator=( const Intelligence &intelligence );
                    ~Intelligence() override;
                };
            }
        }
    }
}

#endif //PATHFINDER_INTELLIGENCE_HPP
