public class Solution {
    public int StrStr(string haystack, string needle) {
        int hl = haystack.Length;
        int nl = needle.Length;

        for (int i = 0; i < hl; i++) {
            if (hl - i < nl) {
                return -1;
            }
            else if (needle == haystack.Substring(i, nl)) {
                return i;
            }
        }
        return -1;
    }
}
