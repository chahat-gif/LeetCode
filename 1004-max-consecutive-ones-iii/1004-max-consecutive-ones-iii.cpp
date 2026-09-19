class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int sum=0;
        int maxwin=0;
        int i=0,j=0;
        int replace=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            replace=(j-i+1)-sum;
            while(replace>k)
            {
                sum-=nums[i++];
                replace=(j-i+1)-sum;
            }
            maxwin=max(maxwin,(j-i+1));
            j++;
        }
        return maxwin;
    }
};