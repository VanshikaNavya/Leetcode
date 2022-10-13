class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<n-2; j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int s=j+1;
                int e=n-1;
                long long diff=target-long((nums[i]+nums[j]));
                while(s<e){
                  if(long(nums[s]+nums[e])==diff){
                    ans.push_back({nums[i],nums[j],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1]) s++;
                    while(s<e && nums[e]==nums[e-1]) e--;
                    s++;
                    e--;
                }
                else if(long(nums[s]+nums[e])<diff){
                    s++;
                }
                else{
                    e--;
                }  
            }
                
          }
            
    }
        
    return ans;
   }
};