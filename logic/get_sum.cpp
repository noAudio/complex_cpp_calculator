#include <iostream>
#include <string>

std::string get_sum()
{
  // variable to store the sum
  std::string full_sum;
  std::string q_format = "1 + 1";

  // ask for sum
  std::cout << "Please type in your sum:\n";
  std::cout << "(e.g "
            << "'" << q_format << "'"
            << ")\n";
  std::getline(std::cin, full_sum); // using getline() to capture the whole input and not ignore spaces

  // return the given sum
  return full_sum;
}