#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int count;
    int nextIndex;

public:
    void add();
    void search() const;
};

PhoneBook();

#endif
