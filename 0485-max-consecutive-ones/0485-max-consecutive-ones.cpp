class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxwin=0;
        int i=0,j=0;
        while(j<nums.size())
        {
            while(j<nums.size() && nums[j]==1)
            {
                j++;
            }
            maxwin=max((j-i),maxwin);
            while(j<nums.size() && nums[j]==0)
            {
                j++;
            }
            i=j;
        }
        return maxwin;
    }
};