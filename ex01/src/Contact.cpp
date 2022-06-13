
#include "../include/contact.hpp"

std::string Contact::get_first_name() const {
    return (this->first_name);
}

void Contact::set_first_name(std::string first_name) {
    this->first_name = first_name;
}

std::string Contact::get_last_name() const {
    return (this->last_name);
}

void Contact::set_last_name(std::string last_name) {
    this->last_name = last_name;
}

std::string Contact::get_nickname() const {
    return (this->nickname);
}

void Contact::set_nickname(std::string nickname) {
    this->nickname = nickname;
}

std::string Contact::get_phone() const {
    return (this->phone);
}

void Contact::set_phone(std::string phone) {
    this->phone = phone;
}

std::string Contact::get_darkest_secret() const {
    return (this->darkest_secret);
}

void Contact::set_darkest_secret(std::string darkest_secret) {
    this->darkest_secret = darkest_secret;
}