#include <stdio.h>
void encrypt();
char charArray[] = "WZZZZZUP! ";

int main(int argc, char const *argv[])
{
	encrypt();
	return 0;
}
void encrypt(){
	int i;
	char str[50];
	for( i = 0; i < 50; i++)
	{
		str[i] = charArray[i] + 1; // +1 WILL ENCRYPT THE STRING
	}
	printf("Encrypted String : %s \n",str );
	for( i = 0; i < 50; i++)
	{
		str[i] = str[i] - 1; // -1 WILL DECRYPT THE STRING
	}
	printf("Decrypted String : %s \n",str );
}