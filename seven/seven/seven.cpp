// seven.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <stdio.h>
#include <malloc.h>
char* convert(char* s, int numRows);
int getStringLength(char* s);

int main()
{	
	char *str, string[100] = "AB";
	printf("%s\n", string);
	str = convert(string, 1);
	printf("%s", str);
	getchar();
    return 0;
}

char* convert(char* s, int numRows) {
	if (numRows == 1)
		return s;
	int length=0 , sign = 0;
	while(s[length] !='\0')
		length++;
	//printf("%d", length);
	int* num;
	char* mString;
	num = (int *) malloc (length * sizeof(length));
	mString = (char *)malloc(length * sizeof(char));
	int i,b=0,k=0;
	for (i = 0; i < length; i++) {
		if (sign == 0) {
			b = b + 1;
			num[i] = b;
			if (b == numRows)
				sign = 1;
		}
		else {
			b = b - 1;
			num[i] = b;
			if (b == 1)
				sign = 0;
		}
	}
	for (i = 0; i < length; i++) {
		for (b = 0; b < length; b++) {
			if (num[b] == i + 1) {
				mString[k] = s[b];
				k++;
			}
		}
	}
	mString[length] = '\0';
	return mString;

}

int getStringLength(char* s) {
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	return i;
}