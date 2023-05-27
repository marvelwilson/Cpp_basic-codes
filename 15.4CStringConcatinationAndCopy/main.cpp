#include <iostream>
#include <cstring>
using namespace std; // std namespace


int main(int argc, char const *argv[])
{
  /*
  //Concatenation
  cout << endl;
  cout << "strcat : " << endl;
  doc : https://en.cppreferecnce.com/w/cpp/string/byte/strcat

  char dest[50] = "Hello ";
  char src[50] = "world!";
  strcat(dest, src); // Some compilers (MSVC) think these functions are unsafe
  cout << "dest : " << dest << endl; // Hello World!
  strcat(dest, " Goodbye World!");
  cout << "dest : " << dest << endl; // Hello world! Goodbye World!

  */


/*
 //More concatenation
   cout << endl;
  cout << "More strcat : " << endl;
                                                              //terminator
  char *dest1 = new char[30]{'F','i','r','e','l','o','r','d','\0'};
  char *source1 =                                                                //terminator
  new char[30]{',','T','h','e',' ','P','h','i','n','i','x',' ','K','i','n','g','!','\0'};
  
  //NOTE TO SELF :
          //Describe what's going to happen in strcat before you do the cat :
          //source is going to be appended to dest, and the process
          //will start by overriding the null character in dest

  cout << "strlen(dest1) :" << strlen(dest1) << endl;
  cout << "strlen(source1) :" << strlen(source1) << endl;

  cout << "Concatenating....." << endl;
  strcat(dest1, source1);

  cout << "strlen(dest1) :" << strlen(dest1) << endl;
  cout << "dest1 :" << dest1 << endl;

*/


 //More concatenation
   cout << endl;
  cout << "strncat : " << endl;
                                                            
  char dest2[50]{ "Hello" };
  char source2 [30] = {" There is a bird on my window"};
  
 //You can even use the returned pointer immediately for print out
 //This is a pattern you'll see a lot in C++ code out there
 cout << strncat(dest2, source2, 6) << endl;

 //Or you can do strncat seperately and print dest2

 strncat(dest2, source2, 6);
 
  cout << "The concatenated string is : " << dest2 << endl;

  return 0;
}// excution function (main)
