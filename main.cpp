#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s;
  if ("fdsajkl;" == s || "jkl;fdsa" == s) {
    cout << "in-out";
  } else if ("asdf;lkj" == s || ";lkjasdf" == s) {
    cout << "out-in";
  } else if ("asdfjkl;" == s) {
    cout << "stairs";
  } else if (";lkjfdsa" == s) {
    cout << "reverse";
  } else {
    cout << "molu";
  }

  return 0;
}