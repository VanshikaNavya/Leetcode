class Solution {
public:
    int divisorSubstrings(int num, int k) {
       int i=0, j=0;
       int k_beauty=0;
       string sub_string = to_string(num);
       int n=sub_string.length();
       int s=0;
       
       while(j<n){
           s=s*10+(sub_string[j]-'0');
           if(j-i+1<k){
               j++;
           }
           else if(j-i+1==k){
               if(s!=0 && num%s==0){
                   k_beauty++;
               }
                  s=s-(sub_string[i]-'0')*pow(10,k-1);
                  i++;
                  j++;
           }
       }
       return k_beauty;
    }
};
