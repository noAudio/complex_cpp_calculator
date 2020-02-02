#include <string>
#include <iostream>

double calculator(double first_number, double second_number, std::string question_operator)
{
  double answer;

  // use an if else statement to check what operator
  // was used then perform the relevant calculation
  // and throw an error if the value is not correct
  if (question_operator == "+")
  {
    answer = first_number + second_number;
  }
  else if (question_operator == "-")
  {
    answer = first_number - second_number;
  }
  else if (question_operator == "*")
  {
    answer = first_number * second_number;
  }
  else if (question_operator == "/")
  {
    answer = first_number / second_number;
  }
  else
  {
    std::cout << "The operator you defined is not valid.";
  }

  return answer;
}