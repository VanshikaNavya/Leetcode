class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int count=0;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int candidate=nums[mid];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==candidate){
                count++;
            }
            if(count>n/2) return nums[mid];
        }
        return nums[mid];
    }
};