//Larger number from the book

#include <iostream>

int main(){

    int first;
    std::cout << "Please enter the first number" << std::endl;
    std::cin >> first;

    int second;
    std::cout << "Please enter the second number " << std::endl;
    std::cin >> second;

    if(second > first)
        std::cout << second << " is larger than " << first << std::endl;
    else
        std::cout << first << " is larger than " << second << std::endl;

    return 0;
}
