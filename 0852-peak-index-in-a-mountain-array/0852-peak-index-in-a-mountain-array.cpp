class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0;
        int right=arr.size()-1;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            int k=arr[mid];
            int j=arr[mid+1];
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