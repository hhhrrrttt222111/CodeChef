class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;

        for (int num : nums) {
          if(even(num)) {
              count++;
          } 
        }
        return count;
    }
    
   public boolean even(int num) {
        int numberofDigits = digits2(num);
        if (numberofDigits % 2 == 0) {
            return true;
        }
        return false;
    }

    public int digits2(int num) {  //faster method to separate digits
        if(num < 0) {
            num = num * -1;
        }
        return (int)(Math.log10(num)) + 1;
    }
}
