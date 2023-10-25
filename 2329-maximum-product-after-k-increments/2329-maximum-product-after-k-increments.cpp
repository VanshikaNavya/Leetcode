class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        long mod=1e9+7;
        priority_queue<int, vector<int>, greater<int>> pq;
        long long int sum=1;
        for(int i:nums){
            pq.push(i);
        }
        while(k>0){
            int tt=pq.top();
            pq.pop();
            tt+=1;
            pq.push(tt);
            k--; 
        }
        while(!pq.empty()){
            sum=(sum*pq.top())%mod;
            pq.pop();
        }
        return sum;

    }
};