class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<int,int>>> pq;
        for(int i=0; i<classes.size(); i++){
            int one=classes[i][0];
            int two=classes[i][1];
            double diff=(double)(one+1)/(two+1)-(double)(one)/(two);
            pq.push({diff,{one,two}});
        }
        while(extraStudents--){
            auto i=pq.top();
            pq.pop();
            int one=i.second.first;
            int two=i.second.second;
            one++;
            two++;
            double diff=(double)(one+1)/(two+1)-(double)(one)/(two);
            pq.push({diff,{one,two}});
        }
        double ans=0.0;
        while(!pq.empty()){
            auto i=pq.top();
            pq.pop();
            ans+=((double)(i.second.first)/(i.second.second));
        }
        return ans/classes.size();
    }
};