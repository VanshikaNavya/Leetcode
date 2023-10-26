class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n=reward1.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        int sum=0;
        for(int i=0; i<n; i++){
            pq.push(reward1[i]-reward2[i]);
            sum+=reward2[i];
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};