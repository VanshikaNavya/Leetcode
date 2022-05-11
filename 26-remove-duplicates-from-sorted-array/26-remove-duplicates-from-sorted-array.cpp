class Solution {
public:
    int i=0;
    int j=1;
    
    int removeDuplicates(vector<int>& nums) {
        
       vector<int>::iterator it;
       it = unique(nums.begin(), nums.end());
       nums.resize(distance(nums.begin(), it));
        
        return nums.size();
        
        
      
    }
};