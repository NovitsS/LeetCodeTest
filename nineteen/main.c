#include <stdio.h>
#include <stdlib.h>
int maxArea(int* height, int heightSize) ;
int main()
{
    int height[]={1,2,4};
    printf("%d",maxArea(height,3));
    return 0;
}
int maxArea(int* height, int heightSize) {
    int water = 0, *i = height, *j = i + heightSize - 1;
    while (i < j) {
        int h = *i < *j ? *i : *j;
        int w = (j - i) * h;
        if (w > water) water = w;
        while (*i <= h && i < j) i++;
        while (*j <= h && i < j) j--;
    }
    return water;
}
