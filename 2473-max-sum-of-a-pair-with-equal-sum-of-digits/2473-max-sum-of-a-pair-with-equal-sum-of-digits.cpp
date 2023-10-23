class Solution {
public:
    int getSum(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        priority_queue<pair<int,int>> pq;
        int ans=-1;
        for(int i:nums){
            pq.push({getSum(i),i});
        }
        while(pq.size()>0){
            pair<int,int> one=pq.top();
            pq.pop();
            if(pq.size()>0){
                int f=pq.top().first;
                int s=pq.top().second;
                if(one.first==f){
                int ele=one.second+s;
                ans=max(ans,ele);
                pq.pop();
            }
         }
           
        }
        return ans;

    }
};