#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    int value;

    f1 = fopen("f1.txt", "w");
    f2 = fopen("f2.txt", "w");
    f3 = fopen("f3.txt", "w");

   

    printf("Enter a year: ");
    scanf("%d", &value);

    fprintf(f1, "%d\n", value);

    
     if ((value % 4 == 0 && value % 100 != 0) || (value % 400 == 0)){
        fprintf(f2, "%d\n", value);
    } else {
        fprintf(f3, "%d\n", value);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
