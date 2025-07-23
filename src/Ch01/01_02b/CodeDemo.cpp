// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// Allows the program to print data from the screen and read data from the keyboard
#include <iostream>

// Functions are blocks of the code that perform specific tasks and can return values
// Functions are defined by return type (int), name (main) and parameters ()
// All programs must include a main function to signal where the program starts
int main(){
    // This starting statement uses character out to print hello world to the console
    std::cout << "Hi There!" << std::endl;
    
    // this statement returns two blank lines with the command std::endl;
    std::cout << std::endl << std::endl << std::endl;

    // Return statements can indicate if a program has run succesfully
    return 0;
}