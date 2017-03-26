#include <stdio.h>
#include <conio.h>

int readInput(FILE *p, char *temparr)
{
	int i = 0;
	char c;

	while((c = fgetc(p)) != '\n')
	{
		*(temparr + i) = c;
		i++;
	}
	
	*(temparr + i) = '\n';
	return i;
}

void clearArrays(char *inputarr, char *outputarr)
{
	int i = 100;

	for(;i--;)
		*(inputarr + i) = *(outputarr + i) = ' ';
}

void main()
{
	FILE *p;
	int index = 0, j = 0, spacecount = 0, k;
	char c, a = 0, inputarr[100], outputarr[100];

	p = fopen("C:\\TurboC4\\TC\\BIN\\tst.txt","r");

	while( !(feof(p)) )
	{
		k = readInput(p, inputarr);

		while(inputarr[index] != '\n')
		{
			if(inputarr[index] == ' ')
			{
				while(inputarr[index] == ' ')
				{
					index++;
					spacecount++;
				}

				//if(spacecount > 1)
				{
					while(inputarr[index] != ' ')
					{
						if(inputarr[index] == '\n')
							break;
						outputarr[j++] = inputarr[index++];
					}
					outputarr[j++] = ' ';
				}

				spacecount = 0;
			}
			if(index == 0)
			{
				while(inputarr[index] != ' ')
				{
					if(inputarr[index] == '\n')
						break;
					outputarr[j++] = inputarr[index++];	
				}

				outputarr[j++] = ' ';
			}
		}
		index = j = 0;

		for(; index < k; index++)
			printf("%c", outputarr[index]);

		clearArrays(inputarr, outputarr);
	}
}
