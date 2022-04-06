#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// English to Morse Code.
char* getMorseCodeFromChar(char c) {
	switch (c) {
		case 'A':
		case 'a': {
			return ".-";
		} break;

		case 'B':
		case 'b': {
			return "-...";
		} break;

		case 'C':
		case 'c': {
			return "-.-.";
		} break;

		case 'D':
		case 'd': {
			return "-..";
		} break;

		case 'E':
		case 'e': {
			return ".";
		} break;

		case 'F':
		case 'f': {
			return "..-.";
		} break;

		case 'G':
		case 'g': {
			return "--.";
		} break;

		case 'H':
		case 'h': {
			return "....";
		} break;

		case 'I':
		case 'i': {
			return "..";
		} break;

		case 'J':
		case 'j': {
			return ".---";
		} break;

		case 'K':
		case 'k': {
			return "-.-";
		} break;

		case 'L':
		case 'l': {
			return ".-..";
		} break;

		case 'M':
		case 'm': {
			return "--";
		} break;

		case 'N':
		case 'n': {
			return "-.";
		} break;

		case 'O':
		case 'o': {
			return "---";
		} break;

		case 'P':
		case 'p': {
			return ".--.";
		} break;

		case 'Q':
		case 'q': {
			return "--.-";
		} break;

		case 'R':
		case 'r': {
			return ".-.";
		} break;

		case 'S':
		case 's': {
			return "...";
		} break;

		case 'T':
		case 't': {
			return "-";
		} break;

		case 'U':
		case 'u': {
			return "..-";
		} break;

		case 'V':
		case 'v': {
			return "...-";
		} break;

		case 'W':
		case 'w': {
			return ".--";
		} break;

		case 'X':
		case 'x': {
			return "-..-";
		} break;

		case 'Y':
		case 'y': {
			return "-.--";
		} break;

		case 'Z':
		case 'z': {
			return "--..";
		} break;

		case '0': {
			return "-----";
		} break;

		case '1': {
			return ".----";
		} break;

		case '2': {
			return "..---";
		} break;

		case '3': {
			return "...--";
		} break;

		case '4': {
			return "....-";
		} break;

		case '5': {
			return ".....";
		} break;

		case '6': {
			return "-....";
		} break;

		case '7': {
			return "--...";
		} break;

		case '8': {
			return "---..";
		} break;

		case '9': {
			return "----.";
		} break;

		case '.': {
			return ".-.-.-";
		} break;

		case ',': {
			return "--..--";
		} break;

		case '?': {
			return "..--..";
		} break;

		case ' ': {
			return "/";
		} break;

		default: {
			return NULL;
		} break;
	}
}
char** getMorseCodeFromString(char* str, size_t size) {
	size_t sizeOfMainString = 0;

	char** mainString = malloc(sizeof(char*));

	for (int i = 0; i < size; i++) {

		char* temp = getMorseCodeFromChar(str[i]);

		for (int k = 0; temp[k] != '\0'; k++) {
			sizeOfMainString++;
		}

		mainString = realloc(mainString, sizeof(char*) * sizeOfMainString);
		*(mainString + i) = temp;
	}

	return mainString;
}
void printMorseCodeFromString(char* str, size_t size) {
	for (int i = 0; i < size; i++) {
		printf("%s ", getMorseCodeFromString(str, size)[i]);
	}

	printf("\n");
}
// Morse Code to English.
char getCharFromMorseCode(char* str) {
	if(strcmp(str, ".-") == 0) return 'A';
	else if (strcmp(str, "-...") == 0) return 'B';
	else if (strcmp(str, "-.-.") == 0) return 'C';
	else if (strcmp(str, "-..") == 0) return 'D';
	else if (strcmp(str, ".") == 0) return 'E';
	else if (strcmp(str, "..-.") == 0) return 'F';
	else if (strcmp(str, "--.") == 0) return 'G';
	else if (strcmp(str, "....") == 0) return 'H';
	else if (strcmp(str, "..") == 0) return 'I';
	else if (strcmp(str, ".---") == 0) return 'J';
	else if (strcmp(str, "-.-") == 0) return 'K';
	else if (strcmp(str, ".-..") == 0) return 'L';
	else if (strcmp(str, "--") == 0) return 'M';
	else if (strcmp(str, "-.") == 0) return 'N';
	else if (strcmp(str, "---") == 0) return 'O';
	else if (strcmp(str, ".--.") == 0) return 'P';
	else if (strcmp(str, "--.-") == 0) return 'Q';
	else if (strcmp(str, ".-.") == 0) return 'R';
	else if (strcmp(str, "...") == 0) return 'S';
	else if (strcmp(str, "-") == 0) return 'T';
	else if (strcmp(str, "..-") == 0) return 'U';
	else if (strcmp(str, "...-") == 0) return 'V';
	else if (strcmp(str, ".--") == 0) return 'W';
	else if (strcmp(str, "-..-") == 0) return 'X';
	else if (strcmp(str, "-.--") == 0) return 'Y';
	else if (strcmp(str, "--..") == 0) return 'Z';
	else if (strcmp(str, "-----") == 0) return '0';
	else if (strcmp(str, ".----") == 0) return '1';
	else if (strcmp(str, "..---") == 0) return '2';
	else if (strcmp(str, "...--") == 0) return '3';
	else if (strcmp(str, "....-") == 0) return '4';
	else if (strcmp(str, ".....") == 0) return '5';
	else if (strcmp(str, "-....") == 0) return '6';
	else if (strcmp(str, "--...") == 0) return '7';
	else if (strcmp(str, "---..") == 0) return '8';
	else if (strcmp(str, "----.") == 0) return '9';
	else if (strcmp(str, ".-.-.") == 0) return '.';
	else if (strcmp(str, "--..--") == 0) return ',';
	else if (strcmp(str, "..--..") == 0) return '?';
	else if (strcmp(str, "/") == 0) return ' ';
}

int main() {
	char str[] = "mahana is noob";
	size_t size = sizeof(str) - 1; // - 1 because of NULL terminator -> '\0'.

	printMorseCodeFromString(str, size);

	getch();

	return 0;
}
