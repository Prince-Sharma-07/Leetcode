//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int max=0;
	    for(int i=0; i<n; i++){
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    int second_largest=-1;
	    for (int j=0; j<n; j++){
	        if(arr[j]>second_largest && arr[j]!=max){
	            second_largest=arr[j];
	        }
	    }
	    return second_largest;
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends