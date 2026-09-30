class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int cnt = 0, res = 0;        
        for (int n : nums) {
            cnt = (n == 1) ? ++cnt : 0;
            res = Math.max(res, cnt);
        }
        return res;
    }
}