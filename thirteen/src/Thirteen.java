/**
 * Created by HUSTy on 2016/11/15.
 */
public class Thirteen {

    public static void main(String[] args){
        int n=15242576;
        Solution mSolution=new Solution();
        String str=mSolution.countAndSay(n);
        System.out.println(str);
    }
}


class Solution {
    public String countAndSay(int n) {
        String str="";
        Integer num,i=null,sign=1,ok=0,p=2;
        while(p>0){
            num=n%10;
            if(i!=null) {
                if (num == i&&p>1) {
                    sign++;
                } else {
                    str = str + Integer.toString(i) + Integer.toString(sign);
                    sign = 1;
                }
            }
            i=num;
            if(n>=10)
                n=n/10;
            else p--;
        }
        return reverse1(str);

    }

    public static String reverse1(String s){
        int length=s.length();
        if(length<=1)
            return s;
        String left=s.substring(0,length/2);
        String right=s.substring(length/2,length);
        return reverse1(right)+reverse1(left);
    }
}