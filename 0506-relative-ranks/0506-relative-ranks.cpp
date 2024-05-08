class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>sc=score;
        vector<string> med={"Gold Medal","Silver Medal","Bronze Medal"};
        unordered_map<int,string> rm;
        sort(sc.begin(),sc.end(),greater<int>());
        for(int i=0;i<sc.size();i++)
        {
            if(i<3)
            rm[sc[i]]=med[i];
            else
            rm[sc[i]]=to_string(i+1);
        }
        vector<string>res;
        for(int s:score)
        res.push_back(rm[s]);
        return res;
    }
};