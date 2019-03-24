#include <stdio.h>
int main() {
    int testCases;
    scanf("%i", &testCases);

    int i;
    for (i = 0; i < testCases; i++) {
        int numberOfFeedbacks;
        scanf("%i", &numberOfFeedbacks);
        int j;
        int feedbackCode;
        for(j = 0; j < numberOfFeedbacks; j++) {
            scanf("%i", &feedbackCode);
            switch (feedbackCode) {
                case 1: printf("Rolien");
                    break;
                case 2: printf("Naej");
                    break;
                case 3: printf("Elehcim");
                    break;
                case 4: printf("Odranoel");
                    break;

                default:
                    break;
            }
            printf("\n");
        }
    }
}