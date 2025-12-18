#include <iostream>

int main(){
    double TotalAmount;    // Variable to store the total amount of money
    double PersonAmount;  // Variable to store amount per person
    int PersonNumber;    // Variable to store number of people

     std::cout << "Enter total amount: ";  // Ask user to enter total amount
     std::cin >> TotalAmount;             // Read total amount from user

     std::cout << "Enter number of person: ";  // Ask user to enter number of people
     std::cin >> PersonNumber;               // Read number of people

     PersonAmount = TotalAmount / PersonNumber;  // Calculate amount per person

     std::cout << "Amount per person: " << PersonAmount << std::endl;  // Display result

  return 0;
