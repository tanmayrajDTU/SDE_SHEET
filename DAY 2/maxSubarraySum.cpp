#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long cur_ans = 0, max_ans = 0;
    for(int i=0;i<n;i++){
        cur_ans += arr[i];
        max_ans = max(max_ans,cur_ans);
        if(cur_ans<0)cur_ans = 0;
    }
    return max_ans;
}