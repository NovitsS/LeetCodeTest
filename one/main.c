#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums,int numsSize,int target);
int main()
{
    int nums[]={2,7,11,15};
    int *numRe;
    numRe=twoSum(nums,4,9);
    if(numRe!=NULL)
        printf("%d %d",numRe[0],numRe[1]);
    else printf("Œ¥’“µΩ");
    return 0;
}

int* twoSum(int* nums, int numsSize, int target) {
    int i,k,numA,numB,sign=0;
    int *num=(int *)malloc(2*sizeof(int));
    for(i=0;i<numsSize;i++){
        numA=nums[i];
        for(k=i+1;k<numsSize;k++){
            numB=nums[k];
            if((numB+numA)==target){
                sign=1;
                break;
            }
        }
        if(sign==1)
            break;
    }
    if(sign==1){
        num[0]=i;
        num[1]=k;
        return num;
    }else return NULL;
}
