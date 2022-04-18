// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
int maxSumBS(int arr[] , int n );

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<maxSumBS(a,n)<<endl;
		
	}
}// } Driver Code Ends



int maxSumBS(int arr[] , int n )
{
     int MSIBS[n], MSDBS[n];
     int max_sum=-1;
    for (int i = 0; i < n; i++) {
        MSDBS[i] = arr[i];
        MSIBS[i] = arr[i];
    }
 
    // Compute MSIBS values from left to right */
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && MSIBS[i] < MSIBS[j] + arr[i])
                MSIBS[i] = MSIBS[j] + arr[i];
 
    // Compute MSDBS values from right to left
    for (int i = n - 2; i >= 0; i--)
        for (int j = n - 1; j > i; j--)
            if (arr[i] > arr[j] && MSDBS[i] < MSDBS[j] + arr[i])
                MSDBS[i] = MSDBS[j] + arr[i];
 
    // Find the maximum value of MSIBS[i] + MSDBS[i] - arr[i]
    for (int i = 0; i < n; i++)
        max_sum = max(max_sum, (MSDBS[i] + MSIBS[i] - arr[i]));
 
    // return max sum of bi-tonic sub-sequence
    return max_sum;
}