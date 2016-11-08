// eight.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int strStr(char* haystack, char* needle);

int main()
{	
	char char1[] = "ello", char2[] = "ello";
	printf("%d", strStr(char1, char2));
	getchar();
    return 0;
}

int strStr(char* haystack, char* needle) {
	char mFirstChar = needle[0];
	int mNeedleLength = 0, i = 0, k = 0, mResult = -1;
	while (needle[mNeedleLength] != '\0')
	{
		mNeedleLength++;
	}
	if (mNeedleLength == 0)
		return 0;
	while (haystack[i] != '\0') {
		if (haystack[i] == mFirstChar&&haystack[i+mNeedleLength-1]==needle[mNeedleLength-1]) {
			while (needle[k] != '\0') {
				if (haystack[k + i] != needle[k]) {
					k = 0;
					break;
				}
				k++;
			}
			if (needle[k] == '\0')
			{
				mResult = i;
				break;
			}
		}
		i++;
	}
	return mResult;
}