#include <stdio.h>
#include <stdlib.h>
#include "towers.h"

int is_valid_tower(char *arg) {
    return (arg[0] == '1' || arg[0] == '2' || arg[0] == '3') && arg[1] == '\0';
}

int main(int argc, char **argv) {
    
    // if (argc == 1), use these default values
    
    int n = 3;
    int from = 1;
    int dest = 2;

    if (argc == 1){}
    else if (argc == 2) {
        // One argument: number of disks
        n = atoi(argv[1]);
        if (n <= 0) {
            fprintf(stderr, "Error: number of disks must be positive.\n");
            return 1;
        }
    }
    else if (argc == 4) {
        // Three arguments: numberDisks fromID toID
        n = atoi(argv[1]);
        if (n <= 0) {
            fprintf(stderr, "Error: number of disks must be positive.\n");
            return 1;
        }
        if (!is_valid_tower(argv[2]) || !is_valid_tower(argv[3])) {
            fprintf(stderr, "Error: Tower IDs must be '1', '2' or '3'.\n");
            return 1;
        }

        from = argv[2][0] - '0';  // Convert char '1' to int 1
        dest = argv[3][0] - '0';

        if (from == dest) {
            fprintf(stderr, "Error: source and destination towers must be different.\n");
            return 1;
        }
    }
    else {
        // Invalid number of arguments
        fprintf(stderr, "Usage:\n");
        fprintf(stderr, "  %s [numberDisks] or %s [numberDisks fromID toID]\n", argv[0], argv[0]);
        return 1;
    }

    towers(n, from, dest);
    return 0;
}
