class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        set<int> st;
        vector<int> repetition;
        for (auto it : nums)
        {
            if (st.count(it) > 0)
            {
                repetition.push_back(it);
            }
            else
            {
                st.insert(it);
            }
        }
        return repetition;
    }
};