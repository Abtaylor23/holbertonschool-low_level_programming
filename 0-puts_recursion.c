#include <main.h>

void printStringWithNewLine(const char *str) {
	    printf("%s\n", str);
}

int main(void) {
	    const char *message = "Hello, World!";
	        printStringWithNewLine(message);
		    return 0;
}

