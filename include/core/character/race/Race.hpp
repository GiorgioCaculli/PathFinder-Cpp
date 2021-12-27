#ifndef PATHFINDER_CPP_RACE_HPP
#define PATHFINDER_CPP_RACE_HPP

#include <string>

namespace rpg
{
    namespace character
    {
        namespace race
        {
            enum class SkinTone
            {
                GREEN
            };

            enum class Color
            {
                GREEN
            };

            class Race
            {
            private:
                bool _gender;
                int _age;
                SkinTone _skin_tone;
                float _height;
                float _weight;
                Color _hair_color;
                Color _eye_color;
                std::string _birth_place;
                std::string _birth_date;
            public:
                Race( bool gender, int age, SkinTone skin_tone, float height,
                        float weight, Color hair_color,
                        Color eye_color, const std::string &birth_place,
                        const std::string &birth_date );
                Race( const Race &race );
                Race &operator=( const Race &race );
                virtual ~Race();
                bool is_male() const;
                void set_male( bool gender );
                int get_age() const;
                void set_age( int age );
                SkinTone get_skin_tone() const;
                void set_skin_tone( SkinTone skinTone );
                float get_height() const;
                void set_height( float height );
                float get_weight() const;
                void set_weight( float weight );
                Color get_hair_color() const;
                void set_hair_color( Color hair_color );
                Color get_eye_color() const;
                void set_eye_color( Color eye_color );
                const std::string &get_birth_place() const;
                void set_birth_place( const std::string &birthPlace );
                const std::string &get_birth_date() const;
                void set_birth_date( const std::string &birthDate );
                virtual std::string to_string() const;
                bool operator==( const Race &rhs ) const;
                bool operator!=( const Race &rhs ) const;
            };
        }
    }
}

#endif //PATHFINDER_CPP_RACE_HPP
