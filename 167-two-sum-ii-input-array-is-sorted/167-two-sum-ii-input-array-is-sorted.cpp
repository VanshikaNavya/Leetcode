class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int s=0;
        int e=numbers.size()-1;
        int mid=s+(e-s)/2;
        while(s!=e)
        {
            if(numbers[s]+numbers[e]==target)
            {
                return {s+1,e+1};
            }
            else if(numbers[s]+numbers[e]<target)
            {
                s=s+1;
            }
            else
            {
                e=e-1;
            }
        }
        
        return{-1,-1};
        
    }
};