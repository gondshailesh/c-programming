#include<stdio.h>
int main()
{
    int time;
    printf("enter your time");
    scanf("%d",&time);
   
if (time <= 12) {
  printf("Good morning.");
} else if (time <= 20) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
return 0;
}
