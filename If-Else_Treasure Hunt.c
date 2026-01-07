#include <stdio.h>

int main() {

    int path;
    scanf("%d", &path);

    if (path == 1) {
        printf("Player chooses the Left path.\n");

        int path1;
        scanf("%d", &path1);

        if (path1 == 1) {
            printf("Poor choice, Game Over!\n");
        } 
        else if (path1 == 2) {
            printf("Player found a bridge.\n");

            int path11;
            scanf("%d", &path11);

            if (path11 == 1) {
                printf("Player crosses the bridge safely.\n");

                int final;
                scanf("%d", &final);

                if (final == 1) {
                    printf("All that glitters is not gold, Game Over!\n");
                } 
                else if (final == 2) {
                    printf("All your efforts were for nothing, Game Over!\n");
                } 
                else if (final == 3) {
                    printf("Congratulations!! You won the treasure.\n");
                }
            } 
            else if (path11 == 2) {
                printf("Poor luck, Game Over!\n");
            }
        }
    }

    else if (path == 2) {
        printf("Player chooses the Middle path.\n");

        int abc, a, b, c;
        scanf("%d", &abc);

        a = abc / 100;
        b = (abc / 10) % 10;
        c = abc % 10;

        if ((a == b - 3) && (b == 4*c) && (a + b + c == 15)) {
            printf("Player solved the puzzle.\n");

            int final;
            scanf("%d", &final);

            if (final == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            } 
            else if (final == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            } 
            else if (final == 3) {
                printf("Congratulations!! You won the treasure.\n");
            }
        } else {
            printf("Foolish player, Game Over!\n");
        }
    }

    else if (path == 3) {
        printf("Player chooses the Right path.\n");

        int n;
        scanf("%d", &n);

        if (n == 30) {
            printf("Player solved the puzzle.\n");

            int final;
            scanf("%d", &final);

            if (final == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            } 
            else if (final == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            } 
            else if (final == 3) {
                printf("Congratulations!! You won the treasure.\n");
            }
        } 
        else {
            printf("Foolish player, Game Over!\n");
        }
    }

    return 0;
}