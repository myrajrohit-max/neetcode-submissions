class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        int mp[26]={0};
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]-'a']++;
        }
        for(int j=0;j<t.length();j++)
        {
            if(mp[t[j]-'a']>0)
            {
                mp[t[j]-'a']--;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(mp[i]>0)
            {
                return false;
            }
        }
        return true;
    }
};
