#include "contact.hpp"
#include <iostream>

std::string Contact::getFirstName() const
{
    return firstName;
}

std::string Contact::getLastName() const
{
    return lastName;
}

std::string Contact::getNickname() const
{
    return nickname;
}

void	Contact::fill()
{
    std::cout << "First name: ";
    std::getline(std::cin, first_name);

    std::cout << "Last name: ";
    std::getline(std::cin, last_name);

    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);

    std::cout << "Phone number: ";
    std::getline(std::cin, phone_number);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkest_secret);
}

void	Contact::fill()
{
    while (firstName.empty())
    {
        std::cout << "First name: ";
        std::getline(std::cin, first_name);
    }

    while (lastName.empty())
    {
        std::cout << "Last name: ";
        std::getline(std::cin, last_name);
    }

    while (nickname.empty())
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, nickname);
    }

    while (phoneNumber.empty())
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, phone_number);
    }

    while (darkestSecret.empty())
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, darkest_secret);
    }
}

void Contact::display() const
{
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phoneNumber << std::endl;
    std::cout << "Darkest secret: " << darkestSecret << std::endl;
}
