class Solution
{
public:
    vector<vector<int> > threeSum(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int> > ans;

        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int l = i + 1;
            int r = n - 1;
            while (l < r)
            {
                if (l > i + 1 && nums[l] == nums[l - 1])
                {
                    ++l;
                    continue;
                }

                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0)
                {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    ++l;
                    --r;
                }
                else if (sum < 0)
                    ++l;
                else
                    --r;
            }
        }

        return ans;
    }
};