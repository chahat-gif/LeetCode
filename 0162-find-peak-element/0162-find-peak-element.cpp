class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            int k=nums[mid];
            int j=nums[mid+1];
            if(k>j)
            {
                right=mid;
            }
            else if(k<j)
            left=mid+1;
        }
        return right;
    }
};