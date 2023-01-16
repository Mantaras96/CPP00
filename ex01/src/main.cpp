/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:30:06 by amantara          #+#    #+#             */
/*   Updated: 2023/01/16 15:29:02 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

Contact addContact(){
    Contact contact;
    std::string aux;

    aux = "";
    while (aux == ""){
        std::cout << "Introduce el nombre del contacto:";
        std::getline(std::cin, aux);
        contact.set_first_name(aux);
    }
    aux = "";
    while (aux == ""){
        std::cout << "Introduce el apellido del contacto:";
        std::getline(std::cin, aux);
        contact.set_last_name(aux);
    }
    aux = "";
    while (aux == ""){
        std::cout << "Introduce el nickname del contacto:";
        std::getline(std::cin, aux);
        contact.set_nickname(aux);
    }
    aux = "";
    while (aux == ""){
        std::cout << "Introduce el numero de telefono del contacto:";
        std::getline(std::cin, aux);
        contact.set_phone(aux);
    }
    aux = "";
    while (aux == ""){
        std::cout << "Introduce el secreto mas oscuro del contacto:";
        std::getline(std::cin, aux);
        contact.set_darkest_secret(aux);
    }
    aux = "";
    return (contact);
}

void search_friends(int number_friends, bool isFull, PhoneBook phoneBook){
    int spaces;
    int loop_number;
    Contact contacto;

    isFull ? loop_number = 8 : loop_number = number_friends;
    std::cout << "    Indice|    Nombre|  Apellido|     Apodo"<< std::endl;
    for (int i = 0; i < loop_number; i++){
        contacto = phoneBook.getContactByIndex(i);
        std::cout <<  "         " << i + 1 << "|";
        std::string str(contacto.get_first_name());
        if (contacto.get_first_name().length() <= 10){
           spaces = 10 - contacto.get_first_name().length();
           while (spaces > 0){
            std::cout << " ";
            spaces--;
           }
           std::cout <<  contacto.get_first_name();
           std::cout << "|";
        } else {
            for (int j = 0; j < 9; j++) {
                std::cout << contacto.get_first_name()[j];
            }
            std::cout << ".|";
        }
        if (contacto.get_last_name().length() <= 10){
           spaces = 10 - contacto.get_last_name().length();
           while (spaces > 0){
            std::cout << " ";
            spaces--;
           }
           std::cout <<  contacto.get_last_name();
           std::cout << "|";
        } else {
            for (int j = 0; j < 9; j++) {
                std::cout << contacto.get_last_name()[j];
            }
            std::cout << ".|";
        }
                if (contacto.get_nickname().length() <= 10){
           spaces = 10 - contacto.get_nickname().length();
           while (spaces > 0){
            std::cout << " ";
            spaces--;
           }
           std::cout <<  contacto.get_nickname();
        } else {
            for (int j = 0; j < 9; j++) {
                std::cout << contacto.get_nickname()[j];
            }
            std::cout << "." ;
        }
    std::cout << std::endl;
    }
}


void    showInfoWithIndex(PhoneBook phoneBook, int index){
    Contact contacto;
    std::cout << "Indice: " << index << std::endl;
    contacto = phoneBook.getContactByIndex(index - 1);
    std::cout << "Name: " << contacto.get_first_name() << std::endl;
    std::cout << "Last name: " << contacto.get_last_name() << std::endl;
    std::cout << "Nickname: " << contacto.get_nickname() << std::endl;
    std::cout << "Telephone: " << contacto.get_phone() << std::endl; 
    std::cout << "Darkest secret: " << contacto.get_darkest_secret() << std::endl;
}

int main(){
    PhoneBook phoneBook;
    int number_friends;
    std::string command;
    bool isFull = false;
    Contact contact_aux;
    
    number_friends = 0;
    while(42)
    {
        std::cout << "Introduce el comando de la agenda:";
        std::getline(std::cin, command);
        if (command == "ADD"){
        if (number_friends == 8){
            number_friends = 0;
            isFull = true;
        }
            contact_aux = addContact();
            phoneBook.addContact(contact_aux, number_friends);
            number_friends++;
        } else if (command == "SEARCH"){
            search_friends(number_friends, isFull, phoneBook);
            std::cout << "Introduce el indice del usuario a buscar:";
            std::getline(std::cin, command);
            try {
                int index = stoi(command);
                if ((index >= 0 && index < 8 && isFull) || (index <= number_friends) ){
                    if ((number_friends == 0 && isFull) || number_friends > 0) {
                        showInfoWithIndex(phoneBook, index);
                    } else {
                        std::cout << "Error buscando la informacion." << std::endl;     
                    }
                } else {
                    std::cout << "Error buscando la informacion." << std::endl; 
                }
            } catch(...) {
                 std::cout << "Parametro no valido." << std::endl;   
                }
        }
        else if (command == "EXIT"){
            std::cout << "Close." << std::endl;
            break;  
        }
    }
    return (0);
}


