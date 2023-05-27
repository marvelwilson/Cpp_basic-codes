#include <iostream>
#include <string> 

int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return  result;
}

int main(){
  std::string name;
  int age;
//  int first_number {3}; //statement
//  int second_number {7};
//  int all = (first_number + second_number) + addNumbers(first_number, second_number);
//  std::cin >> name >> age;
//  std::cin >> name; 

 std::cout << "Please Enter Your Name :" ;
 std::getline(std::cin, name); 
  std::cout << "Please Enter Your Age :" ;
 std::cin >> age;

 std::cerr << "Hello " << name << " You're " << age << " year(s) Old" << std::endl;
//  std::clog << "Sum :" << all << std::endl;

return 0; 
}