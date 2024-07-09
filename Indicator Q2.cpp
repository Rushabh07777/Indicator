#include<stdio.h>
int main(){
	
	int l;
	
	printf("Enter array's size: ");
	scanf("%d",&l);
	
	int array[l][l];
	
	for(int i=0; i<l; i++) {
		for(int j=0; j<l; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	printf("Cubes of all elements: \n");
	for(int i=0; i<l; i++) {
		for(int j=0; j<l; j++) {
			printf("%d ", array[i][j]*array[i][j]*array[i][j]);
		}
		printf("\n");
	}

	return 0;	
}