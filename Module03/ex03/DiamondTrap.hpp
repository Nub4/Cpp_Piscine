#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string const &name);

        DiamondTrap &operator=(DiamondTrap const &rhs);

        void    attack(std::string const &target);
        void    whoAmI();

    private:
        std::string _name;
};

#endif