
#include <iostream>
#include <map>
 using namespace std;
int main()
{
  // Create a map of strings to integers
  std::map<std::string, int> map;
 
  // Insert some values into the map
  map["one"] = 1;
  map["two"] = 2;
  map["three"] = 3;
 
  // Print the size of the map
    cout<<map["two"];
 
  return 0;
}