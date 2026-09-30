class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) return false;
        Map<Character, Integer> cnt = new HashMap<>();
        Map<Character, Integer> cnt2 = new HashMap<>();
        for (char c : s.toCharArray()) {
            cnt.put(c, cnt.getOrDefault(c, 0) + 1);
        }
        for (char c : t.toCharArray()) {
            cnt2.put(c, cnt2.getOrDefault(c, 0) + 1);
        }

        return cnt.equals(cnt2);
    }
}
