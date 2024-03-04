#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, char *argv[])
{
        if(argc != 2)
        {
                printf("Usage: ./a.out key\n");
                return 1;
        }
        else if(argc == 2 && strlen(argv[1]) == 26)
        {
                for(int i = 0; i < 26; i++)
                {
                        if(isalpha(argv[1][i]))
                        {
                                for(int j = i + 1; j < 26; j++)
                                {
                                        if(argv[1][i] == argv[1][j])
                                        {
                                                printf("Found duplicates\n");
                                                return 1;
                                        }
                                }
                        }
                        else
                        {
                                printf("Only alphabets\n");
                                return 1;
                        }
                }
        }else if (argc == 2 && strlen(argv[1]) != 26)
        {
                printf("Must be 26 charac.\n");
                return 1;
        }

        string plaintext = get_string("plaintext: ");
        int n = strlen(plaintext);
        char ciphertext[100];
        char uabc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char labc[] = "abcdefghijklmnopqrstuvwxyz";
        for(int i = 0; i < n; i++)
        {
                if(isalpha(plaintext[i]))
                {
                        for(int j = 0; j < 26; j++)
                        {
                                if(plaintext[i] == uabc[j] || plaintext[i] == labc[j])
                                {
                                        if(isupper(plaintext[i]))
                                        {
                                                ciphertext[i] = toupper(argv[1][j]);
                                        }
                                        else if(islower(plaintext[i]))
                                        {
                                                ciphertext[i] = tolower(argv[1][j]);
                                        }

                                }
                        }
                }
                else
                {
                        ciphertext[i] = plaintext[i];
                }
                printf("%c ",ciphertext[i]);
        }
        printf("ciphertext: %s\n",ciphertext);
        return 0;
}

