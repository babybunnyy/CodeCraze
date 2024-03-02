#include <cs50.h>
#include <stdio.h>

int wordcalc(string word);
int letter_num(string word);

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score_word1 = wordcalc(word1);
    int score_word2 = wordcalc(word2);

    if (score_word1 > score_word2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score_word1 < score_word2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int wordcalc(string word)
{
    char upper_alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                               'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char lowercase[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                          'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int n = letter_num(word);
    int score = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (word[i] == upper_alphabet[j] || word[i] == lowercase[j])
            {
                score += points[j];
            }
        }
    }
    return (score);
}

int letter_num(string word)
{
    int i = 0;
    while (word[i] != '\0')
    {
        i++;
    }
    return i;
}
