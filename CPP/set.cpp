//#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <int> s;
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(8);
    s.insert(1);
    auto it = s.begin();
    cout << *s.lower_bound(4);
    cout << *s.upper_bound(4);

}