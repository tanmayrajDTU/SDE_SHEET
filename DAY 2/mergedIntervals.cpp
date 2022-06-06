vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>> mergedIntervals;
    if(intervals.size()==0){
        return mergedIntervals;
    }
    sort(intervals.begin(),intervals.end());
    vector<int> tempInterval = intervals[0];
    for(auto it: intervals){
        if(it[0]<=tempInterval[1]){
            tempInterval[1] = max(tempInterval[1],it[1]);
        }
        else{
            mergedIntervals.push_back(tempInterval);
            tempInterval=it;
        }
    }
    mergedIntervals.push_back(tempInterval);
    return mergedIntervals;
}
