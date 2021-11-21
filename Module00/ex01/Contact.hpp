#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 8;
const int FIELD_WITDTH = 10;

class    Contact
{
    public:
        Contact();
        ~Contact();

        void    setFirstname(std::string x);
        std::string getFirstname();
        void    setLastname(std::string x);
        std::string getLastname();
        void    setNickname(std::string x);
        std::string getNickname();
        void    setPhonenumber(std::string x);
        std::string getPhonenumber();
        void    setDarkestsecret(std::string x);
        std::string getDarkestsecret();

    private:
        std::string     _firstname;
        std::string     _lastname;
        std::string     _nickname;
        std::string     _phonenumber;
        std::string     _darkestsecret;
};

Contact             ft_add_contact(void);
void                ft_show_phonebook(Contact phonebook[], int contact_index);
void                ft_search_contact(Contact phonebook[], int nbr_contacts);

#endif