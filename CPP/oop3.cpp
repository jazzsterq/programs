#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int a;
    float f;
    void operator+(Animal &obj1)
    {
        int val1 = this->a ;
        int val2 = obj1.a;
        cout<<val1-val2;
    }
};
int main(){
    Animal obj1,obj2;
    obj1.a=4;
    obj2.a=6;
    obj1 + obj2;
    return 0;
}