class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans = 0;
        set<int> st;
        int i = 0, j = 0;
        int n = s.length();
        while (j < n)
        {
            if (st.count(s[j]) == 0)
            {
                st.insert(s[j]);
                ans = max(ans, (int)st.size());
                j++;
            }
            else
            {
                st.erase(s[i]);
                i++;
            }
        }

        return ans;
    }
};