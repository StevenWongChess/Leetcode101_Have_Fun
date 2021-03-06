class Solution
{
public:
    bool canPermutePalindrome(string s)
    {
        vector<int> dict(26, 0);
        for (auto i : s)
        {
            ++dict[i - 'a'];
        }
        int count = 0;
        for (auto i : dict)
        {
            if (i % 2 == 1)
                ++count;
        }
        return count < 2;
    }
};