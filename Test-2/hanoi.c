#include<stdio.h>
#include<math.h>

int disk=0;
long step=0;
long steps=0;

void move (int n,char begin,char dest){
    steps++;
    if(steps==step){
        printf("Disk %d move from %c to %c.",n,begin,dest);
    }
}
void hanoi (int n,char begin,char midd,char dest){

    if(n<=0) return;
    
    hanoi(n-1,begin,dest,midd);
    move(n,begin,dest);
    hanoi(n-1,midd,begin,dest);

}

int main(){
    disk=0;
    step=0;

    printf("how many disks do you select?");
    scanf("%d",&disk);

    if(disk<=0){
        printf("invalid step number");
        return 0;
    }

    printf("which steep do you want to print?");
    scanf("%d",&step);

    if(step>pow(2,disk)-1){
        printf("step out of range");
        return 0;
    }

    hanoi(disk,'A','B','C');

    return 0;

}