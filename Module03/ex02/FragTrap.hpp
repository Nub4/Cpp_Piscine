#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string const &name);
        ~FragTrap();

        FragTrap &operator=(FragTrap const &rhs);

        void    highFivesGuys(void);
};

#endif