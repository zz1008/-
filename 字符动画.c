#include <stdio.h>					
#include <string.h>					
#include <stdlib.h>					
#include <Windows.h>					
#include <assert.h>					
 
void gotoxy(int x, int y)
{
	COORD pos; 
	pos.X = x - 1; 
	pos.Y = y - 1;		
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
 
int main()
{
	system("color f0");	              	
	system("mode con cols=474 lines=120");			
	long i;								
	char FileName[100];					
	char hi[254000];				
	FILE *in;						
 
	system("C:\\Users\\张君豪的小新\\Desktop\\文件\\第一次大作业\\樱桃小丸子主题曲.mp3");	
	Sleep(1000);					
 


	for (i = 1; i <= 4679; i++)
	{
		sprintf(FileName,
			"C:\\Users\\张君豪的小新\\Desktop\\文件\\第一次大作业\\字符图\\ASCII-樱桃小丸子主题曲 (%ld).txt", i);
 
		in = fopen(FileName, "r");
		assert(in != NULL);	
 
		fread(hi, 1, 254000, in);
 
		printf("%s\n%d", hi, i);
		gotoxy(1, 1);			
		Sleep(27);
		fclose(in);
	}
	
	return 0;
}