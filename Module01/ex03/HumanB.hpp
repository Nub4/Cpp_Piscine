#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string x);
        ~HumanB();

        void    attack();
        void    setWeapon(Weapon &y);

    private:
        std::string _name;
        Weapon *_weapon;
};         

#endif