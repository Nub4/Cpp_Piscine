#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void    Contact::setFirstname(std::string x){
            _firstname = x;
}

std::string Contact::getFirstname(){
            return _firstname;
}

void    Contact::setLastname(std::string x){
            _lastname = x;
}
        
std::string Contact::getLastname(){
            return _lastname;
}
        
void    Contact::setNickname(std::string x){
            _nickname = x;
}

std::string Contact::getNickname(){
            return _nickname;
}
        
void    Contact::setPhonenumber(std::string x){
            _phonenumber = x;
}
        
std::string Contact::getPhonenumber(){
            return _phonenumber;
}
        
void    Contact::setDarkestsecret(std::string x){
            _darkestsecret = x;
}
        
std::string Contact::getDarkestsecret(){
            return _darkestsecret;
}

void ft_search_contact(Contact phonebook[], int nbr_contacts)
{
    int          index;

    std::cout << "Enter the index of a contact: ";
    std::cin >> index;
    std::cout << std::endl;
    if (std::cin.good() && (index >= 0 && index < nbr_contacts))
    {
        std::cout << "Index: ";
        std::cout << index << std::endl;
        std::cout << "First name: " + phonebook[index].getFirstname() << std::endl;
        std::cout << "Last name: " + phonebook[index].getLastname() << std::endl;
        std::cout << "Nick name: " + phonebook[index].getNickname() << std::endl;
        std::cout << "Phone number: " + phonebook[index].getPhonenumber() << std::endl;
        std::cout << "Darkest secret: " + phonebook[index].getDarkestsecret() << std::endl << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << " *** Index cannot be found. ***\n\n";
    }
}

std::string ft_modify_string(std::string field)
{
    field = field.erase((FIELD_WITDTH - 1), field.length() - (FIELD_WITDTH - 1));
    field.append(".");
    return (field);
}

void    ft_show_phonebook(Contact phonebook[], int nbr_contacts)
{
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;

    std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
    for (int i = 0; i < nbr_contacts; i++)
    {
        if (i >= MAX_CONTACTS)
            break ;
        first_name = phonebook[i].getFirstname();
        last_name = phonebook[i].getLastname();
        nickname = phonebook[i].getNickname();

        std::cout << "|" << std::setw(FIELD_WITDTH) << i;
        first_name = (first_name.length() > FIELD_WITDTH) ? ft_modify_string(first_name) : first_name;
        std::cout << "|" << std::setw(FIELD_WITDTH) << first_name;

        last_name = (last_name.length() > FIELD_WITDTH) ? ft_modify_string(last_name) : last_name;
        std::cout << "|" << std::setw(FIELD_WITDTH) << last_name;

        nickname = (nickname.length() > FIELD_WITDTH) ? ft_modify_string(nickname) : nickname;
        std::cout << "|" << std::setw(FIELD_WITDTH) << nickname;
        std::cout << "|\n";
    }
    ft_search_contact(phonebook, nbr_contacts);
}

Contact ft_add_contact(void)
{
    Contact     new_contact;
    std::string command;

    std::cout << "First name : ";
    getline(std::cin, command);
    new_contact.setFirstname(command);
    std::cout << "Last name : ";
    getline(std::cin, command);
    new_contact.setLastname(command);
    std::cout << "Nick name : ";
    getline(std::cin, command);
    new_contact.setNickname(command);
    std::cout << "Phone Number : ";
    getline(std::cin, command);
    new_contact.setPhonenumber(command);
    std::cout << "Darkest Secret : ";
    getline(std::cin, command);
    new_contact.setDarkestsecret(command);
    std::cout << " *** DONE! ***\n\n";
    return (new_contact);
}