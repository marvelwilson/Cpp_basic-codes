#include <iostream>



int main(){
// //Braced initializers
// //variables may contain random garbage value . WARNING
// int elephant_count;

// int lion_count{}; //Initialize to zero

// int dog_count {10}; //Initializes to 10

// int cat_count {15}; //Initializes to 15

// //Can use expression as initializer
// int demosticated_animals {dog_count + cat_count};

// std::cout << "Elephant Count : " << elephant_count << std::endl;
// std::cout << "Lion Count : " << lion_count << std::endl; 
// std::cout << "Dog Count : " << dog_count << std::endl; 
// std::cout << "Cat Count : " << cat_count << std::endl; 
// std::cout << "Domesticated animal Count : " << demosticated_animals << std::endl; 

//Functional Initialization
// int apple_count(5);
// int orange_count(10);
// int fruit_count (apple_count + orange_count);

// // information lost. less safe than braced initialzers
// int narriwing_conversion_functional (2.9);


// std::cout << "Apple Count : " << apple_count << std::endl;
// std::cout << "Orange Count : " << orange_count << std::endl; 
// std::cout << "Fruit Count : " << fruit_count << std::endl; 
// std::cout << "Narrowing Conversion : " << narriwing_conversion_functional << std::endl; 

//Assignment notation

int bike_count = 2;
int truck_count = 7;
int vehicle_count = bike_count + truck_count;
int narrowing_conversion_functional = 2.9;

std::cout << "Bike Count : " << bike_count << std::endl;
std::cout << "Truck Count : " << truck_count << std::endl; 
std::cout << "Vehicle Count : " << vehicle_count << std::endl; 
std::cout << "Narrowing Conversion : " << narrowing_conversion_functional << std::endl; 

//check the size with sizeof
std::cout << "sizeof Bike : " << sizeof(int) << std::endl;
std::cout << "sizeof Truck : " << sizeof(truck_count) << std::endl; 
return 0; 
}