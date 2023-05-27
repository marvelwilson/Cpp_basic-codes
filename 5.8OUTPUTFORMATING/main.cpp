#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    

    //std::flush : flushes the output buffer to its final destianation.
    cout << "This is a nice message....." << endl << flush; 
    
    //After this std::flush, we're sure that at this line, the message has sent
    //to the stream. This may be important in some applications.

    //=======================================================

    cout << endl;

    //std::setw : Adjusts the field with for the item about to be printed.
    //The setw manipulator only affects the next value to be printed.

     cout << "Unformatted table : " << endl;
     cout << "Daniel " << "Gray" << " 25 " << endl;
     cout << "Stanly " << "woods" << " 33 " << endl;
     cout << "Jordan " << "Parker" << " 45 " << endl;
     cout << "Joe " << "Ball" << " 25 " << endl;
     cout << "Josh " << "Carr" << " 27 " << endl;
     cout << "Izaiah " << "Robinson" << " 29 \n \n ";

     cout << "Formatted table : " << endl;
     cout << setw(10) << "Firstname " << setw(10)<< "Lastname" << setw(5)<< " Age " << endl;
     cout << setw(10) << "Daniel " << setw(10)<< "Gray" << setw(5)<< " 25 " << endl;
     cout << setw(10) << "Stanly " << setw(10)<< "woods" << setw(5)<< " 33 " << endl;
     cout << setw(10) << "Jordan " << setw(10)<< "Parker" << setw(5)<< " 45 " << endl;
     cout << setw(10) << "Joe " << setw(10)<< "Ball" << setw(5)<< " 25 " << endl;
     cout << setw(10) << "Josh " << setw(10)<< "Carr" << setw(5)<< " 27 " << endl;
     cout << setw(10) << "Izaiah " << setw(10)<< "Robinson" << setw(5)<< " 29 \n \n ";
     
     int col_width{14};


     cout << "Formatted table with variables: " << endl;
     cout << setw(col_width) << "Firstname " << setw(col_width)<< "Lastname" << setw(col_width/2) << " Age " << endl;
     cout << setw(col_width) << "Daniel " << setw(col_width)<< "Gray" << setw(col_width/2) << " 25 " << endl;
     cout << setw(col_width) << "Stanly " << setw(col_width)<< "woods" << setw(col_width/2) << " 33 " << endl;
     cout << setw(col_width) << "Jordan " << setw(col_width)<< "Parker" << setw(col_width/2) << " 45 " << endl;
     cout << setw(col_width) << "Joe " << setw(col_width)<< "Ball" << setw(col_width/2) << " 25 " << endl;
     cout << setw(col_width) << "Josh " << setw(col_width)<< "Carr" << setw(col_width/2) << " 27 " << endl;
     cout << setw(col_width) << "Izaiah " << setw(col_width)<< "Robinson" << setw(col_width/2) << " 29\n" << endl;


    //Justify : value can be justified in ther fields. there are three manipulators
    //  for adjusting the justification: left, right, and internal.

    //right justification
    col_width = 20;


     cout << "Right justification table(defaults) : " << endl;
     cout << right; 
     cout << setw(col_width) << "Firstname " << setw(col_width)<< "Lastname" << setw(col_width/2) << " Age " << endl;
     cout << setw(col_width) << "Daniel " << setw(col_width)<< "Gray" << setw(col_width/2) << " 25 " << endl;
     cout << setw(col_width) << "Stanly " << setw(col_width)<< "woods" << setw(col_width/2) << " 33 " << endl;
     cout << setw(col_width) << "Jordan " << setw(col_width)<< "Parker" << setw(col_width/2) << " 45 " << endl;
     cout << setw(col_width) << "Joe " << setw(col_width)<< "Ball" << setw(col_width/2) << " 25 " << endl;
     cout << setw(col_width) << "Josh " << setw(col_width)<< "Carr" << setw(col_width/2) << " 27 " << endl;
     cout << setw(col_width) << "Izaiah " << setw(col_width)<< "Robinson" << setw(col_width/2) << " 29\n" << endl;


  cout << endl;
