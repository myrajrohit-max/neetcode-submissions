class Solution {
public:
    bool isAnagram(string s, string t) {
        int m1[26]={0};
        //int m2[26]={0};
        int n=s.length();
        int m=t.length();
        if(n!=m)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            m1[s[i]-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            m1[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(m1[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};
