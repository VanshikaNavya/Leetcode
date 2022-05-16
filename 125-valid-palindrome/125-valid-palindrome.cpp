class Solution{
    public:
    bool isValid(char ch)
    {
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
            return 1;
        else
            return 0;
    }
    
    char toLowerCase(char ch)
    {
        if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
            return ch;
        else
            return ch - 'A' + 'a';
    }
    
    bool checkPalindrom(string temp)
    {
        int st = 0;
        int e = temp.size() - 1;
        while(st < e)
        {
            if(temp[st] != temp[e])
                return 0;
            else
            {
                st++;
                e--;
            }
        }
        return 1;
    }
    
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(isValid(s[i]))
                temp.push_back(s[i]);
        }
        for(int j = 0; j < temp.size(); j++)
        {
            temp[j] = toLowerCase(temp[j]);
        }
        return checkPalindrom(temp);
    }
};

