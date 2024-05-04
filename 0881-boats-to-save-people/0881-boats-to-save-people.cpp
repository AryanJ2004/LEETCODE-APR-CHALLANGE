class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int cnt=0;
        int j=people.size()-1;
        while(i<=j)
        {
            if(people[i]+people[j]<=limit){
            cnt++;
            i++;
            j--;
            }
            else{
                cnt++;
                j--;
            }


            }
            return cnt;
        }
};