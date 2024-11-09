#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
    int h, w;

    if (width < 1 || height < 1)
    {
        return NULL;
    }

    // Allocate memory for an array of int pointers (rows)
    int **result = malloc(height * sizeof(int *));
    if (result == NULL)
    {
        return NULL;
    }

    // Allocate memory for each row and initialize elements to 0
    for (h = 0; h < height; h++)
    {
        result[h] = malloc(width * sizeof(int));
        if (result[h] == NULL)
        {
            // Free any already allocated rows if allocation fails
            for (int k = 0; k < h; k++)
            {
                free(result[k]);
            }
            free(result);
            return NULL;
        }

        // Initialize each element to 0
        for (w = 0; w < width; w++)
        {
            result[h][w] = 0;
        }
    }

    return (result);
}

