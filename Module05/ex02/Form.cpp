#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name(), _target(), _signed(false), _signGrade(150), _execGrade(150) {}

Form::Form(const std::string &name, const std::string &target, const int signGrade, const int execGrade)
: _name(name), _target(target), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {}

Form::Form(const Form &src)
: _name(src._name), _target(src._target), _signGrade(src._signGrade), _execGrade(src._execGrade) {} 

Form::~Form() {}

Form &Form::operator=(const Form &rhs){
    _signed = rhs._signed;
    return *this;
}

const std::string Form::getName() const {
    return _name;
}

bool    Form::getSigned() const {
    return _signed;
}

int Form::getSignGrade() const {
    return _signGrade;
}

int Form::getExecGrade() const {
    return _execGrade;
}

const std::string Form::getTarget() const {
    return _target;
}

void    Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _signGrade)
        throw Form::GradeTooLowException();
    else
        _signed = true;
}

void    Form::execute(const Bureaucrat & executor) const{
    if (!_signed)
        throw Form::NotSignedException();
    else if (executor.getGrade() > _execGrade)
        throw Form::GradeTooLowException();
    action();
}

std::ostream &operator<<(std::ostream &stream, const Form &form){
    stream << std::boolalpha << form.getName() << "(" << form.getSigned() << ")" << ", sign grade is "
		<< form.getSignGrade() << ", execution grade is " << form.getExecGrade();
	return (stream);
}