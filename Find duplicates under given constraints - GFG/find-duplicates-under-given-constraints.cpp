//{ Driver Code Starts
 

#include<bits/stdc++.h>
using namespace std;
 
int findDuplicate(int a[]);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A[10];
		for(int i=0;i<10;i++)
		cin>>A[i];
		
		cout<<findDuplicate(A)<<endl;
	}
}
// } Driver Code Ends


    

int findDuplicate(int A[])
{
    for(int i=0; i<10; i++){
        for (int j=i+1; j<10; j++){
            if(A[i]==A[j]){
                return A[i];
            }
        }
    }
    // Your code goes here
}