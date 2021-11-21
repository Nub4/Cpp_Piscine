#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src){
    *this = src;
}

Intern::~Intern() {}

Intern  &Intern::operator=(const Intern &rhs){
    (void)rhs;
    return *this;
}

Form *Intern::makeShrubberyCreation(const std::string &target)
{
    Form* form = new ShrubberyCreationForm(target);
    return form;
}

Form *Intern::makeRobotomyRequest(const std::string &target)
{
    Form* form = new RobotomyRequestForm(target);
    return form;
}

Form *Intern::makePresidentialPardon(const std::string &target)
{
    Form* form = new PresidentialPardonForm(target);
    return form;
}

Form    *Intern::makeForm(const std::string &name, const std::string &target){
    const std::string formNames[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    Form *(Intern::*function[3])(const std::string &target) = {&Intern::makeShrubberyCreation, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon};

    try{
        for (int i = 0; i < 3; i++)
        {
            if (formNames[i] == name){
                std::cout << "Intern creates " << name << std::endl;
                return (this->*function[i])(target);
            }
        }
        throw UnknownNameException();
    }
    catch(std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
    return NULL;
}