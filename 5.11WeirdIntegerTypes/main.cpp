#include <iostream>
using namespace std;

int main(){
     short int var1 {10};
     short int var2 {20};

     char var3 {40};
     char var4 {50};

    cout << "size of var1 : " << sizeof(var1) << endl;
    cout << "size of var2 : " << sizeof(var2) << endl;
    cout << "size of var3 : " << sizeof(var3) << endl;
    cout << "size of var4 : " << sizeof(var4) << endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    cout << "size of result1 : " << sizeof(result1)  << endl; // 4
    cout << "size of result2 : " << sizeof(result2)  << endl; // 4
   

   
 
    return 0;
}