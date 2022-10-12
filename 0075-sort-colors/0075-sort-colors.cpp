class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*int low=0, mid=0, high=nums.size()-1;
        while(mid<=high){
            if(nums[low]==0){
                swap(nums[low++], nums[mid++]);
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high--]);
            }
        }*/
int s = 0, m = 0, e = nums.size()-1;
  while(m<=e)
  {
    if(nums[m] == 0) swap(nums[s++],nums[m++]);
    else if (nums[m] == 1) m++;
    else swap(nums[m],nums[e--]);
  }
    }
};