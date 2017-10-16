#include <stdio.h>
int main()
{
	char ch;
	int i;
	printf("Enter the number(1~9):\n");
	while((ch=getchar())!=EOF)
	{
		puts("");
		for(i=1; i<=ch-48; i++){
			putchar(ch);
		}
	}
}