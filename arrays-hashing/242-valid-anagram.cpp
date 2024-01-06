//simple code
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
