 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include <string.h>
 #define BUF_SIZE 200

int main()
 {
	char buf[BUF_SIZE + 1] = { '\0' };
	char word[BUF_SIZE + 1] = { '\0' };
	int i = 0, j = 0, inWord = 0, countWord = 0, lenWord = 0;
	
	puts("Enter a string: ");
	fgets(buf, BUF_SIZE, stdin);
	buf[BUF_SIZE - 1] = ' '; 
	buf[strlen(buf) - 1] = ' ';
	
		while (buf[i])
		 {
		if (buf[i] != ' ' && inWord == 0) 
			 {
			inWord = 1;
			lenWord = 1;
			word[j++] = buf[i];
			}
		else if (buf[i] == ' ' && inWord == 1) 
			 {
			inWord = 0;
			word[j] = '\0';
		printf("%s, word lenght = %d", word, lenWord);
			lenWord = j = 0;
			countWord++;
			putchar('\n');
			}
		else if (buf[i] != ' ' && inWord == 1) 
			 {
			word[j++] = buf[i];
			lenWord++;
			}
		i++;
		}
	
		printf("Number of words = %d\n", countWord);
	
		return 0;
	}