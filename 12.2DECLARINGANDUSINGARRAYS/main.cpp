#include <iostream>
#include <string> 
using namespace std;

int main(){
    
    // Declare an array of ints
    int scores [] {12, 40, 60, 50, 30, 31, 49, 23};
    scores [3] = 12;

     int sum = 0;
    for (auto value : scores)
    {
       sum +=value;
      cout << value << endl;
    }

    cout << sum << "size of array : " << size(scores)  << endl;

 
   // storing datas array, empty default varable, empty input varable
    string worl [] {"Marvel", "Wilson"};
    string name = "";
    string inputvalue = "";
    getline(cin, inputvalue);
   
   // looping through with size 
    int sz = size(worl);
    for (size_t i = 0; i < sz ; i++)
    {
        if ((sz - 1) != i)
        {
          name +=worl[i].append(" ");
        }else{
          name +=worl[i];
        }
        
    }
    
    //condition to compare inputed & stored datas. 
    if (name == inputvalue)
    {
      cout << "Succefully Logged in As " << name << endl;
    }else{
      cout << "Invalid Creds " << inputvalue << endl;
    }
    
    return 0;
}