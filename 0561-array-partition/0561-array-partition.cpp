class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum=0;
        int mini;
        for(int i=0; i<nums.size(); i+=2){
            mini=min(nums[i], nums[i+1]);
            sum=sum+mini;
        }
        return sum;
    }
};