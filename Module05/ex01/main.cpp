#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat jake("jake", 60);
    Bureaucrat mike("mike", 1);

    Form form1("form1", 100, 50);
    Form form2("form2", 100, 50);
    Form form3("form3", 100, 100);

    std::cout << form1 << std::endl;
    mike.signForm(form1);
    std::cout << form1 << std::endl;
    jake.signForm(form1);
    jake.signForm(form2);
    jake.signForm(form3);
    std::cout << form1 << std::endl;
    
    return (0);
}