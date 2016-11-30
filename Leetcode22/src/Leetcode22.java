import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * Created by HUSTy on 2016/11/30.
 */
public class Leetcode22 {
    public static void main(String[] args){
        int [] num={1,2,3};
        List <List<Integer>> lists=new Solution().permute(num);
    }
}
class Solution {
    public List<List<Integer>> permute(int[] nums) {
        int len = nums.length;
        List<List<Integer>> perms = new ArrayList<>();
        if (len==1){
            ArrayList<Integer> last = new ArrayList<Integer>();
            last.add(nums[0]);
            perms.add(last);
            return perms;
        }
        int digit = nums[0];
        List<List<Integer>> remaining = permute(Arrays.copyOfRange(nums,1,len));

        for(List<Integer> ls : remaining){
            for(int i=0;i<len;i++){
                ls.add(i,digit);
                perms.add(new ArrayList<Integer>(ls));
                ls.remove(i);
            }
        }
        return perms;
    }
}
