class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> j;
        int left=0;
        int right=0;
        int maxi=0;
        int n=s.length();
        while(right<n)
        {
            while(j.count(s[right]))
            j.erase(s[left++]);
            j.insert(s[right]);
            maxi=max(maxi,right-left+1);
            right++;
        }
        return maxi;
    }
};