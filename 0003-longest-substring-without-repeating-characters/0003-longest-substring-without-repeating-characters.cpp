class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> e;
        int count=0;
        int lon=0;
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            auto map = e.find(s[i]);
            while(map!=e.end() && j<(map->second)+1)
            {
                j++;
                count--;
            }
            e[s[i]]=i;
            count++;
            lon=max(lon,count);
        }
        return lon;
    }
};