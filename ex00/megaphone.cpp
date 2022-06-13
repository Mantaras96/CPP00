//
// Created by Albert Mantaras on 7/6/22.
//
#include <iostream>

int main(int argc, char *argv[]){
//    std::cout<<argc;
//    std::cout<<argv[1];
    // Printing elements of an array using
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (int i = 1; i < argc; i++) {
            std::string str(argv[i]);
            for (unsigned  long j = 0; j < str.length(); j++) {
                std::cout << (char)std::toupper(str[j]);
            }
            std::cout << std::endl;
    }

// foreach loop: Warning C++11 extension.
//        for (char x : str){
//            std::cout << (char)std::toupper(x);
//        }
    }
    return 0;
}
