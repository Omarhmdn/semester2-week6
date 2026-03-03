#include <stdio.h>
#include <stdlib.h>


int worder(char* line){

    int count = 0, index = 0;
    while(next!='\n')
    {
        if (next ==' ')
            count+=1

        next = line[index];
        index++;
    }
    return count 
}

int main(int argc, char** argv){

    if (argc-2)
        return 1;

    FILE * f = fopen(argv[1], "r")
    if (!f)
    {
        printf("error: bad filename")
        return 2
    }

    int chars=0, words=0, lines=0;
    char buffer[100];

    while (fgets(buffer, sizeo(buffer), f) != NULL)
    {
        
    }



}