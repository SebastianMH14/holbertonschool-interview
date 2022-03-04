#include "menger.h"

/**
 * menger - function that draws a 2D Menger Sponge
 *
 * @level: the level to draw
 * Return: void
 */
void menger(int level)
{
    int len, row, col, drow, dcol, f;

    len = (int)pow(3, level);
    for (col = 0; col < len; col++)
    {
        for (row = 0; row < len; row++)
        {
            drow = row;
            dcol = col;
            f = 0;
            while (drow && dcol)
            {
                if (drow % 3 == 1 && dcol % 3 == 1)
                {
                    printf(" ");
                    f = 1;
                    break;
                }
                drow = drow / 3;
                dcol = dcol / 3;
            }
            if (!f)
                printf("#");
        }
        printf("\n");
    }
}
