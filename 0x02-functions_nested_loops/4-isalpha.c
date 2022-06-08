#include "main.h"                                            
                                                             
/**                                                          
 * _isalpha - checks for alphabet
 * @c: The character to check
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 * */                                                          
                                                             
int _isalpha(int c);                                          
{
	if (c >= 97 && c <= 123)                             
                return (1);                                  
        else if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);	
}                                                            
