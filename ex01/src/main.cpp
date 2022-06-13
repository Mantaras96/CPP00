//
// Created by Albert Mantaras on 8/6/22.
//

#include <iostream>
#include "../include/contact.hpp"

Contact addContact(){
    Contact contact;
    std::string aux;

    std::cout << "Introduce el nombre del contacto:";
    std::getline(std::cin, aux);
    contact.set_first_name(aux);
    std::cout << "Introduce el apellido del contacto:";
    std::getline(std::cin, aux);
    contact.set_last_name(aux);
    std::cout << "Introduce el nickname del contacto:";
    std::getline(std::cin, aux);
    contact.set_nickname(aux);
    std::cout << "Introduce el numero de telefono del contacto:";
    std::getline(std::cin, aux);
    contact.set_phone(aux);
    std::cout << "Introduce el secreto mas oscuro del contacto:";
    std::getline(std::cin, aux);
    contact.set_darkest_secret(aux);
    return (contact);
}

void search_friends(Contact contacts[8], int number_friends){
    for (int i = 0; i < number_friends; i++){
        std::cout << "Nombre:" << std::endl;
        std::cout << contacts[i].get_first_name() << std::endl;
    }

}

int main(){
    Contact contact[8];
    int number_friends;
    std::string command;

    number_friends = 0;
    while(42)
    {
        std::cout << "Introduce el comando de la agenda:";
        std::getline(std::cin, command);
        if (command == "ADD"){
            contact[number_friends] = addContact();
            number_friends++;
        } else if (command == "SEARCH"){
            search_friends(contact, number_friends);
        }
        else if (command == "EXIT"){
            std::cout << "Close." << std::endl;
            break;
        } else {
            std::cout << "Comand not found." << std::endl;
        }

    }
    return (0);
}