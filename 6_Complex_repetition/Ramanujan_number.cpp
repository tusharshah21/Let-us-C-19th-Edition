// Ramanujan number (1729) is the smallest number that can be
// expressed as sum of two cubes in two different ways
// Write a program to print all such numbers up to a reasonable limit.

#include <stdio.h>
int main()
{
    int i, j, k, l;
    for (i = 1; i <= 30; i++)
        for (j = 1; j <= 30; j++)
            for (k = 1; k <= 30; k++)
                for (l = 1; l <= 30; l++)
                    if ((i!=j && i!=k && i!=l) && (j!=i && j!=k && j!=l) &&(k!=i && k!=j && k!=l) &&(l!=i && l!=j && l!=k))
                        if (i * i * i + j * j * j == k * k * k + l * l * l)
                            printf("%d %d %d %d\n", i, j, k, l);
    return 0;
}