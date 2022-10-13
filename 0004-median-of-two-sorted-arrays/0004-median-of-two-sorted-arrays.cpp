class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        for(int i=0; i<nums1.size(); i++){
            a.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            a.push_back(nums2[i]);
        }
        sort(a.begin(), a.end());
        int s=0;
        int e=a.size()-1;
        int median=s+(e-s)/2;
        if(a.size()%2==1){
            return a[median];
        }
        else{
            double m = double(a[median]+a[median+1])/2;
            return m;
        }
    }
};