#include <stdio.h>

int main() {
    int batteryPercent, N;
    
    scanf("%d", &batteryPercent);
    scanf("%d", &N);
    
    int drain, totalDrain = 0;
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &drain);
        totalDrain += drain;
    }
    
    int remainingBattery = batteryPercent - totalDrain;

    if(remainingBattery < 0) {
        remainingBattery = 0;
    }
    
    printf("Remaining Battery: %d%%", remainingBattery);
    
    return 0;
}