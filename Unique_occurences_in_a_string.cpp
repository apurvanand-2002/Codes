class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> counter;
        for (int i = 0; i < arr.size(); i++)
        {
            counter[arr[i]]++;
        }
        set<int> st;
        for (auto it : counter)
        {
            if (st.count(it.second) > 0)
            {
                return false;
            }
            else
            {
                st.insert(it.second);
            }
        }
        return true;
    }
};
// count function inside set returns value equal to 1 if value to be inserted already
//  exists inside the set else it return value 0.