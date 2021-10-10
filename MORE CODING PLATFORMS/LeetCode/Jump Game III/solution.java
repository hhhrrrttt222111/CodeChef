class Solution {
    public boolean canReach(int[] arr, int start) {

        boolean[] tracker = new boolean[arr.length];
        return canReach(arr, start, tracker);
    }
    
    private boolean canReach(int[] arr, int start, boolean[] tracker) {
        if(arr[start] == 0) {
            return true;
        }
        if(!tracker[start]) {
            tracker[start] = true;
            if(start - arr[start] >= 0 && canReach(arr, start - arr[start], tracker)) {
                return true;
            }
            if(start + arr[start] <= arr.length - 1 && canReach(arr, start + arr[start], tracker)) {
                return true;
            }
        }
        return false;
    }
}