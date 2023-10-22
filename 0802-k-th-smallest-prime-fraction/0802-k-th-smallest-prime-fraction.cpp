class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double,pair<int,int>>> pq;
        for(int i=0; i<arr.size(); i++){
            for(int j=1; j<arr.size(); j++){
                pq.push({(double)arr[i]/arr[j],{arr[i],arr[j]}});
                if(pq.size()>k) pq.pop();
            }
        }
        vector<int> ans;
        pair<double,pair<int,int>> a=pq.top();
        ans.push_back(a.second.first);
        ans.push_back(a.second.second);
        return ans;
    }
};