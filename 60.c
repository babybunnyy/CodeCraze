#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
bool checksum(long number);
long getnumber();
int countdigit(long number);
int ftd(long n); // first two digits

int main(void)
{
    // get correct number from user
    // number should be either 13 / 15 / 16 digits long
    long number = getnumber();
    bool valid = checksum(number);
    int nd = countdigit(number);
    if (nd == 10)
    {
        printf("INVALID");
    }
    int n = ftd(number);

    if (valid)
    {
        if (nd == 15 && (n == 34 || n == 37))
        {
            printf("AMEX\n");
        }
        else if (nd == 16 && (n == 51 || n == 52 || n == 53 || n == 54 || n == 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((nd == 13 || nd == 16) && (n / 10) == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int ftd(long n)
{
    while (n >= 100)
    {
        n /= 10;
    }
    return n;
}

bool checksum(long number)
{
    // iterate throught the digits from right to left
    int digit1, digit2;
    long tmp1 = number, tmp2 = number;
    int mby2;               // multiply by 2
    int dig1, dig2;         // seperate the product (digit * 2)
    int sum1 = 0, sum2 = 0; // sum 1 : add those products’ digits (i.e., not the products themselves)
                            // the sum of the digits that weren’t multiplied by 2
    while (tmp1 > 0)
    {
        tmp1 /= 10;
        // printf("%ld ", tmp1);
        digit1 = tmp1 % 10;
        mby2 = digit1 * 2;
        dig1 = mby2 % 10;
        dig2 = mby2 / 10;
        sum1 = sum1 + (dig1 + dig2);
        // printf("%d * 2 = %d %d %d ",digit1,mby2,dig1,dig2);

        tmp1 /= 10;
        // printf("%ld\n", tmp1);
    }
    while (tmp2 > 0)
    {
        digit2 = tmp2 % 10;
        // printf("\n%d ",digit2);
        tmp2 /= 100;
        // printf("%ld",tmp2);
        sum2 += digit2;
    }
    int total_sum = sum1 + sum2;
    if ((total_sum % 10) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int countdigit(long number)
{
    long temp = number;
    int count = 0;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    return (count);
}
long getnumber()
{
    long num;
    int ndigits;
    do
    {
        num = get_long("Number: ");
        ndigits = 0;
        ndigits = countdigit(num);
    }
    while (ndigits != 16 && ndigits != 15 && ndigits != 13 && ndigits != 10);
    return (num);
}

