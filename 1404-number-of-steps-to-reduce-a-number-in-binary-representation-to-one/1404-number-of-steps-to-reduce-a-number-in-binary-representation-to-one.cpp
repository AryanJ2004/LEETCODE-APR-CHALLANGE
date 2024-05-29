class Solution {
public:
    int numSteps(std::string s) {
        int cnt = 0;
        while (s != "1") {
            if (s.back() == '0') {
                // If the last character is '0', divide by 2 (remove the last character)
                s.pop_back();
            } else {
                // If the last character is '1', add 1 to the number
                int i = s.length() - 1;
                while (i >= 0 && s[i] == '1') {
                    s[i] = '0';
                    i--;
                }
                if (i >= 0) {
                    s[i] = '1';
                } else {
                    s = '1' + s;
                }
            }
            cnt++;
        }
        return cnt;
    }
};