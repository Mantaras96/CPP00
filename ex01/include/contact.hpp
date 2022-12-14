/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:46:36 by amantara          #+#    #+#             */
/*   Updated: 2022/12/14 19:46:40 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:
    std::string get_first_name(void) const;
    void        set_first_name(std::string first_name);

    std::string get_last_name(void) const;
    void        set_last_name(std:: string last_name);

    std::string get_nickname(void) const;
    void        set_nickname(std:: string nickname);

    std::string get_phone(void) const;
    void        set_phone(std:: string phone);

    std::string get_darkest_secret(void) const;
    void        set_darkest_secret(std:: string darkest_secret);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string darkest_secret;
};

#endif //CPP0_CONTACT_H
