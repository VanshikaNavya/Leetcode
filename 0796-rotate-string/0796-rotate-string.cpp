class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        if(n!=m) return false;
        int i=1;
        while(i<n){
            reverse(s.begin(), s.end());
            reverse(s.begin(),s.begin()+1);
            reverse(s.begin()+1,s.end());
            if(s==goal){
                return true;
            }
            i++;
        }
        return false;
    }
};