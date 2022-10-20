class Solution {
public:
    int reverse(int x){
        int num=0;
        while(x!=0){
            if(x>INT_MAX/10 || x<INT_MIN/10) return 0;
            num=num*10+x%10;
            x/=10;
        }
       return num;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            int c=reverse(nums[i]);
            nums.push_back(c);
        }
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        return mp.size();
    }
};