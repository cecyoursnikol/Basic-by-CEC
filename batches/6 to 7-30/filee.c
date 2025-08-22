#include <stdio.h>

int main() {
  FILE *fptr;

  // Open a file in writing mode
  fptr = fopen("filename.txt", "r");

  // Write some text to the file
  fprintf(fptr, "Some text in this file again!!!!!\n");
  fprintf(fptr, "\n\nThis is Arya & Malay.");
  
  	//read a file
	char myString[100];
	
	while(fgets(myString, 100, fptr)) {
  			printf("%s", myString);
	}

  // Close the file
  fclose(fptr);

  return 0;
}

