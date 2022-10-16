class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        set<int> ans;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            ans.insert(it.second);
        }
        return mp.size()==ans.size();
    }
};