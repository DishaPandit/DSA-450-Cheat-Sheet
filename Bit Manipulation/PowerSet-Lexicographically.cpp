//https://practice.geeksforgeeks.org/problems/power-set4302/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    
		    int n = s.length();
            int powSize = pow(2,n);
            vector<string> ans;
        
            for(int counter =1; counter<powSize; counter++)
            {
                string temp;
                for(int j =0; j<n; j++)
                {
                    if((counter & (1<<j)) != 0)
                        temp.push_back(s[j]);
                }
                ans.push_back(temp);
            }
        	sort(ans.begin(),ans.end());
        	return ans;
		    
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends