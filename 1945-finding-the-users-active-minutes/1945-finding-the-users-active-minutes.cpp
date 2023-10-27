class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, set<int>> mp;
        for(int i=0; i<logs.size(); i++){
            int id=logs[i][0];
            int time=logs[i][1];
            mp[id].insert(time);
        }
        vector<int> vp(k,0);
        for(auto i:mp){
            vp[i.second.size()-1]++;
        }
        return vp;
    }
};