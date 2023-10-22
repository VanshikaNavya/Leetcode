class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        int check=0;
        for(int i=0; i<trips.size(); i++){
            pq.push({trips[i][1], trips[i][0]});
            pq.push({trips[i][2], -trips[i][0]});
        }
        while(!pq.empty()){
            check+=pq.top().second;
            pq.pop();
            if(check>capacity) return false;
        }
        return true;
    }
};