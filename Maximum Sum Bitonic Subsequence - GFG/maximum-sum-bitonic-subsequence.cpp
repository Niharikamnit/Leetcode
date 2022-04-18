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
   if(n==1){
       return arr[0];
   }
   
   vector<int> ldp(n,0);
   vector<int> rdp(n,0);
   
   for(int i=0;i<n;++i){
       ldp[i]=arr[i];
       int mx=0;
       
       for(int j=i-1;j>=0;--j){
           if(arr[i]>arr[j]){
               mx=max(mx,ldp[j]);
           }
       }
       ldp[i]+=mx;
   }
   
   for(int i=n-1;i>=0;--i){
       rdp[i]=arr[i];
       int mx=0;
       for(int j=i;j<n;++j){
           if(arr[i]>arr[j]){
               mx=max(mx,rdp[j]);
           }
       }
       rdp[i]+=mx;
   }
   
   int ans=INT_MIN;
   for(int i=0;i<n;++i){
       int x=ldp[i]+rdp[i];
       x-=arr[i];
       ans=max(ans,x);
   }
   
   return ans;
}