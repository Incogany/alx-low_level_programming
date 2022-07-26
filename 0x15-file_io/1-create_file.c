#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - function will create a file
 * @filename: name of file to be created
 * @text_content: text to be written in new file
 * Return: function return 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, file;
	
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
