#include<stdio.h>
int len(char *str){
	int length=0;
	while(*str){
		length++;
		*str++;
	}
	return length;
}
int main (){
	char input[50];
	 printf("Enter a Name : ");
	gets(input);
	
	printf("Length of the string  : %d",len(input));
}