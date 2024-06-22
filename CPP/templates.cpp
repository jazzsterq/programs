#include <iostream>
#include <string> 

namespace apple{
void print(){}
template <typename arg,typename... T>
void print(arg first,T... num){
    std:: cout<<first<<std:: endl;
    print(num...);
}}

template <typename... T>
void print(T... num){
   (std::cout<<...<<num)<<std::endl;
}

signed main(){
    print(3,"gu",5);
    apple:: print(3,"ad");
}