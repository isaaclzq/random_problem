/*
 * This program will verify if a number is a plalindrom number. For example, 
 * 123321 is a plalindrome number. In this case, I will regard single integer 
 * such as 1, 2, 3... as plalindrom number. 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int plalindrome_test(char* num, int size){
	if (size == 1){
		return 1;
	} else if (size == 0){
		return 1;
	} else if (*num == *(num+size-1)){
		return plalindrome_test(num+1, size-2);
	} else {
		return 0;
	}
	return 0;
}

int p_test2(int num){
	int rev = 0;
	int base = 10;
	int last = num % 10;
	int rest = num / 10;
	while (rest != 0){
		rev = rev * base + last;
		last = rest % 10;
		rest /= 10;
	}
	rev = rev * base + last;
	return (num == rev)? 1:0;	
}
	
int main(void){
	char* test1 = "abccba";
	char* test2 = "121212";
	char* test3 = "123421";
	int test4 = 123321;
	int test5 = 121212;
	int test6 = 213312;
	printf("first test\n");
	printf("test1 is %s\n", plalindrome_test(test1, 6)? "true":"false");
	printf("test2 is %s\n", plalindrome_test(test2, 6)? "true":"false");
	printf("test3 is %s\n", plalindrome_test(test3, 6)? "true":"false");

	printf("\n");
	printf("second test\n");
	printf("test4 is %s\n", p_test2(test4)? "true":"false"); 
	printf("test5 is %s\n", p_test2(test5)? "true":"false");
	printf("test5 is %s\n", p_test2(test6)? "true":"false");
	return EXIT_SUCCESS;
}
