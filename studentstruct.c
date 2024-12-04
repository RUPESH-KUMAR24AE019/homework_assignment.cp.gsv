// Structure for Student Information
typedef struct {
    char name[50];
    int roll;
    float cgpa;
} Student;

// Function to find highest and lowest CGPA
void findHighestLowest(Student students[], int n) {
    int highestIdx = 0, lowestIdx = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].cgpa > students[highestIdx].cgpa)
            highestIdx = i;
        if (students[i].cgpa < students[lowestIdx].cgpa)
            lowestIdx = i;
    }
    printf("Student with Highest CGPA: %s (%.2f)\n", students[highestIdx].name, students[highestIdx].cgpa);
    printf("Student with Lowest CGPA: %s (%.2f)\n", students[lowestIdx].name, students[lowestIdx].cgpa);
}
void main()
{
int n = 3;
    Student students[3] = {
        {"Alice", 101, 9.1},
        {"Bob", 102, 8.5},
        {"Charlie", 103, 9.8}
    };
    findHighestLowest(students, n);
}