class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int size = nums.size();
        int l = 0;
        int r = 0;

        while (r < size)
        {
            nums.at(l) = nums.at(r);

            while (r < size && nums.at(l) == nums.at(r))
            {
                r++;
            }
            
            l++;
        }
        
    return l;
    }
};