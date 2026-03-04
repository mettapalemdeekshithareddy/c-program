#include <stdio.h>

int main() {
    int maxWeight, N;
    int weight;
    int totalWeight = 0;
    int passengersAllowed = 0;
    int i = 0;

    
    scanf("%d", &maxWeight);

    
    scanf("%d", &N);

    
    while(i < N) {
        scanf("%d", &weight);

        if(totalWeight + weight <= maxWeight) {
            totalWeight += weight;
            passengersAllowed++;
        } else {
            break;  
        }

        i++;
    }

    
    printf("Passengers Allowed: %d\n", passengersAllowed);

    if(passengersAllowed < N) {
        printf("Overload Status: Yes\n");
    } else {
        printf("Overload Status: No\n");
    }

    return 0;
}