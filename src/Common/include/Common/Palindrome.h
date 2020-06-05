#ifndef COMMON_PALINDROME_H
#define COMMON_PALINDROME_H

#include <Common/CommonDLL.h>

#include <string>

namespace evolution
{
class COMMON_EXPORT Palindrome {
public:
  static bool isPalindrome(const std::string & word);
  static std::string makePalindrome(const size_t letters);
};

} // namespace evolution

#endif