//left justification
    col_width = 20;


     cout << "Left justification table : "  << endl;
     cout << left; 
     cout << setw(col_width) << "Firstname " << setw(col_width)<< "Lastname" << setw(col_width/2) << " Age" << endl;
     cout << setw(col_width) << "Daniel " << setw(col_width)<< "Gray" << setw(col_width/2) << " 25" << endl;
     cout << setw(col_width) << "Stanly " << setw(col_width)<< "woods" << setw(col_width/2) << " 33" << endl;
     cout << setw(col_width) << "Jordan " << setw(col_width)<< "Parker" << setw(col_width/2) << " 45" << endl;
     cout << setw(col_width) << "Joe " << setw(col_width)<< "Ball" << setw(col_width/2) << " 25 " << endl;
     cout << setw(col_width) << "Josh " << setw(col_width)<< "Carr" << setw(col_width/2) << " 27 " << endl;
     cout << setw(col_width) << "Izaiah " << setw(col_width)<< "Robinson" << setw(col_width/2) << " 29" << endl;

     

     //Internal justification : sign is left is left justification, data is right justified
     cout << endl;
     cout << "Internal justiied : " << endl;
     cout << right;
     cout << setw(10) << -123.45 << endl;
     cout << internal;
     cout << setw(10) << -123.45 << endl;



    //setfill
    col_width = 20;


     cout << "Tabel with fill characters : "  << endl;
     cout << left; 
     cout << setfill('-'); 
     cout << setw(col_width) << "Firstname " << setw(col_width)<< "Lastname" << setw(col_width/2) << " Age" << endl;
     cout << setw(col_width) << "Daniel " << setw(col_width)<< "Gray" << setw(col_width/2) << " 25" << endl;
     cout << setw(col_width) << "Stanly " << setw(col_width)<< "woods" << setw(col_width/2) << " 33" << endl;
     cout << setw(col_width) << "Jordan " << setw(col_width)<< "Parker" << setw(col_width/2) << " 45" << endl;
     cout << setw(col_width) << "Joe " << setw(col_width)<< "Ball" << setw(col_width/2) << " 25 " << endl;
     cout << setw(col_width) << "Josh " << setw(col_width)<< "Carr" << setw(col_width/2) << " 27 " << endl;
     cout << setw(col_width) << "Izaiah " << setw(col_width)<< "Robinson" << setw(col_width/2) << " 29" << endl;


   // boolalpha and noboolalpha : control bool output format : 0/1 or true/false.

   bool condition {true};
   bool other_condition {false};

   cout << "Condition : " << condition << endl;
   cout << "other_condition : " << other_condition << endl;
   
   cout << endl;
   cout << boolalpha;
   cout << "Condition : " << condition << endl;
   cout << "other_condition : " << other_condition << endl;

   cout << endl;
   cout << noboolalpha;
   cout << "Condition : " << condition << endl;
   cout << "other_condition : " << other_condition << endl;
   
   cout << endl;


   //showpos and noshowpos : show or hide the + sign for positiive number
   int pos_num {34};
   int neg_num {-45};

   cout << "pos_num : " << pos_num << endl;
   cout << "neg_num : " << neg_num << endl;
   
   cout << endl;
   cout << showpos;
   cout << "pos_num : " << pos_num << endl;
   cout << "neg_num : " << neg_num << endl;

   cout << endl;
   cout << noshowpos;
   cout << "pos_num : " << pos_num << endl;
   cout << "neg_num : " << neg_num << endl;
  
  //===================================================================
    cout << endl;

     //different number system : dec, hex, oct
   int pos_int {34};
   int neg_int {-45};
   auto double_var {498.32};

  cout << endl;
   cout << "default base format : " << endl;
   cout << "pos_int : " << pos_int << endl;
   cout << "neg_int : " << neg_int << endl;
   cout << "double_var : " << double_var << endl;

  cout << endl;
   cout << "pos_int in defferent bases : " << endl;
   cout << "pos_int (dec) : " << dec << pos_int << endl;
   cout << "pos_int (hex) : " << hex << pos_int << endl;
   cout << "pos_int (oct)  : " << oct << pos_int << endl;

  cout << endl;
  cout << "neg_int in defferent bases : " << endl;
   cout << "neg_int (dec) : " << dec << neg_int << endl;
   cout << "neg_int (hex) : " << hex << neg_int << endl;
   cout << "neg_int (oct)  : " << oct << neg_int << endl;

  cout << endl;
   cout << "double_var in defferent bases : " << endl;
   cout << "double_var (dec) : " << dec << double_var << endl;
   cout << "double_var (hex) : " << hex << double_var << endl;
   cout << "double_var (oct)  : " << oct << double_var << endl;

