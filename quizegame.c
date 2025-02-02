#include<stdio.h>
int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5;
    int point01,point02,point03,point04,point05;                  
    printf(" welcome to the game\n\n");
    printf(" >press 7 to start the game\n");
    printf("> press 0 to quit the game\n");
    scanf("%d",&i);
    if(i==7) {
        printf("the game has started\n\n");
    }
    else if(i==0) {
        printf("the game has ended\n\n");
    }
    else {
        printf("invalid\n\n");
    }
    if(i==7) {
        printf("1) where is priyanshu's house?\n\n");
        printf("1) pryagraj\n");
        printf("2) ghazipur\n");
        printf("3) lucknow\n");
        printf("4) ayodhya\n");
        printf("enter your answer:");
        scanf("%d",&ans1);
        if(ans1==2) {
            printf("correct answer \n");
            point1 = 5;
            printf("you have scored %d point \n",point1);
        }
        else {
            printf("wrong answer\n");
            point01 = 0;
            printf("you have scored %d point \n",point01);
        }

        printf("2) how many letters are there in apple?\n\n");
        printf("1) 3\n");
        printf("2) 4\n");
        printf("3) 2\n");
        printf("4) 5\n");
         printf("enter your answer:");
         scanf("%d",&ans2);
         if(ans2==4) {
            printf("correct answwer \n");
            point2=5;
            printf("you have scored %d point\n",point2);
         }
         else
         {
            printf("wrong answer\n");
            point02 = 0;
            printf("you have scored %d point\n",point02);
         }
 printf("3) how many letters are there in priyanshu?\n\n");
        printf("1) 6\n");
        printf("2) 4\n");
        printf("3) 9\n");
        printf("4) 2\n");
         printf("enter your answer:");
         scanf("%d",&ans3);
         if(ans3==3) {
            printf("correct answwer \n");
            point3=5;
            printf("you have scored %d point\n",point3);
         }
         else
         {
            printf("wrong answer\n");
            point03 = 0;
            printf("you have scored %d point\n",point03);
         }
          printf("4) how many letters are there in science?\n\n");
        printf("1) 7\n");
        printf("2) 4\n");
        printf("3) 2\n");
        printf("4) 5\n");
         printf("enter your answer:");
         scanf("%d",&ans3);
         if(ans4==1) {
            printf("correct answwer \n");
            point4=5;
            printf("you have scored %d point\n",point4);
         }
         else
         {
            printf("wrong answer\n");
            point04 = 0;
            printf("you have scored %d point\n",point04);
         }
          printf("5) how many letters are there in chemistry?\n\n");
        printf("1) 7\n");
        printf("2) 8\n");
        printf("3) 9\n");
        printf("4) 10\n");
         printf("enter your answer:");
         scanf("%d",&ans5);
         if(ans5==3) {
            printf("correct answwer \n");
            point5=5;
            printf("you have scored %d point\n",point5);
         }
         else
         {
            printf("wrong answer\n");
            point05 = 0;
            printf("you have scored %d point\n",point05);
         }
    }
    return 0;

}