#include <stdio.h>

int main() {
    // Variables to store marks for each subject (as integers)
    int physics_assignment, physics_coursework, physics_midterm, physics_endterm;
    int chemistry_assignment, chemistry_coursework, chemistry_midterm, chemistry_endterm;
    int math_assignment, math_coursework, math_midterm, math_endterm;

    // Variables to store the average marks for each subject
    float physics_average, chemistry_average, math_average;
    float overall_average;

    // Input marks for Physics
    printf("Enter marks for Physics:\n");
    printf("Assignment: ");
    scanf("%d", &physics_assignment);
    printf("Course Work: ");
    scanf("%d", &physics_coursework);
    printf("Mid Term: ");
    scanf("%d", &physics_midterm);
    printf("End of Term: ");
    scanf("%d", &physics_endterm);

    // Input marks for Chemistry
    printf("\nEnter marks for Chemistry:\n");
    printf("Assignment: ");
    scanf("%d", &chemistry_assignment);
    printf("Course Work: ");
    scanf("%d", &chemistry_coursework);
    printf("Mid Term: ");
    scanf("%d", &chemistry_midterm);
    printf("End of Term: ");
    scanf("%d", &chemistry_endterm);

    // Input marks for Math
    printf("\nEnter marks for Math:\n");
    printf("Assignment: ");
    scanf("%d", &math_assignment);
    printf("Course Work: ");
    scanf("%d", &math_coursework);
    printf("Mid Term: ");
    scanf("%d", &math_midterm);
    printf("End of Term: ");
    scanf("%d", &math_endterm);

    // Calculate average marks for each subject
    physics_average = (physics_assignment + physics_coursework + physics_midterm + physics_endterm) / 4.0f;
    chemistry_average = (chemistry_assignment + chemistry_coursework + chemistry_midterm + chemistry_endterm) / 4.0f;
    math_average = (math_assignment + math_coursework + math_midterm + math_endterm) / 4.0f;

    // Calculate overall average
    overall_average = (physics_average + chemistry_average + math_average) / 3.0f;

    // Display the results
    printf("\nAverage Marks:\n");
    printf("Physics: %.2f\n", physics_average);
    printf("Chemistry: %.2f\n", chemistry_average);
    printf("Math: %.2f\n", math_average);
    printf("\nOverall Average: %.2f\n", overall_average);

    return 0;
}
