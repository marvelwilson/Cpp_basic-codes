#include <iostream>
using namespace std;

int main(){
    //How we've used pointers so far
    // int number {22};

    // int * p_number = &number;

    // cout << endl;
    // cout << "Declaring pointer and assigning address : " << endl;
    // cout << "number : " << number << endl;
    // cout << "p_number : " << p_number << endl;
    // cout << "&number : " <<  &number << endl;
    // cout << "*p_number : " << *p_number << endl;

    // int * p_number1; // Uninitialized pointer , contains junk address
    // int number1 {12};
    // p_number1 = &number1; // Make it point to a valid address
    // cout << endl;
    // cout << "Uninitalized pointer : " << endl;
    // cout << "*p_number1 : " << *p_number1 << endl;


  //   int *p_number4{nullptr};
  //   p_number4 = new int;   // Dynamically allocate space for a single int on the heap
  //                         // This memory belongs to our program from now on. The system
  //                         // can't use it for anything else, untill we return it.
  //                         // After this line executes, we will have a valid memory location
  //                         // allocation. The size of the allocated memory will be such that it 
  //                         // can store the type pointed to by the pointer

  //   *p_number4 = 77; // writting into dynamically allocated memory
  //   cout << endl;
  //   cout << "Dynamically allocating memory : " << endl;
  //   cout << " *p_number4 : " << *p_number4 << endl;

  //  //Return memory to the OS
  //   delete p_number4;
  //   p_number4 = nullptr;



  //It is also possible to initalize the pointer with a valid
  //address up on declaration. Not with a nullptr
  int *p_number5{ new int }; //Memory allocation contains junk value
  int *p_number6{ new int (22) }; // use direct initialization
  int *p_number7{ new int { 23 } }; // use uniform initialization

  cout << endl;
  cout << "Initialize with valid memory address at declaration : " << endl;
  cout << "p_number5 : " << p_number5 << endl;
  cout << "*p_number5 : " << *p_number5 << endl; // Junk value

  cout << "p_number6 : " << p_number6 << endl;
  cout << "*p_number6 : " << *p_number6 << endl; // Junk value

  cout << "p_number7 : " << p_number7 << endl;
  cout << "*p_number7 : " << *p_number7 << endl; // Junk value
 
   //Remember to release memory
   delete p_number5;
   p_number5 = nullptr;

    delete p_number5;
   p_number6 = nullptr;

    delete p_number5;
   p_number7 = nullptr;


  // try
  // {
  //   /* code */
  // }
  // catch(const std::exception& e)
  // {
  //   std::cerr << e.what() << '\n';
  // } // try and catch in cpp
  
  // int* lots_of_ints4 { new(nothrow) int[100000000] }; // not throwing an exceptions in failed memory allocation
    return 0;

}