#include <stdio.h>
#define MAX 2500
int lcs_vowel(char*,char*,int,int);
int max(int a, int b);
int main()
{
	char X[MAX];
	char Y[MAX];
	scanf("%s",&X);
	scanf("%s",&Y);
	int m=strlen(X);
	int n=strlen(Y);
	int res=lcs_vowel(X,Y,m,n);
	printf("%d",res);
	return 0;
}


int lcs_vowel( char *X, char *Y, int m, int n )
{
   if (m == 0 || n == 0)
     return 0;

   if ((X[m-1] == Y[n-1])&& !(X[m-1] == 'a' || X[m-1] == 'e' || X[m-1] == 'i' || X[m-1] =='o' || X[m-1] == 'u'))
   {
     return 1 + lcs_vowel(X, Y, m-1, n-1);
   }
   else
     return max(lcs_vowel(X, Y, m, n-1), lcs_vowel(X, Y, m-1, n));
}

int max(int a, int b)
{
    return (a > b)? a : b;
}
