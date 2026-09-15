class Solution {
public:
    bool isPalindrome(string s) {
        string temp ="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {   
                s[i] = s[i]+('a'-'A');
            }
            if((s[i]>='a' && s[i]<='z') || (s[i]<='9' && s[i]>='0') )
            {
                temp += s[i];
            }
        }
        int j = temp.size()-1;
        for(int i=0;i<temp.size()/2;i++)
        {
            if(temp[i]!=temp[j])
            {
                return false;
            }
            j--;
        }
        return true;
    }
};