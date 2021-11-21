#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(const std::string &name, const int signGrade, const int execGrade);
        Form(const Form &src);
        ~Form();

        Form &operator=(const Form &rhs);

        const std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;

        void    beSigned(const Bureaucrat &bureaucrat);

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

    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _execGrade;
};

std::ostream &operator<<(std::ostream &stream, const Form &form);

#endif