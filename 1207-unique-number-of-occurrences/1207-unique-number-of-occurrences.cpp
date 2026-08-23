class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> occ;
        unordered_set<int> dist;
        for(auto d:arr)
        occ[d]++;
        for(auto &d:occ)
        {
            if(dist.count(d.second))
            return false;
            dist.insert(d.second);
        }
        return true;
    }
};