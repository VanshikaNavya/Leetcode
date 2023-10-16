class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        ans.push_back({1});
        ans.push_back({1,1});
        ans.push_back({1,2,1});
        if(rowIndex==0) return{1};
        if(rowIndex==1) return{1,1};
        if(rowIndex==2) return{1,2,1};
        for(int i=3; i<rowIndex+1; i++){
            vector<int> now;
            now.push_back(1);
            for(int j=1; j<i; j++){
                now.push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
            now.push_back(1);
            ans.push_back(now);
        }
        return ans[ans.size()-1];
    }
};