#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 5

void initArr(int* nameArray){
	nameArray = (int*)malloc(sizeof(int)*SIZE);
	for(int i=0; i < SIZE; i++){
		*(nameArray+i) = i;
	}
	printf("%d ", nameArray[1]);
}

void printArray(int* inArray){
	for(int i=0; i<= SIZE-1; i++){
		printf("%d ",inArray[i]);
	}

}

int main(int argc, char** argv){
	int a[SIZE] ;
	initArr(a);
	printf("%d ", a[0]);
	getch();
	return 0;
}
