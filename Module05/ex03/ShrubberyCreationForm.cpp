#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", "", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
: Form(src.getName(), src.getTarget(), src.getSignGrade(), src.getExecGrade()) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs){
    Form::operator=(rhs);
    return *this;
}

void    ShrubberyCreationForm::action() const{
    std::string str = ".\n"
    "|–– Bureaucrat.cpp\n"
    "|–– Bureaucrat.hpp\n"
    "|–– Form.cpp\n"
    "|–– Form.hpp\n"
    "|–– Makefile\n"
    "|–– PresidentialPardonForm.cpp\n"
    "|–– PresidentialPardonForm.hpp\n"
    "|–– RobotomyRequestForm.cpp\n"
    "|–– RobotomyRequestForm.hpp\n"
    "|–– ShrubberyCreationForm.cpp\n"
    "|–– ShrubberyCreationForm.hpp\n"
    "|–– main.cpp";

    std::ofstream outfile;
    outfile.open(getTarget() + "_shrubbery");
    if (!outfile.is_open())
        throw std::ofstream::failure("Error, cannot open the file!");
    outfile << str;
    outfile.close();
}