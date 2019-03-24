#include <stdio.h>
#include <stdlib.h>
void readTemperatures(int *firstDayTemperature, int *secondDayTemperature, int *thirdDayTemperature) {
    scanf("%i", firstDayTemperature);
    scanf("%i", secondDayTemperature);
    scanf("%i", thirdDayTemperature);
}

char *sad() {
    return ":(";
}

char *happy() {
    return ":)";
}

char *classifyPopulationHappiness(int *firstDayTemperature, int *secondDayTemperature, int *thirdDayTemperature) {
    if (*secondDayTemperature < *firstDayTemperature) {
        if (*thirdDayTemperature >= *secondDayTemperature) {
            return happy();
        }
        else {
            if(*secondDayTemperature - *firstDayTemperature < *thirdDayTemperature - *secondDayTemperature) {
                return happy();
            }
            return sad();
        }
    } else if (*secondDayTemperature > *firstDayTemperature) {
        if (*thirdDayTemperature <= *secondDayTemperature) {
            return sad();
        } else {
            if (*thirdDayTemperature - *secondDayTemperature < *secondDayTemperature - *firstDayTemperature) {
                return sad();
            }
            return happy();
        }
    } else {
        if (*thirdDayTemperature > *secondDayTemperature) {
            return happy();
        }
        return sad();
    }
}

int main() {
    int firstDayTemperature;
    int secondDayTemperature;
    int thirdDayTemperature;

    readTemperatures(&firstDayTemperature, &secondDayTemperature, &thirdDayTemperature);
    printf("%s\n", classifyPopulationHappiness(&firstDayTemperature, &secondDayTemperature, &thirdDayTemperature));
}