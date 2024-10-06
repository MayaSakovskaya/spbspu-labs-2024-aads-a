#ifndef PARSER_HPP
#define PARSER_HPP
#include <string>
#include <sstream>
#include <stdexcept>
#include "queue.hpp"
#include "stack.hpp"
#include "tokens.hpp"

namespase sakovskaia
{
  Queue< std::string > infix_to_postfix(const std::string & expression);
  int evaluate_postfix(const Queue< std::string > & postfix);
}

#endif
