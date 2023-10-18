class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count=0;
        for(int i: nums){
            count+=mp[i-k]+mp[i+k];
            mp[i]++;
        }
        return count;
    }
};