#include <stdio.h>
int main(){
    FILE *output = fopen("output.txt","w");
    fprintf(output, "Hello World!\n");
    fclose(output);
    return 0;
}
