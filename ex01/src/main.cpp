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

void search_friends(Contact contacts[8], int number_friends, bool isFull){
    int spaces;
    int loop_number;

    isFull ? loop_number = 8 : loop_number = number_friends;
    std::cout << "Indice    |Nombre    |Apellido  |Apodo     "<< std::endl;
    for (int i = 0; i < loop_number; i++){
        std::cout <<  i;
        std::cout <<  "         |";
        std::string str(contacts[i].get_first_name());
        if (contacts[i].get_first_name().length() <= 10){
           std::cout <<  contacts[i].get_first_name();
           spaces = 10 - contacts[i].get_first_name().length();
           while (spaces > 0){
            std::cout << " ";
            spaces--;
           }
           std::cout << "|";
        } else {
            for (int j = 0; j < 9; j++) {
                std::cout << contacts[i].get_first_name()[j];
            }
            std::cout << ".|";
        }
        if (contacts[i].get_last_name().length() <= 10){
           std::cout <<  contacts[i].get_last_name();
           spaces = 10 - contacts[i].get_last_name().length();
           while (spaces > 0){
            std::cout << " ";
            spaces--;
           }
           std::cout << "|";
        } else {
            for (int j = 0; j < 9; j++) {
                std::cout << contacts[i].get_last_name()[j];
            }
            std::cout << ".|";
        }
                if (contacts[i].get_nickname().length() <= 10){
           std::cout <<  contacts[i].get_nickname();
           spaces = 10 - contacts[i].get_nickname().length();
           while (spaces > 0){
            std::cout << " ";
            spaces--;
           }
        } else {
            for (int j = 0; j < 9; j++) {
                std::cout << contacts[i].get_nickname()[j];
            }
            std::cout << "." ;
        }
    std::cout << std::endl;
    }
}


void    showInfoWithIndex(Contact contacts[8], int index){
    std::cout << "Name: " << contacts[index].get_first_name() << std::endl;
    std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
    std::cout << "Telephone: " << contacts[index].get_phone() << std::endl; 
    std::cout << "Darkest secret: " << contacts[index].get_darkest_secret() << std::endl;
}

int main(){
    Contact contact[8];
    int number_friends;
    std::string command;
    bool isFull = false;
    number_friends = 0;
    while(42)
    {
        std::cout << "Introduce el comando de la agenda:";
        std::getline(std::cin, command);
        if (command == "ADD"){
            contact[number_friends] = addContact();
            number_friends++;
            if (number_friends == 9){
                number_friends = 0;
                isFull = true;
            }
        } else if (command == "SEARCH"){
            search_friends(contact, number_friends, isFull);
        }
        else if (command == "EXIT"){
            std::cout << "Close." << std::endl;
            break;
        } else {
            std::string token = command.substr(0, command.find(" "));
            int index = stoi(command.substr(command.find(" ") + 1, command.length()));
            if (token == "SEARCH") {
                if ((index >= 0 && index < 8 && isFull) || (index <= number_friends) ){
                    if ((number_friends == 0 && isFull) || number_friends > 0) {
                        showInfoWithIndex(contact, index);
                    } else {
                        std::cout << "Error buscando la informacion." << std::endl;     
                    }
                } else {
                    std::cout << "Error buscando la informacion." << std::endl; 
                }
            } else {
            std::cout << "Comand not found." << std::endl;
            }
        }
    }
    return (0);
}