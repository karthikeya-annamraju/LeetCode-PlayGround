class Solution {
    public String convertToBase7(int num) {
        // Integer.toString function in java converts int to str.
        return Integer.toString(num, 7);
    }
}