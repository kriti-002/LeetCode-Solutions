//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
      
        Rearrange( arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends




void Rearrange(int arr[], int n)
{
    // Your code goes here
    int temp[n];
    int neg = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            neg++;
    }
    int l = 0, r = neg;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[l] = arr[i];
            l++;
        } else {
            temp[r] = arr[i];
            r++;
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}