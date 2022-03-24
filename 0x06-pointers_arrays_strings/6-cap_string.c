#include 'main.h'

/**
 * cap_string - changes to uppercase all strings
 * after special characters and spces
 * @str: input string
 * Return: the connverted string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' '||
		    str[index - 1] == '\t'||
		    str[index - 1] == '\n'||
		    str[index - 1] == ','||
		    str[index - 1] == ';'||
		    str[index - 1] == '.'||
		    str[index - 1] == '!'||
		    str[index - 1] == '?'||
		    str[index - 1] == '"'||
		    str[index - 1] == '('||
		    str[index - 1] == ')'||
		    str[index - 1] == '{'||
		    str[index - 1] == '}'||
		    index == 0)
		{
			if(str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 32;
			}
		}
	}
	return (str);
}
