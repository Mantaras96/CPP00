/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:46:44 by amantara          #+#    #+#             */
/*   Updated: 2022/12/14 19:46:51 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

PhoneBook::PhoneBook(void){
    this->size = 0;
}


Contact PhoneBook::getContactByIndex(int i)
{
    return contacts[i];
}

void PhoneBook::addContact (Contact contactos, int index){
    contacts[index] = contactos;
    std::cout << "Contact added correctly " << std::endl;
}