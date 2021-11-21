#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(void);
	    ScavTrap(std::string const &name);
	    ~ScavTrap(void);

        ScavTrap &operator=(ScavTrap const &rhs);

        void    guardGate();
};

#endif