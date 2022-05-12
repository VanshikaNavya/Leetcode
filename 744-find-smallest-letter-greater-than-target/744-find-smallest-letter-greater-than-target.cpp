class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int s=0;
        int e=letters.size()-1;
        int mid=s+(e-s)/2;
        char ans('#');
        while(s<=e)
        {
            if(letters[mid]>target)
            {
                ans=letters[mid];
                e=mid-1;
            }
            
            else
            {
                s=mid+1;
            }
            
            mid=s+(e-s)/2;
        }
        
        if(ans=='#')
        {
            ans=letters[0];
            
        }
        
        return ans;
    }
};