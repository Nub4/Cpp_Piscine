#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    std::cout << "==ex00==" << '\n';

	Bureaucrat a("Mike", 2);
	Bureaucrat b("Jake", 149);

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	try{
		a.increment(1);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
		b.decrement(1);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	try{
		a.increment(1);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
		b.decrement(1);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	std::cout << "==ex01==" << '\n';

	Bureaucrat a1("Alex", 1);
	Bureaucrat b1("Casper", 150);
	ShrubberyCreationForm form1("form1");

	std::cout << form1 << '\n';
	a1.signForm(form1);
	std::cout << form1 << '\n';
	b1.signForm(form1);
	std::cout << form1 << '\n';

	std::cout << "==ex02==" << '\n';

	ShrubberyCreationForm form2("tree");
	RobotomyRequestForm form3("Request");
	PresidentialPardonForm form4("Jack");

	b1.signForm(form2);
	b1.executeForm(form2);
	a1.executeForm(form2);
	a1.signForm(form2);
	a1.executeForm(form2);

	b1.signForm(form3);
	b1.executeForm(form3);
	a1.executeForm(form3);
	a1.signForm(form3);
	a1.executeForm(form3);
	a1.executeForm(form3);
	a1.executeForm(form3);
	a1.executeForm(form3);

	b1.signForm(form4);
	b1.executeForm(form4);
	a1.executeForm(form4);
	a1.signForm(form4);
	a1.executeForm(form4);

	return (0);
}