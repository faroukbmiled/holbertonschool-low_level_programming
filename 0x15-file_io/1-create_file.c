#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file.
 * @text_content: string to write to the file.
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int f, i, w;
if (filename == NULL)
{
return (-1);
}
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (f == -1)
{
return (-1);
}
if (text_content == NULL)
{
text_content = "";
}
for (i = 0 ; text_content[i] != '\0' ; i++)
;
w = write(f, text_content, i);
if (w == -1)
{
return (-1);
}
close(f);
return (1);
}
