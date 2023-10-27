class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> mp;
        int row=grid.size();
        int col=grid[0].size();
        int ans=0;
        for(int i=0; i<row; i++){
            mp[grid[i]]++;
        }
        for(int i=0; i<col; i++){
           vector<int> v;
           for(int j=0; j<row; j++){
               v.push_back(grid[j][i]);
           }
           ans+=mp[v];
        }
        return ans;
    }
};