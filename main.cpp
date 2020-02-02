// precompiled header files
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>

// import code stored in other files
#include "logic/get_sum.cpp"
#include "logic/split_sum.cpp"
#include "logic/calculator.cpp"

int main()
{
  // declare variables to be used
  double first_number, second_number, answer;
  std::string question_operator, full_sum;

  // use function to request the
  // question from the user and
  // then assign it to a variable
  full_sum = get_sum();

  // call the split function and
  // add the results to a new vector
  std::vector<std::string> split_string = split_sum(full_sum);

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
  }

  // assign the parts of the sum to
  // different variables using the
  // function atof with the method
  // c_str()
  first_number = atof(sum_parts[0].c_str());
  second_number = atof(sum_parts[2].c_str());
  question_operator = sum_parts[1]; // keep the operator as a string for reference

  // use calculator function to get the answer
  answer = calculator(first_number, second_number, question_operator);

  // display the answer
  std::cout << answer;

  return 0;
}