class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> siso;
        unordered_map<char,char> tiso;
        for(int i=0;i<s.size();i++)
        {
            auto si=siso.find(s[i]);
            auto ti=tiso.find(t[i]);
            if(si!=siso.end() && si->second!=t[i])
            return false;
            if(ti !=tiso.end() && ti->second!=s[i])
            return false;
            siso[s[i]]=t[i];
            tiso[t[i]]=s[i];
        }
        return true;
    }
};