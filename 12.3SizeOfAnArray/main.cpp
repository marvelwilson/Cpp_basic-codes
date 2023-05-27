#include <iostream>
#include <string> 
using namespace std;



int main(){
   
   int scores [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   for (size_t i = 0; i < 10; i++)
   {
     cout << "scores [" << i << "] :" << sizeof(scores) << endl;
   }
    
    int int_var{48}; // declaring int var value
    int *p_int{&int_var}; // assigned pinter to an int varable
    cout << p_int << endl; //print out the value

}