#include <iostream>

using namespace std;

int main()
{

  // check if character is alphanumeric
  //  cout << endl;
  //  cout << "isalnum : " << endl;

  // cout << "C is alphanumeric : " << isalnum('C') << endl;
  // cout << "^ is alphanumeric : " << isalnum('^') << endl;

  // //can use this a test condition
  // char input_char {'*'};
  // if (isalnum(input_char))
  //        cout << input_char << " is alphanumeric. " << endl;
  // else
  //       cout << input_char << " is not alphanumeric. " << endl;

  // check if character if alphabetic
  /*
  cout << endl;
  cout << "isalpha : " << endl;
  cout << "C is alphabetic : " << isalpha('e') << endl;
  cout << "^ is alphabetic : " << isalpha('^') << endl;
  cout << "7 is alphabetic : " << isalpha('7') << endl;

  if (isalpha('e'))
    cout << 'e' << " is alphabetic. " << endl;
  else
    cout << 'e' << " is not alphabetic. " << endl;
*/

//check if a character is blank
// cout << endl;
// cout << "isblank : " << endl;
// char message[] {"Hello there. How are you doing? The sun is shining."};
// cout << "message : " << message << endl;

// // find and print blank index
// size_t blank_count{}; //Initiating varable
// for (size_t i {0}; i < size(message); i++)
// {
//  // cout << "value : " << message[i] << endl;
//  if (isblank(message[i])){
//   cout << "Found a blank character at index : [" << i << "]" << endl;
//   ++blank_count;
//  }
// }

// cout << " In total we found " << blank_count << " blank character. " << endl;


// //Check if character is lowercase or upppercase 
// cout << " islower and isupper" << endl;
// cout << endl;
// char thought[] {"The C++ Programming is one of teh most used on the planet"};
// size_t lowercase_count {};
// size_t  uppercase_count {};

// //print original string for ease of comparison on the terminal
// cout << " Original string : " << thought << endl;

// for (auto character : thought)
// {
//   if (islower(character))
//   {
//     cout << " " << character;
//     ++lowercase_count;
//   }
//   if (isupper(character))
//   {
//     ++uppercase_count; 
//   }  
  
// }
//  cout << endl;
//   cout << " Found " << lowercase_count << " Lowercase character and "
//   << uppercase_count << " uppercase characters. " << endl;
  

  //Check if a character is a digit 
/*
cout << endl;
cout << " isdigit : " << endl;
char statement[] {"Mr Hamilton owns 221 cows. That;s a lot of cows! The kid exclamed"};
cout << " Statement : " << statement << endl;

size_t digit_count {};

for (auto character : statement)
{
  if (isdigit(character))
  {
    cout << " Found digit : " << character << endl;
    ++digit_count;
  } 
  
}
cout << " Found " << digit_count << " digits in the statement string " << endl;
  
*/

// Turning a character to lowercase using the tolower function 
cout << endl;
cout << " tolower and  toupper : " << endl;
char original_str[] {"Home. The feeling of belonging"};
char dest_str[size(original_str)];
// Turn this to uppercase. Change the array in place 
for (size_t i{}; i < size(original_str); i++)
{
  dest_str[i] = toupper(original_str[i]); // pushing value to array of initialized
}

cout << " Original string : " << original_str << endl;
cout << "Uppercase string : " << dest_str << endl;


// Turn this to lowercase. Change the array in place 
for (size_t i{}; i < size(original_str); i++)
{
  dest_str[i] = tolower(original_str[i]); // pushing value to array of initialized
}

cout << "Lowercase string : " << dest_str << endl;



  return 0;
}