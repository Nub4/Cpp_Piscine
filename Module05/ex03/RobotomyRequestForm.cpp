#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", "", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
: Form(src.getName(), src.getTarget(), src.getSignGrade(), src.getExecGrade()) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs){
    Form::operator=(rhs);
    return *this;
}

void    RobotomyRequestForm::action() const{
    if (rand() % 2)
        std::cout << "Drilling noise... " << getTarget() << " has been robotomized successfully\n";
    else
        std::cout << "Drilling noise... " << getTarget() << "has failed to robotomized\n";
}