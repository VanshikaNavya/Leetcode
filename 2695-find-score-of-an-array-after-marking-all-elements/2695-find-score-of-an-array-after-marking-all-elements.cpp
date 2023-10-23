class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        vector<bool> vb(n,false);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0; i<n; i++){
            pq.push({nums[i],i});
        }
        long long ans=0;
        while(!pq.empty()){
            int x=pq.top().second;
            if(!vb[x]){
                ans+=nums[x];
                vb[x]=true;
                if(x>0) vb[x-1]=true;
                if(x<n-1) vb[x+1]=true;
            }
            else{
                pq.pop();
            }
        }
        return ans;
    }
};