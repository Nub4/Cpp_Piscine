#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &src);
        ~Intern();

        Intern &operator=(const Intern &rhs);

        Form *makeShrubberyCreation(const std::string &target);
        Form *makeRobotomyRequest(const std::string &target);
        Form *makePresidentialPardon(const std::string &target);
        Form *makeForm(const std::string &name, const std::string &target);

        class UnknownNameException : public std::exception
        {
            public:
                virtual const char *what() const throw(){
                    return ("Unknown form name");
                } 
        };
};

#endif