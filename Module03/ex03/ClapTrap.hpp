#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hitpoints;
        int         _energypoints;
        int         _attackdamage;
    public:
        ClapTrap();
        ClapTrap(std::string const &name);
        ~ClapTrap();

        ClapTrap &operator=(ClapTrap const &rhs);

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif