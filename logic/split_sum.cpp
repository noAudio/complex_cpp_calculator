#include <iostream>
#include <sstream>
#include <vector>
#include <string>

std::vector<std::string> split_sum(std::string full_sum)
{
  std::string string_buffer;                   // buffer to hold the string
  std::stringstream ss_split_string(full_sum); // add original sum to a splitstream var in order to manipulate it (ie split it)

  // create a vector to hold the split string
  std::vector<std::string> split_string;

  // loop through the string and split it
  // then place the split parts into the vector
  while (ss_split_string >> string_buffer)
  {
    split_string.push_back(string_buffer);
  }

  return split_string;
}