#include <stdio.h>
#include <stdarg.h>

#include "../header/kozotai.h"

//-----------------------------------------------------------------------------
// プロトタイプ宣言
//-----------------------------------------------------------------------------
void work(test_st *test);
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

	work( &st );
		
	printf("kekka: %d\n", st[0].st);
	printf("kekka: %d\n", st[1].ruct);

	return(0);
}

void work(test_st *test){
	printf("work_start\n");
	
	memset(&test[0], 0x00, sizeof(test[0]));
	memset(&test[1], 0x00, sizeof(test[1]));

	test[0].st = 4;
	test[1].ruct = 2;

	output(&test[0]);
}

void output(test_st *test){
	printf("output: %d\n", test->st);

}
