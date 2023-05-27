#include <iostream>

// int bull(){
//     auto result = (10 <=> 20) > 0;
//     std::cout << result << std::endl;
// }

consteval int get_value(){
  return 3;
}

int main(){
    constexpr int value = get_value();
    std::cout << "value :" << value << std::endl;
    return 0;
}