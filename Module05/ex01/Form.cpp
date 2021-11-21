#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name(), _signed(false), _signGrade(150), _execGrade(150) {}

Form::Form(const std::string &name, const int signGrade, const int execGrade)
: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {}

Form::Form(const Form &src)
: _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade) {} 

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

void    Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _signGrade)
        throw Form::GradeTooLowException();
    else
        _signed = true;
}

std::ostream &operator<<(std::ostream &stream, const Form &form){
    stream << std::boolalpha << form.getName() << "(" << form.getSigned() << ")" << ", sign grade is "
		<< form.getSignGrade() << ", execution grade is " << form.getExecGrade();
	return (stream);
}