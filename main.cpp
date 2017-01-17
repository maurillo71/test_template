#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

#define tr(container, it) \
      for(__typeof__(container.begin()) it = container.begin(); it != container.end(); it++) 
// void f(const vector<int>& v) { 
//   for( 
//            vector<int>::const_iterator it = v.begin(); // hm... where’s the error?.. 
//            // ... 
//       // ... 
//  }
//  
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

  cout << "Vector 1 sorted:" << endl;
  sort(v.begin(), v.end());
//   v.insert(v.begin()+3,42);
//   for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  tr(v, it)
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
  
  cout << "Max value = " << *max_element(v.begin(), v.end()) << endl;
  cout << "Min value = " << *min_element(v.begin(), v.end()) << endl;

  if (find(v.begin(), v.end(), 4) != v.end())
  {
    cout << "4 Found!" << endl;
  }
  
  if (find(v.begin(), v.end(), 6) != v.end())
  {
    cout << "6 Found!" << endl;
  }
  
  cout << endl << "Test Permutation" << endl;
  do { 
      tr(v, it)
      {
	cout << *it << " ";
      }
      cout << endl;
 } while(next_permutation(v.begin(), v.end())); 
  
  /**
   * TEST SET
   */
  int data[5] = { 5, 1, 4, 2, 3 }; 
  set<int> S(data, data+5); 
  tr(S, it)
  {
    cout << *it << " ";
  }
  
  int i = 1;
  if (i++ >= 2)
  {
    cout << "i vale gia' 2" << endl;
  }

  /** 
   * TEST MAP
   */
  map<string, int> M; 
  M["Top"] = 1; 
  M["Coder"] = 2; 
  M["SRM"] = 10;
  M["Mauro"] = 11;

  int x = M["Top"] + M["Coder"]; 

  if(M.find("SRM") != M.end()) { 
    M.erase(M.find("SRM")); // or even M.erase("SRM") 
  }
  
  cout << M["Mauro"];
  cout << "Map: " << endl;
  for (map<string, int>::const_iterator it=M.begin(); it != M.end(); it++)
  {
      cout << it->first << "-" << it->second << endl;
  }

  /**
   * Convert map to vector
   */
 
  vector< pair<string, int> > V(M.begin(), M.end()); // remember all(c) stands for (c).begin(),(c).end() 
  cout << "Vector is:" << endl;
  cout << V[0].first << "-" << V[0].second;
  return 0;
}
