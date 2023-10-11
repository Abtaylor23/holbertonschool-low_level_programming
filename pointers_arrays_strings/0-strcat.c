#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */


char *_strcat(char *dest, const char *src) {
	    char *p = dest;
	        while (*p) {
			        p++;
				    }

		    while (*src) {
			            *p = *src;
				            p++;
					            src++;
						        }
		        
		        *p = '\0';  // Add the terminating null byte
			    
			    return dest;
}

int main() {
	    char dest[50] = "Hello, ";
	        const char src[] = "World!";

		    _strcat(dest, src);
		        printf("Concatenated string: %s\n", dest);

			    return 0;
}
