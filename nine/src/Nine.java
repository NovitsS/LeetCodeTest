/**
 * Created by HUSTy on 2016/11/10.
 */
public class Nine {
    public static void main(String[] args){
        Solution mSolution=new Solution();
        String str=mSolution.intToRoman(888);
        System.out.println(str);
    }
}

class Solution {
    public String intToRoman(int num) {
        if(num<1||num>3999)
            return "-1";
        int[] mNumList={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        String[] mCList={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        String re="";

        for(int i=0;i<mNumList.length;i++){
            while(num>=mNumList[i]){
                re+=mCList[i];
                num-=mNumList[i];
            }
        }
        return re;
    }
}