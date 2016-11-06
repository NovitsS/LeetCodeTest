#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *cha="c";
    printf("%d",lengthOfLongestSubstring(cha));
    return 0;
}
int lengthOfLongestSubstring(char* s) {
    char str[100],node;
    str[0]='\0';
    int re=0,length=0;
    int i=0,a=0,p;
    while(s[i]!='\0'){
        node=s[i];
        int q=0;
        for(q;q<length;){
            if(node==str[q]){
                p=1;
                break;
            }
            q++;
        }
        if(q==length)
            p=0;
        if(p)
            {
                if(length>re)
                    re=length;
                length=0;
                str[length]=node;
                length++;
                str[length]='\0';
            }else{
                str[length]=node;
                length++;
                str[length]='\0';
            }
        i++;
    }
    if(length>re)
        re=length;
    return re;

}

