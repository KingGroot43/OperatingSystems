#include <stdio.h>
#include "jumpingPointer.h"

void initVisited(int* visited) 
{
    for(int i = 0; visited[i] != '\0'; i++)
        visited[i] = 0;
}


int jumpArray(int* A, const int const* arrayLength) 
{
    int count = 0;
    int distance = 0;
    int visited[*arrayLength];
    initVisited(visited);
    do {
        visited[distance] = 1;
        distance = distance + A[distance];
        count++;
        if(visited[distance] == 1) return -1;
        if(distance < 0 || distance >= *arrayLength) return count;
    } while(1);
    return count;
}

