class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> p;
        if(nums.size() == 0)
        {
            p.push_back(-1);
            p.push_back(-1);
            return p;
        }
        else
        {
        p.push_back(firstOccurence(nums, target));
        p.push_back(secondOccurence(nums, target));
        return p;
        }
    }
    
    int firstOccurence(vector<int>& nums, int target)
    {
        int ans = -1;
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s)/2;
        while(s <= e)
        {
            if(nums[mid] == target)
            {
                ans = mid;
                e = mid - 1;
            }
            else if(nums[mid] > target)
            {
                e = mid - 1;
            }
            else 
                s = mid + 1;
            mid = s + (e - s)/2;
        }
        return ans;
    }
    
    int secondOccurence(vector<int>& nums, int target)
    {
        int ans = -1;
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s)/2;
        while(s <= e)
        {
            if(nums[mid] == target)
            {
                ans = mid;
                s = mid + 1;
            }
            else if(nums[mid] > target)
            {
                e = mid - 1;
            }
            else 
                s = mid + 1;
            mid = s + (e - s)/2;
        }
        return ans;
    }
};