class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        return 0;
       unordered_set<int> s;
       int count=1;
       int con=1;
       for(auto d:nums)
       {
            s.insert(d);
       }
       for(auto num:s)
       {
            if(s.find(num-1)==s.end())
            {
                int j=num;
                while(s.find(j+1)!=s.end())
                {
                    count++;
                    j++;
                }
            }
            con=max(count,con);
            count=1;
       }
       return con;
    }
};