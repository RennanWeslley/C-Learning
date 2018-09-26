#include <stdio.h>
#include <sstream>

int main() {
    FILE *f = fopen("dij10.txt", "r");

    if(!f) {
        printf("Arquivo nao pode ser aberto.\n");
        return -1;
    }

    std::string s;
    char c;
    int sz;

    while(1) {
        c = getc(f);

        if(c == '\n')
            break;

        s += c;
    }

    std::istringstream num(s);

    num >> sz;

    int arr[sz][sz];

    for(int i = 0; i < sz; i++)
        for(int j = 0; j < sz; j++)
            arr[i][j] = 0;

    arr[0][0] = sz;

    s = "";

    for(int i = sz-1, j = 0, n; i > 0; j = 0, n = 0, s = "", i--) {
        while(1) {
            c = getc(f);

            if(c == '\n') {
                std::istringstream line(s);
                line >> n;

                arr[i][j] = n;

                break;
            }

            if(c == ' '){
                std::istringstream line(s);
                line >> n;

                arr[i][j] = n;

                n = 0;
                s = "";
                j++;

                continue;
            }

            s += c;
        }
    }

    fclose(f);

    for(int i = 0; i < sz; printf("\n"), i++)
        for(int j = 0; j < sz; j++)
            if(arr[i][j])
                printf("%5d ", arr[i][j]);

    printf("\n\n");

    for(int i = 0, j = 0; i < sz; i++, j++)
        printf("%d ", arr[i][j]);

    printf("\n\n");

    return 0;
}
