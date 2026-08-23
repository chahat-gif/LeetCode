class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX;
        int sum=0;
        int left=0,right=0;
        int n=nums.size();
        while(right<n)
        {
            sum+=nums[right];
            while(sum>=target)
            {
            mini=min(mini,right-left+1);
            sum-=nums[left++];
            }
            right++;
        }
        if(mini==INT_MAX)
        return 0;
        return mini;
    }
};