#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
    count = 0;
    nextIndex = 0;
}

void PhoneBook::add()
{
    contacts[nextIndex].fill();

    if (count < 8)
        count++;

    nextIndex++;
    if (nextIndex == 8)
        nextIndex = 0;
}

static std::string formatField(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::add()
{
    contacts[nextIndex].fill();

    if (count < 8)
        count++;

    nextIndex++;
    if (nextIndex == 8)
        nextIndex = 0;
}

void PhoneBook::search() const
{
    int i = 0;
    int index;

    while (i < count)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10)
                  << formatField(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10)
                  << formatField(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10)
                  << formatField(contacts[i].getNickname()) << std::endl;
        i++;
    }

    std::cout << "Index: ";
    std::cin >> index;

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid index" << std::endl;
        return;
    }

    std::cin.ignore(1000, '\n');

    if (index < 0 || index >= count)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    contacts[index].display();
}
