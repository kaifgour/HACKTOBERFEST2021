// A Derangement is a permutation of n elements, such that no element appears in its original position. 
// For example, a derangement of {0, 1, 2, 3} is {2, 3, 1, 0}.
// Recursive C++ program
// to count derangements
#include <bits/stdc++.h>
using namespace std;
 
int countDer(int n)
{
  // Base cases
  if (n == 1) return 0;
  if (n == 2) return 1;
 
  // countDer(n) = (n-1)[countDer(n-1) + der(n-2)]
  return (n - 1) * (countDer(n - 1) + countDer(n - 2));
}
 
// Driver Code
int main()
{
    int n = 4;
    cout << "Count of Derangements is "
         << countDer(n);
    return 0;
}
