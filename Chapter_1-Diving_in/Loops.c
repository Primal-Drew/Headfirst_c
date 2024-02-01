#include <stdio.h>

int main() {
    for (int counter = 1; counter < 6; counter++) {
        int x = 0;
        int y = 0;

        for (int i = 0; i < 5; i++) {
            if (counter == 1) {
                if (y < 5) {
                    x = x + 1;
                    if (y < 3)
                        x = x - 1;
                }
                y = y + 2;
            } else if (counter == 2) {
                x = x + 1;
                y = y + x;
            } else if (counter == 3) {
                y = y + 2;
                if (y > 4)
                    y = y - 1;
            } else if (counter == 4) {
                y = y + x;
            } else if (counter == 5) {
                y = x - y;
            }

            printf("%d%d ", x, y);
        }
        printf("\n");
    }

    return 0;
}
