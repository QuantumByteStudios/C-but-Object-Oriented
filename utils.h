#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __linux__
#define clear() printf("\033[H\033[J")
#endif

#ifdef _WIN32
#define clear() system("cls")
#endif
