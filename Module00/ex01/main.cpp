#include "Contact.hpp"

int main(void)
{
    int             contact_index;
    Contact         phonebook[MAX_CONTACTS];
    std::string     command;

    contact_index = 0;
    std::cout << "Available commands: |ADD|SEARCH|EXIT|\n";
    while (1)
    {
        getline(std::cin, command);
        if (command == "ADD")
        {
            if (contact_index < MAX_CONTACTS)
                phonebook[contact_index] = ft_add_contact();
            else
                phonebook[contact_index % 8] = ft_add_contact();
            contact_index++;
        }
        else if (command == "SEARCH")
        {
            if (contact_index > 0)
                ft_show_phonebook(phonebook, contact_index);
            else
                std::cout << " *** Phonebook is empty. ***\n";
        }
        else if (command == "EXIT")
            break ;
        else
            std::cout << "Available commands: |ADD|SEARCH|EXIT|\n";
    }
    return (0);
}