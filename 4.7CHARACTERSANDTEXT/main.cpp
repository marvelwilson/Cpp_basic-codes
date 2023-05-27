#include <iostream>


int main(){
   
    char char1 {'a'};
    char char2 {'r'};
    char char3 {'r'};
    char char4 {'o'};
    char char5 {'w'};

    std::cout << char1 << std::endl;
    std::cout << char2 << std::endl;
    std::cout << char3 << std::endl;
    std::cout << char4 << std::endl;
    std::cout << char5 << std::endl;

    //one byte in memory : 2'8 = 256 different values (0 ~ 255)
    std::cout << std::endl;
    
    char value = 65;  // ASCII character code for 'A'
    
    std::cout << "Value : " << value << std::endl;
    std::cout << "Value : " << static_cast<int>(value) << std::endl;



    return 0;
}