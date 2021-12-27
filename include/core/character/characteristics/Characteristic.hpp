#ifndef PATHFINDER_CHARACTERISTIC_HPP
#define PATHFINDER_CHARACTERISTIC_HPP

#include <string>

namespace rpg
{
    namespace character
    {
        namespace characteristics
        {
            class Characteristic
            {
            public:
                enum ID
                {
                    FORCE,
                    DEXTERITY,
                    CONSTITUTION,
                    INTELLIGENCE,
                    WISDOM,
                    CHARISMA,
                    CHARACTERISTICS_COUNT
                };
                explicit Characteristic( Characteristic::ID id, short value );
                Characteristic( const Characteristic &characteristic );
                Characteristic &operator=( const Characteristic &characteristic );
                virtual ~Characteristic() = default;
                ID get_id() const;
                const std::string &get_name() const;
                void set_name( const std::string &name );
                short get_value() const;
                void set_value( short value );
                short get_modifier() const;
                void set_modifier( short modifier );
                short get_temp_value() const;
                void set_temp_value( short temp_value );
                virtual std::string to_string() const;
                bool operator==( const Characteristic &rhs ) const;
                bool operator!=( const Characteristic &rhs ) const;
            private:
                ID _id;
                std::string _name;
                short _value;
                short _modifier;
                short _temp_value;
            };
        }
    }
}

#endif //PATHFINDER_CHARACTERISTIC_HPP
