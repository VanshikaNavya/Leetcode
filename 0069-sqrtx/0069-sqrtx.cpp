class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        long long int mid=s+(e-s)/2;
        long long ans;
        long long square;
        while(s<=e){
            square=mid*mid;
            if(square==x) return mid;
            else if(square<x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};