class Solution {
public:
    char repeatedCharacter(string s) {
       vector<int> a(26);
        for(char c:s){
            a[c-'a']++;
            if(a[c-'a']>1) return c;
        }
        return 'a';
    }
};