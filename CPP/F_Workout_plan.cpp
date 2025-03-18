#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
const long long MOD = 1e9 + 7;

long long binaryExponentiation(long long base, long long exp) {
    long long result = 1;
    base = base % MOD;
    while (exp > 0) {
        if (exp % 2 == 1) {  
            result = (result * base) % MOD;
        }
        exp = exp >> 1; 
        base = (base * base) % MOD;  
    }
    return result;
}

long long countSequences(int N, const std::vector<int>& Arr, const std::string& P) {
    std::unordered_map<char, long long> freq;
    std::string vowels = "aeiou";
    for (int i = 0; i < N; ++i) {
        freq[P[i]] += Arr[i];
    }

    long long subseqVowels = 1;
    long long subseqTotal = 1;
    long long c=0;
    for (auto& pair : freq) {
        char ch = pair.first;
        long long count = pair.second;
        long long subseqCount;
        if (vowels.find(ch) != std::string::npos) {
            subseqCount= (binaryExponentiation(2, count) - 1 + MOD) % MOD;
            c++;
        }
        else{
            subseqCount= (binaryExponentiation(2, count) + MOD) % MOD;
        }
 
        subseqTotal = (subseqTotal * subseqCount) % MOD;

        
    }
    if(c!=5)return 0;
    return (subseqTotal + MOD) % MOD ;
}

int main() {
    int N = 7;
    std::vector<int> Arr = {1,1,1,1,1,1,1};
    std::string P = "aeioubc";
    std::cout << "Number of valid sequences: " << countSequences(N, Arr, P) << std::endl;
    return 0;
}