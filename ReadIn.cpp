//get input

#include <iostream>
#include <string>

int main(){

    //ask for the person's name
    std::cout << "Please enter your first name: " << std::endl;

    //read the name
    std::string name;
    std::cin >> name;

    //write a greeting
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
