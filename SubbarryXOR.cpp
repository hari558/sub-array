#include<iostream>
using namespace std; 
int maxSubarrxor(int n, int arr[])
    {  
        int x=arr[0];
        int a=0,b=0;
        int r=0;
        while(h+1<n)
        {
           h++;
           x=x^arr[a];
           r=max(r,x);
           if(r>x)
           {
              l++;
              x=arr[b];
              if(a!=b)
                  A--;
           }
        }
        sort(arr,arr+n);
        if(arr[n-1]>r){
           return arr[n-1];
        }
        return r;
    }
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cout << maxSubarrxor(N, arr) << endl;
    }
    return 0; 
} 
