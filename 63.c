#include <cs50.h>
#include <stdio.h>
#include <string.h>
// determines the winner of a short Scrabble-like game
int main(void)
{
    char u_atoz[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','Y','Z'};
    char l_atoz[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int points[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = 0, score2 = 0;

    for(int i = 0, n = strlen(word1); i < n; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(word1[i] == u_atoz[j] || word1[i] == l_atoz[j])
            {
                score1 += points[j];
            }
        }
    }

    for(int i = 0, n = strlen(word2); i < n; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(word2[i] == u_atoz[j] || word2[i] == l_atoz[j])
            {
                score2 += points[j];
            }
        }
    }

    if(score1 < score2)
    {
        printf("Player 2 wins!\n");
    }else if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }else
    {
        printf("Tie!\n");
    }
}

