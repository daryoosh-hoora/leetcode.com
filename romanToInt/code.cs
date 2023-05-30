public class Solution {
    public int RomanToInt(string s) {
        Char preChar = ' ';
        int result = 0;

        foreach(Char c in s) {
            switch (c) {
                case 'I':
                    result += 1;
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'X':
                    result += 10;
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    result += 100;
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'M':
                    result += 1000;
                    break;
            }

            if(((c == 'V') | (c == 'X')) & preChar == 'I')
                result -= 2;
            else if (((c == 'L') | (c == 'C')) & preChar == 'X')
                result -= 20;
            else if (((c == 'D') | (c == 'M')) & preChar == 'C')
                result -= 200;

            preChar = c;
        }

        return result;    
    }
}
