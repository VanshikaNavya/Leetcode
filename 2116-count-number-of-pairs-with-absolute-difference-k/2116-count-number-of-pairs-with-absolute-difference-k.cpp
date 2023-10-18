/*class Solution {
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
};*/

//count sort
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        vector<int> v(101);
        int count=0;
        for(int i=0; i<nums.size(); i++){
            v[nums[i]]++;    
        }
        for(int i=k; i<101; i++){
            count+=v[i]*v[i-k];
        }
        return count;
    }
};

