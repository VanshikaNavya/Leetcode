class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> mp1, mp2;
        int count=0;
        vector<int> ans;
        for(int i=0; i<A.size(); i++){
            mp1[A[i]]++;
            mp2[B[i]]++;
            if(mp1.find(B[i])!=mp1.end()) count++;
            if(mp2.find(A[i])!=mp2.end() && A[i]!=B[i]) count++;
            ans.push_back(count);
        }
        return ans;
    }
};