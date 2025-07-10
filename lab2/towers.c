/* Author: kclowes */
/* Description: Solves "Towers of Hanoi" problem.
 *              Prints sequence of moves to stdout.
 *              Prints other information tracing the
 *              algorithm's progress to stderr.
 */
#include <stdio.h>
#include "towers.h"

// Declare any function defined after it is called
static void showRecursionDepth(void);


static unsigned int depth = 0; // Depth = depth of recursion
static unsigned int moveNumber = 0; 

void towers(unsigned int n, unsigned int from, unsigned int dest)
{
    // Dynamicaly determining which rod is spare ( 1 + 2 + 3 = rod sums)
    unsigned int spare = 6 - from - dest;

    showRecursionDepth();

    fprintf(stderr, "towers(%d, %d, %d)\n", n, from, dest);
    depth++;

    if (n != 0) {
        towers(n-1, from, spare); // Recusrive Call

        showRecursionDepth();
        fprintf(stderr, "Move #%d: From Tower %d to Tower %d\n", ++moveNumber, from, dest);
        printf("%d %d\n", from, dest);
        towers(n-1, spare, dest);
    }
    depth--;
}

static void showRecursionDepth()
{
    int i;
    for(i = 0; i < depth; i++)
        fprintf(stderr, "..");
}
