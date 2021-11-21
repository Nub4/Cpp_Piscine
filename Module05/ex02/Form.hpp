#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(const std::string &name, const std::string &target, const int signGrade, const int execGrade);
        Form(const Form &src);
        ~Form();

        Form &operator=(const Form &rhs);

        const std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        const std::string getTarget() const;

        void    beSigned(const Bureaucrat &bureaucrat);
        void    execute(const Bureaucrat & executor) const;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw(){
                    return ("Grade too high");
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw(){
                    return ("Grade too low");
                }
        };

        class NotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw(){
                    return ("Form hasn't signed");
                }
        };

    private:
        virtual void action() const = 0;
        const std::string _name;
        const std::string _target;
        bool _signed;
        const int _signGrade;
        const int _execGrade;
};

std::ostream &operator<<(std::ostream &stream, const Form &form);

#endif