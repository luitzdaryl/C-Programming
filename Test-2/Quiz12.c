#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

const char* FILENAME = "./Quiz12.txt";

int main(int argc, char** argv) {
	FILE* in = fopen(FILENAME, "r");
	int cases = 0;
	fscanf(in, "%d\n", &cases);
	while (cases--) {
		int m, n, q;
		// allocate memory and scanf
		fscanf(in, "%d %d %d\n", &m, &n, &q);
        char c;
		char** mat = (char**) malloc(m * sizeof(char*));
		for (int i = 0; i < m; i++) {
			mat[i] = (char*) malloc(n * sizeof(char));
			for (int j = 0; j < n; j++) {
				fscanf(in, "%c", &mat[i][j]);
                // printf("%c", mat[i][j]);
			}
            fscanf(in, "%c", &c);
            // printf("\n");
		}
		printf("%d %d %d\n", m, n, q);
		// do stuff
		for (int t = 0; t < q; t++) {
			int r, c;
			fscanf(in, "%d %d", &r, &c);
            int ans = 1;
            for (int i = 0; i <= m || i <= n; i++)
            {
                int flag = 1;
                for (int j = r - i; j <= r + i; j++)
                {
                    for (int k = c - i; k <= c + i; k++)
                    {
                        if (j < 0 || k < 0 || j >= m || k >= n)
                        {
                            flag = 0;
                            break;
                        }
                        if (mat[j][k] != mat[r][c])
                        {
                            flag = 0;
                            //break;
                        }
                    }
                }
                if (flag)
                {
                    ans = 2 * i + 1;
                }
                else
                {
                    break;
                }
            }
            printf("%d\n", ans);
		}
		// free memory
		for (int i = 0; i < m; i++)
			free(mat[i]);
		free(mat);
	}
	system("pause");
	return 0;
}