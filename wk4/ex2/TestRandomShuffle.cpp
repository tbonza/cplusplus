#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
 
int
main (int argc, char *argv[])
{
  using namespace std;
  int n = atoi (argv[1]); // argument checking removed for clarity
 
  vector<int> v;
  for (int i = 0; i < n; i++)            // append integers 0 to n-1 to v
    v.push_back (i);
 
  random_shuffle (v.begin(), v.end());                         // shuffle
  copy (v.begin(), v.end(), ostream_iterator<int> (cout, "\n")); // print
}
