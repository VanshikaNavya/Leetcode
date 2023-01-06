class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int i=0, count=0;
        if(costs[0]>coins) return 0;
        while(i<costs.size()){
            coins-=costs[i];
            if(coins<=0) break;
            count++;
            i++;
        }
        if(coins==0) return count+1;
        else return count;
    }
};