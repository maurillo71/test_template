#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) 
{
  vector<int> v;
  
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  
  /* Create a new vector reversed */
  vector<int> v2(v.rbegin(), v.rend()); 

  /* Reverse the original vector */
  reverse(v.begin(), v.end());
  cout << "Vector 1:" << endl;
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
 
  cout << "Vector 2: " << endl;
  for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
  
  if (find(v.begin(), v.end(), 4) != v.end())
  {
    cout << "4 Found!" << endl;
  }
  
  if (find(v.begin(), v.end(), 6) != v.end())
  {
    cout << "6 Found!" << endl;
  }

  return 0;
}
