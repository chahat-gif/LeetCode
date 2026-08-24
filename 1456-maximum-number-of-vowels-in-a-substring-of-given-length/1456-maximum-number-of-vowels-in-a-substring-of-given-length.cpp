class Solution {
    bool isVowel(char c)
{
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
public:
    int maxVowels(string s, int k) {
        int counti=0;
        for(int i=0;i<k;i++)
        {
            if(isVowel(s[i]))
            counti++;
        }
        int maxi=0;
        for(int i=k;i<s.size();i++)
        {
            maxi=max(maxi,counti);
            if(isVowel(s[i-k]))
            counti--;
            if(isVowel(s[i]))
            counti++;
        }
        maxi=max(maxi,counti);
        return maxi;
    }
};