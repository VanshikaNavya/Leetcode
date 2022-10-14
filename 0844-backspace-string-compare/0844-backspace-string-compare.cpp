class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char> s1,t1;
       for(int i=0; i<s.length(); i++){
           char ch=s[i];
           if(ch!='#'){
               s1.push(ch);
           }
           else if(!s1.empty()){
               s1.pop();
           }
       }
       for(int i=0; i<t.length(); i++){
           char ch=t[i];
           if(ch!='#'){
               t1.push(ch);
           }
           else if(!t1.empty()){
               t1.pop();
           }
       }
       if(s1.size()!=t1.size()) return false;
       if(s1.empty() && t1.empty()) return true;
       while(!s1.empty() && !t1.empty()){
           if(s1.top()!=t1.top()) return false;
           else{
              s1.pop();
              t1.pop();  
           }
       }
      return true;
    }
};