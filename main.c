 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

struct Book {
    int nunmber;
    char title[20];
};

void main(void) {
    struct Book *p;
p=(struct Book *)malloc(2*sizeof(struct Book));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    p->nunmber = 1;
    strcpy(p->title, "C Programming");

    (p+1)->nunmber = 2;
    strcpy((p+1)->title, "Electronics");

    free(p);
    return;
}