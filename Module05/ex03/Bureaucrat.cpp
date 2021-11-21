#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name(), _grade() {}

Bureaucrat::Bureaucrat(const std::string name, int grade)
: _name(name), _grade(grade) {
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
: _name(src.getName()), _grade(src.getGrade()) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs){
    _grade = rhs._grade;
    return *this;
}

void Bureaucrat::increment(int dif){
    _grade -= dif;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrement(int dif){
    _grade += dif;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const std::string    Bureaucrat::getName() const{
    return _name;
}

int    Bureaucrat::getGrade() const {
    return _grade;
}

void    Bureaucrat::signForm(Form &form){
    std::string reason;

    if (form.getSigned())
        reason = "it's already been signed";
    else if (form.getExecGrade() < _grade)
        reason = "the grade is too low";
    else
    {
        std::cout << _name << " signs " << form.getName() << std::endl;
        form.beSigned(*this);
        return ;
    }
    std::cout << _name << " cannot sign " << \
    form.getName() << " because " << reason << std::endl;
}

void    Bureaucrat::executeForm(Form const & form){
    try{
        form.execute(*this);
        std::cout << _name << " executes " << form.getName() << std::endl;
    }
    catch(std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (stream);
}