#include <stdio.h>
int main() {
    // Declare variables for marks of each subject
    float physicsMarks[4], chemistryMarks[4], mathMarks[4];
    float avgPhysics, avgChemistry, avgMath;
    float totalMarksPhysics = 0, totalMarksChemistry = 0, totalMarksMath = 0;
    
    // Input marks for Physics
    printf("Enter marks for Physics (Assignment, Coursework, Mid-term, End-of-term):\n");
    for (int i = 0; i < 4; i++) {
        printf("Test %d: ", i+1);
        scanf("%f", &physicsMarks[i]);
        totalMarksPhysics += physicsMarks[i];
    }
    
    // Input marks for Chemistry
    printf("Enter marks for Chemistry (Assignment, Coursework, Mid-term, End-of-term):\n");
    for (int i = 0; i < 4; i++) {
        printf("Test %d: ", i+1);
        scanf("%f", &chemistryMarks[i]);
        totalMarksChemistry += chemistryMarks[i];
    }
    
    // Input marks for Math
    printf("Enter marks for Math (Assignment, Coursework, Mid-term, End-of-term):\n");
    for (int i = 0; i < 4; i++) {
        printf("Test %d: ", i+1);
        scanf("%f", &mathMarks[i]);
        totalMarksMath += mathMarks[i];
    }
    
    // Calculate averages
    avgPhysics = totalMarksPhysics / 4;
    avgChemistry = totalMarksChemistry / 4;
    avgMath = totalMarksMath / 4;

    // Output the average marks for each subject
    printf("\nAverage marks for Physics: %.2f\n", avgPhysics);
    printf("Average marks for Chemistry: %.2f\n", avgChemistry);
    printf("Average marks for Math: %.2f\n", avgMath);

    // Overall average
    float overallAverage = (avgPhysics + avgChemistry + avgMath) / 3;
    printf("\nOverall average marks: %.2f\n", overallAverage);




    return 0;
}