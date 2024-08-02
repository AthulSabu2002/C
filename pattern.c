#include <stdio.h>

void draw_pattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d  ", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    draw_pattern(n);
    return 0;
}
