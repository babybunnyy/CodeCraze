#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// this program calculates the approximate grade level needed to comprehend some text.
// using the Coleman-Liau index.

int count_letter(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    // 1) calculate num of letters in the text
    int letters = count_letter(text);
    // 2) calculate num of words in the text
    int words = count_words(text);
    // 3) calculate num of sentences in the text
    // sentences are indicated by period, exclamation point or question mark
    int sentences = count_sentences(text);
    // avg num of letter per 100 words
    float L = (float)letters / words* 100.0;
    // avg num of sentences per 100 words
    float S = (float)sentences / words * 100.0;
    float index = 0.0588 * L - 0.296 * S - 15.8;// COleman-Liau index
    // print the grade level
    int rounded = (int) round(index);
    if (rounded < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (rounded >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", rounded);
    }
    return 0;
}
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?' )
        {
            count++;
        }
    }
    return count;
}
int count_words(string text)
{
    int count = 1;
    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if(isspace(text[i]) || text[i] == '\0')
        {
            count++;
        }
    }
    return count;
}
int count_letter(string text)
{
    int count = 0;
    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if(isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}

