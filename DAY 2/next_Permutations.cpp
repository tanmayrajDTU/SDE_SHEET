#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    vector<int> nums = permutation;
    int i = nums.size() - 2, j = i + 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) i--;
        if (i == -1) {
            reverse(begin(nums), end(nums));
            return nums;
        }
        while (nums[--j] <= nums[i]);
        swap(nums[i], nums[j]);
        sort(begin(nums) + i + 1, end(nums));
    return nums;
}
