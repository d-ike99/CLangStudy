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
	
	test_st *tmp;
	test_st *st;
	
	st = NULL;
	tmp = (test_st *)calloc(1, sizeof(test_st));

	st = tmp;

	st->st = 10;
	
	char i[10];
	memset(i, 0x00, 9);
	memcpy(i, "test", 4);
	memcpy(st->test, i, 4);
		
	printf("kekka         : %d\n", st->st);
	printf("kekka char len: %d\n", strlen(st->test));
	printf("kekka char    : %s\n", st->test);

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
