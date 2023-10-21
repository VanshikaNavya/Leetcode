class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int i:piles){
            pq.push(i);
        }
        while(k>0){
            int element=pq.top()-(pq.top()/2);
            pq.pop();
            pq.push(element);
            k--;
        }
        int x=0;
        while(!pq.empty()){
            x+=pq.top();
            pq.pop();
        }
        return x;
    }
};