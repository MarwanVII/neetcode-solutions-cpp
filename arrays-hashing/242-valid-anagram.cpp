// Simple code
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int sLen = s.length(), tLen = t.length();
        if (sLen != tLen)
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }
};
// This code is more efficient
/*
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int freq[26] = {0};
        if (s.length() != t.length())
            return false;
        for(char i:s)
        {
            freq[i-'a']++;
        }
        for(char i:t)
        {
            freq[i-'a']--;
        }
        for(auto i:freq)
        {
            if(i!=0)
                return 0;
        }
        return 1;
    }
};
*/
