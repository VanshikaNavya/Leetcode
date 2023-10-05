class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n=nums.size();
        vector<int> anss;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.second>n/3) anss.push_back(it.first);
        }
        return anss;
    }
};