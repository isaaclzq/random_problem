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
	
int main(void){
	char* test1 = "abccba";
	char* test2 = "121212";
	char* test3 = "123421";
	printf("test1 is %d\n", plalindrome_test(test1, 6));
	printf("test2 is %d\n", plalindrome_test(test2, 6));
	printf("test3 is %d\n", plalindrome_test(test3, 6));
	return EXIT_SUCCESS;
}
