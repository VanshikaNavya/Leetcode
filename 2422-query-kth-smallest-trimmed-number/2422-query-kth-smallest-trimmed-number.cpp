class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0; i<queries.size(); i++){
            priority_queue<pair<string, int>> pq;
            int ind=queries[i][0];
            int k=queries[i][1];
            for(int j=0; j<nums.size(); j++){
                string trimmed=nums[j].substr(nums[j].size()-k, k);
                pq.push({trimmed,j});
                if(pq.size()>ind) pq.pop();
            }
            ans.push_back(pq.top().second);
        }
        return ans;
    }
};