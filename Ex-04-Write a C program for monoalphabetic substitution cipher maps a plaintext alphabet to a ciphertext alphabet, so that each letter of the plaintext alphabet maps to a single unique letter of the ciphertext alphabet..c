#include<stdio.h>
#include<string.h>
char alpha[27][3] = { { 'a', 'z' }, { 'b', 'y' }, { 'c', 'x' }, { 'd', 'w' }, {
        'e', 'v' }, { 'f', 'u' }, { 'g', 't' }, { 'h', 's' }, { 'i', 'r' }, {
        'j', 'q' }, { 'k', 'p' }, { 'l', 'o' }, { 'm', 'n' }, { 'n', 'm' }, {
        'o', 'l' }, { 'p', 'k' }, { 'q', 'j' }, { 'r', 'i' }, { 's', 'h' }, {
        't', 'g' }, { 'u', 'f' }, { 'v', 'e' }, { 'w', 'd' }, { 'x', 'c' }, {
	    'y', 'b' }, { 'z', 'a' } };

char monoalphabetic(char a);

int main()
{
	char str1[10],str[10];
	printf("Enter the string:");
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		str1[i]=monoalphabetic(str[i]);
	}
	printf("After Decryption:%s",str1);
}

char monoalphabetic(char a)
{
	int i;
	for(i=0;i<27;i++)
	{
		if(a==alpha[i][0])
		{
			break;
		}
	}
	return alpha[i][1];
}
