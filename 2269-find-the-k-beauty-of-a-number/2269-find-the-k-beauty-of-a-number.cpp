class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int count=0;
        for(int i=0;i<=s.size()-k;i++)
        {
            string j=s.substr(i,k);
            int n=stoi(j);
            if(n!=0 && num%n==0)
            count++;
        }
        return count;
    }
};