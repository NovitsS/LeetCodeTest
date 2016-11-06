// six.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int lengthOfLongestSubstring(char* s);
int checkRepeat(char* s, int start, int i);

int main()
{
	char str[] = "abcabcdabc";
	printf("%d", lengthOfLongestSubstring(str));
	getchar();
    return 0;
}

int lengthOfLongestSubstring(char* s) {
	char str[100], node;
	int re=0, length;
	if (s[0]=='\0')
		return 0;
	if (s[1] == '\0')
		return 1;
	int i = 1, start=0,state,num,n;
	while (s[i] != '\0') {
		num = start;
		for (num; num < i; num++) {
			if (s[num] == s[i]) {
				state = num;
				break;
			}

		}
		if (num == i)
			state = -1;
		if (state >= 0) {
			if ((i - start) > re)
				re = i - start;
			start = state+1;
			i = state + 2;
		}
		else i++;

	}
	if ((i - start) > re)
		re = i - start;
	return re;
}
