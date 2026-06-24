#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct address_t {
	int x;
	int y;
	int z;
	int m;
	char name[20];
};

int main() {
	struct address_t n[100];
	int i=1, j, k;
	char ad[100]={' '};
	char ads[200][100]={" "};
	gets(ad);

	sscanf(ad, "%d.%d.%d.%d %s", &n[0].x, &n[0].y, &n[0].z, &n[0].m, n[0].name);

	while(strcmp(ad, "0.0.0.0 none")!=0){
		gets(ad);
		sscanf(ad, "%d.%d.%d.%d %s", &n[i].x, &n[i].y, &n[i].z, &n[i].m, n[i].name);
		i++;
	}

	for(j=0; j<i; j++) {
		for(k=j+1; k<i; k++) {
			if(n[j].x==n[k].x && n[j].y==n[k].y) {
				printf("Machines %s and %s are on the same local network.\n", n[j].name, n[k].name);
			}
		}
	}

	return 0;
}
