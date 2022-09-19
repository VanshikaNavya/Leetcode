class Solution {
public:
    string reverseWords(string s) {
       int start=0;
       for(int i=0; i<=s.length(); i++){
           if(s[i]==' ' || i==s.length()){
               int end=i-1;
               while(start<end){
                   swap(s[start],s[end]);
                   start++;
                   end--;
               }
               start=i+1;
           }
       }
        return s;
    }
};