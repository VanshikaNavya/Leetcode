class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        unordered_set<string> s;
        for(int i=0; i<words.size(); i++){
            string evens="";
            string odds="";
            for(int j=0; j<words[i].length(); j++){
                if(j%2==0) evens+=words[i][j];
                else odds+=words[i][j];
            }
            sort(evens.begin(), evens.end());
            sort(odds.begin(), odds.end());
            string all=evens+odds;
            s.insert(all);
        }
        return s.size();
    }
};