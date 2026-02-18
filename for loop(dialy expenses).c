#include <stdio.h>

int main() {
    int N;
    int expense;
    int total = 0;
    int overspendDays = 0;

    scanf("%d", &N);

    
    for(int i = 0; i < N; i++) {
        scanf("%d", &expense);
        total += expense;

        if(expense > 1000) {
            overspendDays++;
        }
    }

    
    printf("%d\n", total);
    printf("%d\n", overspendDays);

    return 0;
}