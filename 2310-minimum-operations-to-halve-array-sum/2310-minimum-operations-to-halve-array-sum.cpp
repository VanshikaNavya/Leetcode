class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=accumulate(nums.begin(), nums.end(), 0.0);
        priority_queue<double> pq(nums.begin(), nums.end());
        double twiceSum=sum/2;
        int count=0;
        while(sum>twiceSum){
            double ele=pq.top();
            pq.pop();
            ele=ele/2;
            sum-=ele;
            pq.push(ele);
            count++;
        }
        return count;
    }
};