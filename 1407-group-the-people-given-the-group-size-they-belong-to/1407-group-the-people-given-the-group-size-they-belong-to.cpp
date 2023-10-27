class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> mp;
        vector<vector<int>> ans;
        for(int i=0; i<groupSizes.size(); i++){
            mp[groupSizes[i]].push_back(i);
        }
        for(auto i:mp){
            int noOfTimes=i.second.size()/i.first;
            int cnt=0;
            while(noOfTimes>0){
            vector<int> vp;
            int tillWhen=cnt+i.first;
            vector<int> trav=i.second;
            for(int it=cnt; it<tillWhen; it++){
                vp.push_back(trav[it]);
                cnt++;
            }
            noOfTimes--;
            ans.push_back(vp);
        }
        }
        return ans;
    }
};