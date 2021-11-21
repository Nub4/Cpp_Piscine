#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat &rhs);

        void increment(int dif);
        void decrement(int dif);
        
        const std::string    getName() const;
        int    getGrade() const;

        void    signForm(Form &form);
        void    executeForm(Form const & form);

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
        int _grade;
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &bureaucrat);

#endif