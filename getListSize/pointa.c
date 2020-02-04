#include <stdio.h>
#include <stdarg.h>


// 配列のサイズを取得する！：int ver
void main(){
	int intList[] = {1, 2, 10, 2, 4};
	int listSize;
	
	listSize = sizeof(intList) / sizeof(int);
	
	printf("配列サイズ: %lu\n", sizeof(intList));
	printf("配列の要素数: %lu\n", listSize );
}


