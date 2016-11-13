/**
 * Created by HUSTy on 2016/11/13.
 */
public class Twelve {
    public static void main(String[] args){
        int[] num={1,2,33,34,35,2,1};
        Solution solution=new Solution();
        int[] n=solution.searchRange(num,2);
        System.out.println(n[0]+","+n[1]);
    }
}

class Solution {
    public int[] searchRange(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                if(nums[left] == target && nums[right] == target)
                    return new int[]{left, right};
                else if(nums[left] != target)
                    left++;
                else
                    right--;
            }else if(nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return new int[]{-1, -1};
    }
}