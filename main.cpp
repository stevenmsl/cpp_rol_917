#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol916;

/*
Input: "ab-cd"
Output: "dc-ba"
*/
tuple<string, string>
testFixture1()
{
  return make_tuple("ab-cd", "dc-ba");
}

/*
Input: "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
*/
tuple<string, string>
testFixture2()
{
  return make_tuple("a-bC-dEf-ghIj", "j-Ih-gfE-dCba");
}
/*
Input: "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
*/
tuple<string, string>
testFixture3()
{
  return make_tuple("Test1ng-Leet=code-Q!", "Qedo1ct-eeLg=ntse-T!");
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.reverse(get<0>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.reverse(get<0>(f)) << endl;
}

void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.reverse(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}