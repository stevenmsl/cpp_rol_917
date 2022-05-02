#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol916;
using namespace std;

/*takeaways
  - use two pointers approach
*/

string Solution::reverse(string s)
{
  const int n = s.size();
  auto i = 0, j = n - 1;
  while (i < j)
  {
    if (isalpha(s[i]) && isalpha(s[j]))
      swap(s[i++], s[j--]);
    else
    {
      if (!isalpha(s[i]))
        i++;
      if (!isalpha(s[j]))
        j--;
    }
  }

  return s;
}