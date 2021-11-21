#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    public:
        Weapon(std::string x);
        ~Weapon();

        std::string const &getType(void);
        void        setType(std::string x);

    private:
        std::string _type;
};         

#endif