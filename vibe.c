#include <stdio.h>

int main() {
	FILE *FUMO = fopen("fumo.txt", "r");
	while(!feof(FUMO)){
		printf("%c", getc(FUMO));
	}
	
	return 0;
}
