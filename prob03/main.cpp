// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
  {
    int height, feet, inches;

    std::cout << "Please enter the person's height in inches: ";
    std::cin >> height;

    //Calculates person's height
    feet = height / 12;
    inches = height % 12;

    //Prints height
    std::cout << "That person is " << feet << "'" << inches << '"' << std::endl;

    return 0;
  }
