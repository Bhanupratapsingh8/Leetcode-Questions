class Solution {
    public int calculate(String s) {
        int result = 0;
        int currentNum = 0;
        int lastNum = 0;
        char lastOp = '+';
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isDigit(c)) {
                currentNum = currentNum * 10 + (c - '0');
            }
            if (!Character.isDigit(c) && c != ' ' || i == s.length() - 1) {
                if (lastOp == '+') {
                    result += lastNum;
                    lastNum = currentNum;
                } else if (lastOp == '-') {
                    result += lastNum;
                    lastNum = -currentNum;
                } else if (lastOp == '*') {
                    lastNum *= currentNum;
                } else if (lastOp == '/') {
                    lastNum /= currentNum;
                }   
                lastOp = c; 
                currentNum = 0; 
            }
        }
        result += lastNum;  
        return result;
    }
}
