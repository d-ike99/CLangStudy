#include <stdio.h>
#include <stdarg.h>

#include "../header/kozotai.h"

//-----------------------------------------------------------------------------
//// プロトタイプ宣言
////-----------------------------------------------------------------------------
//void work(test_st *test, int argc, ...);
void output(int *test);
////-----------------------------------------------------------------------------
//// メイン関数
void main(){
	int *p;
	int test = 10;
	int *po;

	*po = 100;

	output(po);	
	
	printf("main_atai: %d\n", *po);
}

output(int *test){

	printf("output_start!!\n");
	printf("atai: %d\n", *test);
	*test = 123;
}

