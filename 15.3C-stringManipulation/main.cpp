#include <iostream>
#include <cstring>
using namespace std;

int main()
{

  // strlen : Find the length of a string
  // real arrays and those decayed into pointers
  //  const char message1 [] {"The sky is blue."};

  // //Array decays into pointer when we use const char*
  // const char* message2 {"The sky is blue."};
  // cout << "message1 : " << message1 << endl;

  // //strlen ignores null character
  // cout << "strlen(message1) : " << strlen(message1) << endl;

  // //Includes the null character
  // cout << "sizeof(message1) : " << sizeof(message1) << endl;

  // //strlen still works with decayed arrays
  // cout << "strlen(message2)" << strlen(message2) << endl;

  // //prints size of pointer
  // cout << "sizeof(message2)" << sizeof(message2) << endl;

  // strcmp - signature : int strcmp ( const char *lhs, const char  *rhs );
  // Return negative value if lhs appears before rhs in lexicographical order,
  // Zero if lhs and rhs compare equal.
  // and positive value if lhs appears after rhs in lexicographical order.

  // cout << endl;
  // cout << "strcmp : " << endl;
  // const char *string_data1{"Alabama"};
  // const char *string_data2{"Blabama"};

  // char string_data3[]{"Alabama"};
  // char string_data4[]{"Blabama"};

  // // Print out the comparison
  // cout << "strcmp (" << string_data1 << "," << string_data2 << ") : "
  //      << strcmp(string_data1, string_data2) << endl;

  // cout << "strcmp (" << string_data3 << "," << string_data4 << ") : "
  //      << strcmp(string_data3, string_data4) << endl;

  // string_data1 = "Alabama";
  // string_data2 = "Alabamb";

  // // Print out the comparison
  // cout << "strcmp (" << string_data1 << "," << string_data2 << ") : "
  //      << strcmp(string_data1, string_data2) << endl;

  // strncmp : int strncmp( const char *lhs, const char  *rhs, size_t count );
  // compares n characters in the strings
  // Returns negative value if lhs appears before rhs in lexicographical order,
  // Zero if lhs and rhs compare equal. or if count is zero
  // positive value if lhs appears after rhs in lexicographical order.

  // print out the comparison
  /*
   const char *string_data1{"Alabama"};
    const char *string_data2{"Blabama"};
    size_t n{3};
    cout << endl;
    cout << "strncmp : " << endl;
    cout << "strcmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
         << strncmp(string_data1, string_data2,n) << endl;

  string_data1 = "aaaia";
  string_data2 = "aaanc";

   cout << "strcmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
         << strncmp(string_data1, string_data2,n) << endl;

  n = 5;

    cout << "strcmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
         << strncmp(string_data1, string_data2,n) << endl;

  string_data1 = "aaaoa";
  string_data2 = "aaance";

    cout << "strcmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
         << strncmp(string_data1, string_data2,n) << endl;
  */

  // Find the first occurence of a character
  // CCODE STOLEN FROM THE DOCS :
  /*
  cout << endl;
  cout << "strchr : " endl;
  //doc : https://en.cpprefernce.com/w/cpp/string/byte/strchr

  //we use strchr to find all the characters one by one

  const char *str {"Try not. Do, or do not. There is not try."};
  //can make this a const pointer to prevent users from making it point somewhere else
  char target = 'T';
  const char *result = str;
  size_t iterations{};


  while ((result = strchr(result, target)) != nullptr){
    cout << "Found '" << target << "' starting at '" << result << "'\n";
    // Increment result, otherwise we'll find target at the same location
    ++result;
    ++iterations;

  }
  cout << "iterations : " << iterations << endl;
  */


  //A lesser version that will loop 25 times

  // Find the first occurence of a character
  // CCODE STOLEN FROM THE DOCS :
/*
  cout << endl;
  cout << "strchr : " << endl;
  // doc : https://en.cpprefernce.com/w/cpp/string/byte/strchr

  // we use strchr to find all the characters one by one

  const char *str{"Try not. Do, or do not. There is not try."};
  // can make this a const pointer to prevent users from making it point somewhere else
  char target = 'T';
  const char *result = { nullptr };
  size_t iterations{};

  while ((result = strchr(str, target)) != nullptr)
  {
    cout << "Found '" << target << "' starting at '" << result << "'\n";
    // Increment result, otherwise we'll find target at the same location
    ++str; // Making the pointer point to the next character
    ++iterations;
  }
  cout << "iterations : " << iterations << endl;

*/



// Find last occurence
  // CCODE STOLEN FROM THE DOCS :

  cout << endl;
  cout << "strrchr : " << endl;
  // doc : https://en.cpprefernce.com/w/cpp/string/byte/strchr

  // we use strchr to find all the characters one by one

  char input[] = "/home/user/hello.cpp";
  char* output = strrchr(input, '/');
 if (output)
      cout << output+1 << endl; // +1 because we want ti start printing past 
                                // the character found by strrchr




  return 0;
}