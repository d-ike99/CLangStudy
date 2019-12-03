#include <stdio.h>
#include <stdarg.h>

#include "../header/kozotai.h"

//-----------------------------------------------------------------------------
// プロトタイプ宣言
//-----------------------------------------------------------------------------
void work(test_st *test, int argc, ...);
void output(test_st *test);
//-----------------------------------------------------------------------------
// メイン関数
//-----------------------------------------------------------------------------
int main(){
	printf("main_start\n");
	
	test_st st[2];
	char i[10];
	memset(i, 0x00, 9);
	memcpy(i, "test", 4);

	work( &st, 0 );
		
	printf("kekka: %d\n", st[0].st);
	printf("kekka: %d\n", st[1].ruct);
	return(0);
}

void work(test_st *test, int argc, ...){
	va_list list;
	va_start(list, argc);
	
	printf("argc: %d\n", argc);
	printf("work_start\n");
	

	memset(&test[0], 0x00, sizeof(test[0]));
	memset(&test[1], 0x00, sizeof(test[1]));

	test[0].st = 4;
	test[1].ruct = 2;

	output(&test[0]);

	printf("work: %d\n", test[0].st);
	printf("work ireko: %d\n", test[0].irst[0].ireko);
	printf("work ireko: %d\n", test[1].irst[1].ireko);

	printf("work ireko: %d\n", test[0].irst[1].ireko);
	printf("work ireko: %d\n", test[1].irst[1].ireko);

	va_end(list);
}

void output(test_st *test){
	printf("output: %d\n", test->st);
	test->irst[0].ireko = 3;
	test->irst[1].ireko = 5;




}
