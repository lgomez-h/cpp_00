/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 12:54:55 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/03/30 12:54:59 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {}

void PhoneBook::addContact() {
    Contact newContact;
    newContact.setContact();
    if (!newContact.isEmpty()) {
        contacts[currentIndex] = newContact;
        currentIndex = (currentIndex + 1) % 8;
        if (totalContacts < 8)
            totalContacts++;
    } else {
        std::cout << "Error: Contact cannot have empty fields." << std::endl;
    }
}

void PhoneBook::searchContacts() const {
    std::cout << std::right << std::setw(10) << "Index" << "|"
              << std::right << std::setw(10) << "First Name" << "|"
              << std::right << std::setw(10) << "Last Name" << "|"
              << std::right << std::setw(10) << "Nickname" << "|" << std::endl;

    for (int i = 0; i < totalContacts; ++i) {
        contacts[i].displayShort(i);
    }

    std::cout << "Enter the index of the contact to display: ";
    int index;
    std::cin >> index;
    if (std::cin.fail()) {
    std::cout << "Invalid input. Please enter a number." << std::endl;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    return;
    }
    std::cin.ignore(10000, '\n');
    if (index < 0 || index >= totalContacts) {
    std::cout << "Invalid index." << std::endl;
    return;
    }
    contacts[index].displayFull();
}

