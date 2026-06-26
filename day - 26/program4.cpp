//create quiz application.
#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf(" QUIZ \n");


    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is New Delhi.\n");
    }

    printf("\n2. Who invented c?\n");
    printf("1. trump\n");
    printf("2. amitabh bachhan\n");
    printf("3. dennis ritchie\n");
    printf("4. elon musk\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C.\n");
    }

    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 365\n");
    printf("2. 366\n");
    printf("3. 364\n");
    printf("4. 360\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 366.\n");
    }

    printf("\n4. how many basic data types is in c?\n");
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 4)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 4 \n");
    }

    printf("\n5. What is 10 + 40?\n");
    printf("1. 30\n");
    printf("2. 20\n");
    printf("3. 50\n");
    printf("4. 40\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 50.\n");
    }

    printf("\n===== QUIZ RESULT =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
