#include <stdio.h>

int main(void) {
	FILE* fptr;

	/*  WRITING IN A FILE
 
	char sentence[60];
	fptr = fopen("C:\\Users\\emrei\\OneDrive\\Masaüstü\\file\\deneme.txt", "w");
	if (fptr == NULL)
	printf("file open UNSUCCESSFUL\n");

	else {
		printf("file open SUCCESSFUL\n");

		putc('K',fptr);
		fputc('\n', fptr);
		fputs("nisa karim\n", fptr);

		fgets(sentence, 60, stdin);
		fprintf(fptr, "%s\n", sentence);
	}
	fclose(fptr);
  return 0;
 
	*/

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/*  READING FROM THE FILE
 
	char data[100];
	fptr = fopen("C:\\Users\\emrei\\OneDrive\\Masaüstü\\file\\deneme.txt", "r");
	if (fptr == NULL)
		printf("file open UNSUCCESSFUL\n");

	else {
		char a;
		a = getc(fptr);
		printf("the character you pulled is: %c\n", a);
		rewind(fptr);

		while (!feof(fptr)) {    // a != EOF (end of file)
			a = getc(fptr);
			printf("%c", a);
		}
		printf("\n");
		rewind(fptr);

		fgets(data, 100, fptr);
		printf("%s\n", data);
	}
		fclose(fptr);
		return 0;
  
		*/
}
