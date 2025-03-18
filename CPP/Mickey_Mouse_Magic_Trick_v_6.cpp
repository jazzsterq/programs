#include <bits/stdc++.h>
using namespace std;
const int N = 725;
const int K = 6;

int main() {
    int m, d;
    std::cin >> m >> d;

     for (int i = 0; i < m; i++) {
        vector<int> cards(K);
        for (int j = 0; j < K; j++) {
            cin >> cards[j];
        }
        int totalSum = accumulate(cards.begin(), cards.end(), 0);
        int hiddenIndex = totalSum % K; 
        int hiddenCard = cards[hiddenIndex];
        cards.erase(cards.begin() + hiddenIndex);
        sort(cards.begin(), cards.end());
        int count=0;
        for(int i=1;i<=725;i++)
        {
            for(int j=0;j<cards.size();j++){
                if(cards[j]==i)goto nq;
            }
            if(i==hiddenCard)break;
            count++;
            nq:
            int temp;
        }
        int toencode=(count)/6;
        count=0;
        do{
            if(count==toencode)break;
            count++;
        }
        while(next_permutation(cards.begin(),cards.end()));
        for (int card : cards) {
            cout << card << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < d; i++) {

        std::vector<int> cards(K - 1);
        int sum=0;
        for (int j = 0; j < K - 1; j++) {
            std::cin >> cards[j];
            sum+=cards[j];
        }
        vector<int> newcards=cards;
        sort(newcards.begin(),newcards.end());
        int n=0;
        do{
            if(newcards==cards){
                break;
            }n++;
        }while(next_permutation(newcards.begin(),newcards.end()));
        n*=6;
        n++;
        int count=1;
        for(int i=1;i<=725;i++)
        {
            for(int j=0;j<cards.size();j++){
                if(cards[j]==i)goto np;
            }
            if(count==n){count=i;break;}
            count++;
            np:
            int temp;
        }
        sort(newcards.begin(),newcards.end());
        for(int i=0;i<=5;){
            int pos=0;
            for(int j=0;j<cards.size();j++){
                if(cards[j]==count)goto nqq;
            }
            for(int j=0;j<5;j++)
            {
                if(newcards[j]>count)break;pos++;
            }
            if((sum+count)%6==pos){
                cout<<count<<endl;break;
            }
            
            i++;

            nqq:
            count++;
        }
    }
    return 0;
}
