import java.util.ArrayList;
import java.util.List;

/**
 * Created by HUSTy on 2016/11/22.
 */
public class Twenty {
    public static void main(String[] args) {
        int num[]={4,3,2,1};
        Solution mSolution=new Solution();
        mSolution.nextPermutation(num);
        System.out.println(num[0]+""+num[1]+""+num[2]+""+num[3]);
    }
}

class Solution {
    public void nextPermutation(int[] nums) {
        int n=nums.length;
        if(n==0||n<2) return;
        int i=n-1,first=0;
        while(i>0){
            if(nums[i]>nums[i-1]){
                first=i-1;
                break;
            }
            i--;
        }
        if(i==0) reverse(nums,0,n-1);
        else{
            int j=first+1;
            int nextbig_index=j;
            int nextbig=nums[j];
            j++;
            while(j<n){
                if(nums[j]>nums[first]&&nums[j]<=nextbig){
                    nextbig=nums[j];
                    nextbig_index=j;
                }
                j++;
            }
            swap(nums,first,nextbig_index);
            reverse(nums,first+1,n-1);
        }
    }
    private void reverse(int[] nums,int start,int end){
        while(start<end){
            swap(nums,start,end);
            start++;
            end--;
        }

    }
    private void swap(int[] nums,int left, int right){
        int temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
    }
}