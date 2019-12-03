#include <stdio.h>

#include "../header/kozotai.h"

void main(){

    int     i;
	unsigned int BinDevNo[2];
	char work[128];

    StDevNoArray	st_DevNoArray;				/* ビットフィールド設定用配列   */

	/* 初期設定 */
	memset((void*)&BinDevNo, 0x00, sizeof( BinDevNo ) );
	memset(&work, 0x00, sizeof(work));

    st_DevNoArray.ul_DevNo[0] = 12;
    st_DevNoArray.ul_DevNo[1] = 2;
    st_DevNoArray.ul_DevNo[2] = 5;
    st_DevNoArray.ul_DevNo[3] = 6;

	/* ビットフィールドの設定 */
	for( i = 0; i < 10; i ++ )
	{
		/* 送信対象外は除外 */
		if( !( st_DevNoArray.ul_DevNo[i] ) ) continue;

		/* ビットフィールドの設定 */
		if(st_DevNoArray.ul_DevNo[i] <= 32)
		{
			BinDevNo[0] |= ( 0x01 << ( st_DevNoArray.ul_DevNo[i] - 1));
		}
		else
		{
			BinDevNo[1] |= ( 0x01 << ( st_DevNoArray.ul_DevNo[i] - 1));
        }

        sprintf(work, "BinDevNo[0][1] = [%08x][%08x]", htonl(BinDevNo[0]), htonl(BinDevNo[1]));
        
        printf("%d's bit: ", st_DevNoArray.ul_DevNo[i] - 1 );
        printf("%s", work);
        printf("\n");
	}

	
}