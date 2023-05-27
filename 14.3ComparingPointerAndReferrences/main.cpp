#include <iostream>

using namespace std; // namespace name

int main()
{

    // Declare pointer and reference

    double double_value{12.34};

    double &ref_double_value{double_value}; // Reference to double_value

    double *p_double_value{&double_value}; // Pointer to double_value

    // Reading

    cout << "double_value : " << double_value << endl;
    cout << "ref_double_value : " << ref_double_value << endl;
    cout << "p_double_value : " << p_double_value << endl;
    cout << "*p_double_value : " << *p_double_value << endl;

    // writting through pointer
    *p_double_value = 15.44;

    cout << endl;
    cout << "double_value : " << double_value << endl;
    cout << "ref_double_value : " << ref_double_value << endl;
    cout << "p_double_value : " << p_double_value << endl;
    cout << "*p_double_value : " << *p_double_value << endl;

    // writting through Reference
    ref_double_value = 15.44;

    cout << endl;
    cout << "double_value : " << double_value << endl;
    cout << "ref_double_value : " << ref_double_value << endl;
    cout << "p_double_value : " << p_double_value << endl;
    cout << "*p_double_value : " << *p_double_value << endl;

    double some_other_double{78.45};

    ref_double_value = some_other_double;

    cout << "Making the reference reference something else...." << endl;
    cout << endl;
    cout << "double_value : " << double_value << endl;
    cout << "ref_double_value : " << ref_double_value << endl;
    cout << "p_double_value : " << p_double_value << endl;
    cout << "*p_double_value : " << *p_double_value << endl;

    
    // Making the pointer point something else
    p_double_value = &some_other_double;
    cout << "Making the pointer point something else...." << endl;
    cout << endl;
    cout << "double_value : " << double_value << endl;
    cout << "ref_double_value : " << ref_double_value << endl;
    cout << "&double_value : " << &double_value << endl;
    cout << "&ref_double_value : " << &ref_double_value << endl;
    cout << "p_double_value : " << p_double_value << endl;
    cout << "*p_double_value : " << *p_double_value << endl;


    *p_double_value = 555.5;

     cout << endl;
    cout << "double_value : " << double_value << endl;
    cout << "ref_double_value : " << ref_double_value << endl;
    cout << "&double_value : " << &double_value << endl;
    cout << "&ref_double_value : " << &ref_double_value << endl;
    cout << "p_double_value : " << p_double_value << endl;
    cout << "*p_double_value : " << *p_double_value << endl;


    //string manipulations with std
    // #islower
    // #isupper
    // isblank
    // toupper
    // tolower
    // isalnum
    // isalpha

    //C - string manipulation with std
    // strlen
    // strcmp
    // strncmp
    // strchr
    // strrchr
     


    
    return 0;
}