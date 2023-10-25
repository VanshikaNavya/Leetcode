class NumberContainers {
public:
    unordered_map<int,priority_queue<int, vector<int>, greater<int>>> mp;
    unordered_map<int,int> mpp;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        mp[number].push(index);
        mpp[index]=number;
    }
    
    int find(int number) {
        while(!mp[number].empty()){
            if(mpp[mp[number].top()]==number) return mp[number].top();
            else mp[number].pop();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */