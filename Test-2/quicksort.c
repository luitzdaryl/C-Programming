#include<stdio.h>

int data[1000];

int Quick_Sort(int left,int right){
    if(left < right){
        int i = left + 1, j = right, splitting = data[left], temp;
        do{
            while(i < right && data[i] <= splitting) i++;
            while(j > left && data[j] > splitting) j--;
            if(i < j){
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
            }
        }while(i < j);
        temp = data[j];
        data[j] = data[left];
        data[left] = temp;
        Quick_Sort(left, j - 1);
        Quick_Sort(j + 1, right);
    }
}
int main(){
    int i, num;

    printf("how many number do you want to be sorted?");
    scanf("%d",&num);

    printf("number will be sorted:");
    for(i=0;i<num;i++){
        scanf("%d",&data[i]);
    }

    Quick_Sort(0, num - 1);
    
    printf("in sorted order:");
    for(i=0;i<num;i++){
        printf("%d ",data[i]);
    }

    return 0;
}