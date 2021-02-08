#include <stdio.h>
#include <string.h>

#define MAXCOUNT 10
#define MAXLENGTH 100


int i;
char words[MAXCOUNT][MAXLENGTH];
char* shortestWord(char array[MAXCOUNT][MAXLENGTH]);
char* longestWord(char array[MAXCOUNT][MAXLENGTH]);
int vowelCount(char string[MAXLENGTH]);

int main(void)
{
    printf("Input ten words: \n");

    for(i = 0; i < MAXCOUNT; i++)
    {
        printf("Enter element %d \n", i + 1);
        gets(words[i]);
    }

    printf("The shortest word is:%s. It has %d vowels.\n", shortestWord(words),vowelCount(shortestWord(words)));

    printf("The longest word is:%s. It has %d vowels.\n", longestWord(words),vowelCount(longestWord(words)));

    return 0;
}

char* shortestWord(char array[MAXCOUNT][MAXLENGTH])
{
    int j = 0;
    int shortest = strlen(array[j]);
    int currentLen;

    for (int i = 1; i < MAXCOUNT; i++)
    {
        currentLen = strlen(array[i]);
        if (shortest > currentLen)
        {
            j = i;
            shortest = currentLen;
        }
    }

    return array[j];
}

char* longestWord(char array[MAXCOUNT][MAXLENGTH])
{
    int j = 0;
    int longest = strlen(array[j]);
    int currentLen;

    for (int i = 1; i < MAXCOUNT; i++)
    {
        currentLen = strlen(array[i]);
        if (longest < currentLen)
        {
            j = i;
            longest = currentLen;
        }
    }

    return array[j];
}

int vowelCount(char string[MAXLENGTH])
{
    int vowels = 0;
    for(i = 0; i <= strlen(string); i++)
    {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
           string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
            vowels++;
    }

    return vowels;
}
