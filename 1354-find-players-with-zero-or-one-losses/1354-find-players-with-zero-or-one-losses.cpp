class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       unordered_map<int,int> winners;
       unordered_map<int,int> losers;
       for(int i=0; i<matches.size(); i++){
           winners[matches[i][0]]++;
           losers[matches[i][1]]++;
       }
       vector<int> wins;
       vector<int> loses; 
       for(auto i:winners){
           if(!losers.contains(i.first)) wins.push_back(i.first);
       }
       for(auto i:losers){
           if(i.second==1) loses.push_back(i.first);
       }
       sort(loses.begin(), loses.end());
       sort(wins.begin(), wins.end());
       return {wins,loses};
    }
};