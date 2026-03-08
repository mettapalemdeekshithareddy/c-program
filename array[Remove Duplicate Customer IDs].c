#include <stdio.h>

int main() {
    int N;
    
    if (scanf("%d", &N) != 1) return 1;

    int ids;
  
    for (int i = 0; i < N; i++) {
        if (scanf("%d", &ids[i]) != 1) return 1;
    }

    for (int i = 0; i < N; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (ids[i] == ids[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            printf("%d ", ids[i]);
        }
    }

    printf("\n");
    return 0;
}