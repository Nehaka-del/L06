#include <stdio.h>
int main() {
    int numbers[]={10,20,35,40,50,75,60};
    int size=sizeof(numbers)/sizeof(numbers[0]);

    int max=numbers[0];

    for(int i=1;i<size;i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
    }

    int min=numbers[0];

    for(int i=1;i<size;i++) {
        if(numbers[i]<min) {

        }
    }

    printf("The largest number is:%d\n",max);
    printf("The smallest number is:%d\n",min);
    return 0;
}

