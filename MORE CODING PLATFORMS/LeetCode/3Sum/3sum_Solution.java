import java.util.*;
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {

        Arrays.sort(nums);
        
        Set<List<Integer>> s = new HashSet<>();
        for(int i = 0; i<nums.length-2; ++i){
            if(nums[i]>0){
                break;
            }
            if(i==0|| nums[i-1]!=nums[i]){
                int sum = -nums[i];
                int j = i+1;
                int k = nums.length-1;
                while(j<k){
                    int temp = nums[j]+nums[k];
                    if(sum==temp ){
                        s.add(Arrays.asList(nums[i], nums[j], nums[k]));
                              j++;
                              k--;
                    }else if(sum>temp){
                        j++;
                    }else{
                        k--;
                    }
                 }
                 
             }
        }
        List<List<Integer>> ans = new ArrayList<>(s);
        return ans;
        
    }
}