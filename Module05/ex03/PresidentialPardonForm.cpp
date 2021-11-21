#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: Form("PresidentialPardonForm", "", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: Form("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
: Form(src.getName(), src.getTarget(), src.getSignGrade(), src.getExecGrade()) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs){
    Form::operator=(rhs);
    return *this;
}

void    PresidentialPardonForm::action() const{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox\n";
}