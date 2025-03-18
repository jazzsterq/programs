#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

void permute(string str, int left, int right) {
    if (left == right) {
        cout << str << endl;  
    } else {
        for (int i = left; i <= right; i++) {
            swap(str[left], str[i]);                 
            permute(str, left + 1, right);         
            swap(str[left], str[i]);                 
        }
    }
}


int main() {
    string s = "ABC";
    cout << "Recursive permutations of \"" << s << "\":" << endl;
    permute(s, 0, s.length() - 1);



    cout << "\nIterative permutations of \"" << s << "\":" << endl;

    sort(s.begin(), s.end());  
    do {
        cout << s << endl;     
    } while (next_permutation(s.begin(), s.end()));  
    return 0;
}
