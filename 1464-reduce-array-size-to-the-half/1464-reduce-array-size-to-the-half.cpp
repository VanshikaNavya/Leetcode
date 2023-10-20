class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mp;
        int n=arr.size()/2;
        int count=0;
        for(int i:arr){
            mp[i]++;
        }
        priority_queue<pair<int, int>> pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        while(n>0){
            n-=pq.top().first;
            pq.pop();
            count++;
        }
        return count;

    }
};