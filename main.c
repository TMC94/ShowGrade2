#include <stdio.h>
#include <stdlib.h>

/* Prototype */
void showLetterGrade(float);

int main()
{
    int ScoreMaxA = 100;
    int ScoreMinA = 90;
    int ScoreMaxB = 89.9;
    int ScoreMinB = 80;
    int ScoreMaxC = 79.9;
    int ScoreMinC = 70;
    int ScoreMaxD = 69.9;
    int ScoreMinD = 60;
    int ScoreMaxF = 59.9;
    int ScoreMinF = 0;


    int score;

    printf("Enter your score: ");
    scanf("%d", &score);
    showLetterGrade(score);

    return 0;
}

void showLetterGrade(float score)
{
    if (score >= ScoreMinA && score <= ScoreMaxA)
     {
         printf("A");
     }
     else if (score >= ScoreMinB && score <= ScoreMaxB)
     {
         printf("B");
     }
    else if (score >= ScoreMinC && score <= ScoreMaxC)
     {
         printf("C");
     }
    else if (score >= ScoreMinD && score <= ScoreMaxD)
     {
         printf("D");
     }
     else if (score >= ScoreMinF && score <= ScoreMaxF)
     {
         printf("F");
     }
    else
    {
        printf("That is not a valid score!");
    }
}
