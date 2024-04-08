class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        int n = students.size();
        int ones_count = 0, zero_count = 0;
        for (int p : students) {
            if (p == 1) ones_count++;
            else zero_count++;
        }
        for (int i = 0; i < n; i++) {
            if (sandwiches[i] == 1 && ones_count > 0) ones_count--;
            else if (sandwiches[i] == 0 && zero_count > 0) zero_count--;
            else return n - i;
        }
        return 0;
    }
};