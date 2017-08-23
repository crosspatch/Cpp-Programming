//Product from chapter in book

#include <iostream>

int main(){

    int product = 1;
    for(int i = 2; i < 11; i++){
        product = product * i;
    }
    std::cout << "The product is " << product << std::endl;

    return 0;
}
