/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:46:36 by amantara          #+#    #+#             */
/*   Updated: 2022/12/14 19:46:40 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

#include "./Contact.hpp"

class PhoneBook
{
public:
    PhoneBook(void);

    Contact getContactByIndex(int i);
    void addContact (Contact contact, int index);

private:
    Contact contacts[8];
    int size;
};

#endif //CPP0_CONTACT_H
