class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        vector<int> arr;
        for(auto s:nums1)
        freq[s]++;
        for(auto d:nums2)
        {
            if(freq.find(d)!=freq.end() && freq[d]!=0)
            {
                arr.push_back(d);
                freq[d]--;
            }
        }
        return arr;
    }
};