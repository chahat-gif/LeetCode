class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int a= nums.size();
       vector<int> answer(a,1);
       int prod=1;
       for(int i=1;i<nums.size();i++)
       {
            prod*=nums[i-1];
            answer[i]=prod;
       }
       prod=1;
       for(int i=nums.size()-2;i>=0;i--)
        {
            prod*=nums[i+1];
            answer[i]*=prod;
        }
       return answer;
    }
};