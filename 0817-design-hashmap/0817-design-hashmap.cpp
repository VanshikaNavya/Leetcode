class MyHashMap {
public:
    vector<int> hshmp;
    MyHashMap() {
        int size=1e6+1;
        hshmp.resize(size);
        fill(hshmp.begin(), hshmp.end(), -1);
        
    }
    
    void put(int key, int value) {
        hshmp[key]=value;
    }
    
    int get(int key) {
        return hshmp[key];
    }
    
    void remove(int key) {
        hshmp[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */