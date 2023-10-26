class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char,int> mp;
        priority_queue<pair<char,int>> pq;
        for(char it:s) {mp[it]++;};
        for(auto it:mp) {pq.push({it.first,it.second});};
        string ans="";
        while(!pq.empty()){
            char c1=pq.top().first;
            int freq1=pq.top().second;
            pq.pop();
            int repeat=min(freq1,repeatLimit);
            for(int i=0; i<repeat; i++){
                ans+=c1;
            }
            char c2;
            int frq2=0;
            if(freq1-repeat>0){
                if(!pq.empty()){
                    c2=pq.top().first;
                    frq2=pq.top().second;
                    pq.pop();
                }
                else{
                    return ans;
                }
                ans+=c2;
                pq.push({c1,freq1-repeat});
                if(frq2-1>0) pq.push({c2,frq2-1});
            }
        }
        return ans;
    }
};