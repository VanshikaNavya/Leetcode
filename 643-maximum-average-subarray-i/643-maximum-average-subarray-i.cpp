class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double average=0;
        double sum=0;
        double maxi=INT_MIN;
        int n=nums.size();
        while(j<n){
            sum=sum+nums[j];
            if(j-i+1<k){
                j++;
                
            }
            else if(j-i+1==k){
                average=sum/k;
                maxi=max(maxi, average);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        
        return maxi;
    }
};