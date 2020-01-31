// precompiled header files
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
// #include <iterator>

// import code stored in other files
#include "logic/get_sum.cpp"
#include "logic/split_sum.cpp"

int main()
{
  // declare variables to be used
  double first_number, second_number, answer;
  std::string full_sum;

  // use function to request the
  // question from the user and
  // then assign it to a variable
  full_sum = get_sum();

  // call the split function and
  // add the results to a new vector
  std::vector<std::string> split_string = split_sum(full_sum);

  // std::cout << full_sum + "\n";
  // std::copy(split_string.begin(), split_string.end(), std::ostream_iterator<std::string>(std::cout, " "));

  std::string sum_parts[3];
  if (split_string.size() > 3)
  {
    std::cout << "ERROR: Please enter only two numbers!";
  }
  else if (split_string.size() < 3)
  {
    std::cout << "ERROR: Please check and make sure you have entered two numbers!";
  }
  else
  {
    // convert the vector into an array
    std::copy(split_string.begin(), split_string.end(), sum_parts);
    // for (std::string i : sum_parts)
    // {
    //   std::cout << i << ",";
    // }
  }

  return 0;
}