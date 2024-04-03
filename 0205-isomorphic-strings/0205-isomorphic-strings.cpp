class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> map1(128, 0);  // Stores frequency of s
        vector<int> map2(128, 0);  // Stores frequency of t

        for(int i=0; i<s.length(); i++) {
            char s_ch = s[i];
            char t_ch = t[i];

            if(map1[s_ch]==0 && map2[t_ch]==0) {
                map1[s_ch] = t_ch;
                map2[t_ch] = s_ch;
            }
            else if(map1[s_ch] != t_ch || map2[t_ch] != s_ch) {
                return false;
            }
        }
        return true;
    }
};