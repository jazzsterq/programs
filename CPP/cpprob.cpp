#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size,int arr2[]) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            else if(arr[j]==arr[minIndex]&&arr2[j] < arr2[minIndex])
            minIndex = j;
        }
        int temp =arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
        temp =arr2[i];
        arr2[i]=arr[minIndex];
        arr2[minIndex]=temp;
        //std::swap(arr2[i], arr2[minIndex]);
    }
}

void selectionSort2(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int t;
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        int n,m,h;
        cin>>n>>m>>h;
        int p[n];
        int pp[n];
        int t[m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>t[j];
            
            selectionSort2(t,m);
            int sum=0,j=0;
            for(j=0;j<m;j++)
            {
                sum+=t[j];
                if(sum>h)
                {
                    break;
                }
            }
            p[i]=j;
            pp[i]=0;
            
            for(int k=0;k<j;k++)
            {
                pp[i]+=(t[k]*(j-k));
            }
        }
        int rud=p[0];
        int rudpp=pp[0];


        selectionSort(p,n,pp);

        for(int e=0;e<n;e++)
        {
            if(p[e]==rud)
            {
                for(int f=e;f<n;f++)
                {
                    if(pp[f]==rudpp)
                    {
                        cout<<(f+1)<<"\n";
                        break;
                    }
                }
                break;
            }
        }
    }
}
