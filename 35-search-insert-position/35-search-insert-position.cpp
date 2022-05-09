class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        int x=std::upper_bound(nums.begin(),nums.end(), target)-nums.begin();
        
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                return ans;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            
            
        }
        
       return x;
    }
};