#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct food {
    int votes;
    char name[10];
};

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main() {
    struct food list[5] = {{0, "Kebab"}, {0, "Burger"}, {0, "Pasta"}, {0, "Lahmacun"}, {0, "Salad"}};
    int no_of_people, vote, threshold = 5, count = 0;
    
    printf("Enter total number of people: ");
    scanf("%d", &no_of_people);
    
    printf("MENU\n");
    printf("1. Kebab \n2. Burger \n3. Pasta \n4. Lahmacun \n5. Salad \n");
    
    for (int i = 0; i < no_of_people; i++) {
        printf("Enter the vote of person %d (1-5): ", i + 1);
        scanf("%d", &vote);
        clearInputBuffer();
        if (vote >= 1 && vote <= 5) {
            list[vote - 1].votes += 5; 
        } 
else {
            printf("Invalid choice.\n");
        }
    }
    
    printf("NAME\t\tVOTES\n\n");
    for (int i = 0; i < 5; i++) {
        if (list[i].votes >= threshold) {
            printf("%s\t\t%d\n", list[i].name, list[i].votes);
        } else {
            count++;
        }
    }
    
    if (count == 5) {
        printf("Today you should eat at dorm.\n");
        exit(0);
    }
    
       count = 0;
    printf("SECOND ROUND\n");
    for (int i = 0; i < 5; i++) {
        if (list[i].votes >= threshold) {
            printf("%d. %s\n", count + 1, list[i].name);
            count++;
        } else {
            list[i].votes = 0; 
        }
    }
    
    for (int i = 0; i < no_of_people; i++) {
        printf("Enter the vote of person %d: ", i + 1);
        scanf("%d", &vote);
        clearInputBuffer();
        if (vote >= 1 && vote <= count) {
            for (int j = 0, voteIndex = 1; j < 5; j++) {
                if (list[j].votes > 0) {
                    if (voteIndex == vote) {
                        list[j].votes += 5; 
                        break;
                    }
                    voteIndex++;
                }
            }
        } else {
            printf("Invalid choice.\n");
        }
    }
    
    struct food topFood = list[0];
    for (int i = 1; i < 5; i++) {
        if (list[i].votes > topFood.votes) {
            topFood = list[i];
        }
    }
    
    printf("\nFood you should order is %s\n", topFood.name);
    return 0;
}
