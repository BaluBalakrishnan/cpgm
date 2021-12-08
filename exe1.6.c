//purpose of the program is to verify that the expression getchar()!=EOF is 0 or 1

#include<stdio.h>
int main()
{
	int c;
	int ans=((c=getchar())!=EOF);
		printf("%d",ans);
	return 0;
}
