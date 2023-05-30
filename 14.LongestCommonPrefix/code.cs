public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        string result = "";
        int r, pr;

        pr = 0;
        for (int l = 1; l <= strs[0].Length; l++) {
            r = 0;
            for (int i = 0; i < strs.GetLength(0); i++) {
                if (strs[i].Length >= l) {
                    if (strs[i].Substring(0, l) == strs[0].Substring(0, l))
                        r++;
                    else {
                        r = 0;
                        break;
                    }
                }
                else
                {
                    r = 0;
                    break;
                }
            }

            if ((r == 0) || (r < pr))
                break;

            result = strs[0].Substring(0, l);
            pr = r;
        }
        return result;
    }
}
