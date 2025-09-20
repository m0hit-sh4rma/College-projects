#include <stdio.h>
int main(){
	char _;
	printf("Enter a character: ");
	scanf("%c", &_);
	
	switch(_){
		case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("%c is a vowel.", _);
			break;
		default:
			printf("%c is a consonent.", _);
			break;
	}
	return 0;
}