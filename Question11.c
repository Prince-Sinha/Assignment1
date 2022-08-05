#include<stdio.h>
int main(){
    int hour,min;
    printf("Enter the hour and minute in (HH:MM): ");
    scanf("%d:%d",&hour,&min);
    printf("%d hour and %d Minute",hour,min);
    return 0;
}