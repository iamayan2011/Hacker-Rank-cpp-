#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int p = (*a);
    int q = (*b);

    *a = p+q;
    *b = p-q;

    if((*b)<0) *b = -(*b);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}