#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    int len = arr.size();
    unordered_map<int,int> mp;
    for(int i=0;i<len;i++){
        mp[arr[i]]++;
    }
    for(auto x : mp){
        if(x.second >= 2){
            return x.first;
        }
    }
}
