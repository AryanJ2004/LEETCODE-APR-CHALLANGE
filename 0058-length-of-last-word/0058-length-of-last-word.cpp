class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int cnt=0;
        bool counting=false;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
            cnt++;
            counting=true;
            }
            else if(counting)
            break;
            
        }
        return cnt;
    }
};