//============================================================================
  cout << endl;

//uppercase and nouppercase
  pos_int = 717171;
    cout << endl;
   cout << "pos_int in (nouppercase : default) : " << endl;
   cout << "pos_int (dec) : " << dec << pos_int << endl;
   cout << "pos_int (hex) : " << hex << pos_int << endl;
   cout << "pos_int (oct)  : " << oct << pos_int << endl;

   cout << endl;
   cout << "pos_int in (uppercase) : " << endl;
   cout << uppercase;
   cout << "pos_int (dec) : " << dec << pos_int << endl;
   cout << "pos_int (hex) : " << hex << pos_int << endl;
   cout << "pos_int (oct)  : " << oct << pos_int << endl;
    


  //===================================================================
    cout << endl;

  //fixed and scientific : for floating point values
  
   auto a {3.141592653589793238462633832795};
   auto b {2006.0};
   auto c {1.34e-10};
 cout << endl;
 cout << "double values (default : use scientific where  necessary) : " << endl;
 cout << "a : " << a << endl;
 cout << "b : " << b << endl;
 cout << "c : " << c << endl;

 cout << endl;
 cout << "double values (fixed) : " << endl;
 cout << fixed;
 cout << "a : " << a << endl;
 cout << "b : " << b << endl;
 cout << "c : " << c << endl;

 cout << endl;
 cout << "double values (scientific) : " << endl;
 cout << scientific;
 cout << "a : " << a << endl;
 cout << "b : " << b << endl;
 cout << "c : " << c << endl;

 cout << endl;
 cout << "double values (bact to default) : " << endl;
 cout.unsetf(ios::scientific | ios::fixed); //Hack
 cout << "a : " << a << endl;
 cout << "b : " << b << endl;
 cout << "c : " << c << endl;




 //==================================================================
 cout << endl;


 //setprecision() : the number of digits printed out for floating point. Default
  
   a = 3.141592653589793238462633832795;
 cout << endl;
 cout << "a (default precision) : " << endl;
 cout << setprecision(10);
 cout << "a (precision(10)) :" << a << endl;
 cout << setprecision(20);
 cout << "a (precision(20)) :" << a << endl;

//If the precision is bigger than supported by  the type, you'll just print garbage

//===========================================================================
cout << endl;


 //Showpoint and  noshowpoint : show trailing zeros if neccessary
 //Force output of the decimal point

 auto d {34.1};
 auto e {101.99};
 auto f {12.0};
 auto g {45};

  
 cout << endl;
 cout << "Showpoint (default) : " << endl;
 cout << "d : " << d << endl;
 cout << "e : " << e << endl;
 cout << "f : " << f << endl;  //12
 cout << "g : " << g << endl;
cout << endl;

cout << "Noshowpoint(default) : " << endl;
cout << noshowpoint;
 cout << "d : " << d << endl;
 cout << "e : " << e << endl;
 cout << "f : " << f << endl;  //12
 cout << "g : " << g << endl;
cout << endl;

cout << "Showpoint : " << endl;
cout << showpoint;
 cout << "d : " << d << endl;
 cout << "e : " << e << endl;
 cout << "f : " << f << endl;  //12.0
 cout << "g : " << g << endl;
cout << endl;

//===========================================================================
cout << endl;
  return 0;
}