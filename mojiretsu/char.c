#include <stdio.h>
#include <stdarg.h>

#include "../header/kozotai.h"

//-----------------------------------------------------------------------------
// プロトタイプ宣言
//-----------------------------------------------------------------------------
void output(char *test);
//-----------------------------------------------------------------------------
// メイン関数
//-----------------------------------------------------------------------------
int main(){
	printf("main_start\n");
	
	char i[10];
	memset(i, 0x00, 9);
	memcpy(i, "test", 4);

	output( i );
		
	return(0);
}

void output(char *test){
	
	printf("work_test: %s\n", test);
}

