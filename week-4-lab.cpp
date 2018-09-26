#include <iostream>
#include <string>
#include <sstream>
// Include the library that will allow you to convert from string to integer


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  int x,y,z,sum;
  std::cout << "Enter 3 numbers on same line: ";
  // The user should enter all integers on the same line, pressing enter only once
  std::cin >> x >> y >> z;





  // Multiply the three integers

  sum= x * y * z;



  // Output the result of the multiplication

  std::cout << "The result of the multiplication of the 3 numbers you entered: " << sum;

  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html
  std::string lake;
  std::string colour;
  std::string instrument;
  std::cout << "Name a lake: ";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  std::getline (std::cin, lake);
  std::cout << "Name a colour: ";
  std::getline (std::cin, colour);
  std::cout << "Name an instrument: ";
  std::getline (std::cin, instrument);
  std::cout << "From across " << lake << " lake,\n";
  std::cout << "Past the " << colour << " winter trees,\n";
  std::cout << "Faint sounds of a " << instrument << ".\n"; 
 











  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;


  std::string myNumber = "1234"; // Convert this string to an integer 
  int myint = 0;
  std::stringstream(myNumber) >> myint;
  

  
  std::cout << " " << myint << ":is an integer"; //Insert the integer before the text of this output

  return 0;
}