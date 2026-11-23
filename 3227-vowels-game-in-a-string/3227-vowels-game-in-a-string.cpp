class Solution {
public:
    bool doesAliceWin(string s) {
        //can win or not 
        for (char c : s) {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                return true;
        }
        return false;
    }
};