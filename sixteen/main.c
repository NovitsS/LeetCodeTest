#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[]={1,3,5,7,8};
    printf("%d",searchInsert(num,5,0));
    return 0;
}

int searchInsert(int* nums, int numsSize, int target) {
    int index;
    for(index=0;index<numsSize;index++){
        if(nums[index]>=target)
            break;
    }
    return index;
}
