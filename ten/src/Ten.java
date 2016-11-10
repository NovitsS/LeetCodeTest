/**
 * Created by HUSTy on 2016/11/10.
 */
public class Ten {
    public static void main(String[] args) {
        String s="IV";
        Solution mSolution=new Solution();
        System.out.println(mSolution.romanToInt(s));
    }
}

class Solution {
    public int romanToInt(String s) {
        int graph[]=new int[400];
        graph['I']=1;
        graph['V']=5;
        graph['X']=10;
        graph['L']=50;
        graph['C']=100;
        graph['D']=500;
        graph['M']=1000;

        char[] num=s.toCharArray();
        int sum=graph[num[0]];
        for(int i=0;i<num.length-1;i++){
            if(graph[num[i]]>=graph[num[i+1]])
                sum=sum+graph[num[i+1]];
            else sum+=graph[num[i+1]]-2*graph[num[i]];
        }
        return sum;
    }
}
