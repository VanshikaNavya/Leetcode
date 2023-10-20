class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        int count=0;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        while(pq.size()>1){
            int first=pq.top();
            pq.pop();
            int second=pq.top();
            pq.pop();
            if(first>=0 && second>=0){
                first--;
                second--;
                count++;
            }
            pq.push(first);
            pq.push(second);
            if(first==0) pq.pop();
            if(second==0) pq.pop();
        }
        return count;
    }
};