#include "Bureaucrat.hpp"

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

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (stream);
}