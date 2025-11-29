#include <stdio.h>
#include <string.h>
struct Student
{
    int rollnumber;
    char name[30];
    char branch[10];
    float marks;
};
void addStudent();
void displayStudent();
void updateStudent();
void deleteStudent();
int main()
{
    int choice;
    while (1)
    {
        printf("\n========STUDENT CRUD SYSTEM=======\n");
        printf("1.add Student\n");
        printf("2.display Student\n");
        printf("3.update Student\n");
        printf("4.delete Student\n");
        printf("5.exit\n");
        printf("enter choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudent();
            break;
        case 3:
            updateStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            return 0;
        default:
            printf("invalid choice!\n");
        }
    }
}
void addStudent()
{
    FILE *fp = fopen("students.dat", "ab");
    struct Student s;
    printf("enter rollnumber:");
    scanf("%d", &s.rollnumber);
    printf("enter name:");
    scanf("%s", &s.name);
    printf("enter branch:");
    scanf("%s", &s.branch);
    printf("enter marks:");
    scanf("%f", &s.marks);
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("STUDENT ADDED SUCCESSFULLY\n");
}
void displayStudent()
{
    FILE *fp = fopen("students.dat", "rb");
    struct Student s;
    if (!fp)
    {
        printf("no records found!\n");
        return;
    }
    printf("\n---students record---\n");
    while (fread(&s, sizeof(s), 1, fp))
    {
        printf("rollnumber:%d name:%s branch:%s marks:%2.f\n", s.rollnumber, s.name, s.branch, s.marks);
    }
    fclose(fp);
}
void updateStudent()
{

    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Student s;
    int rollnumber, found = 0;
    printf("enter roll number to update:");
    scanf("%d", &rollnumber);
    while (fread(&s, sizeof(s), 1, fp))
    {
        if (s.rollnumber == rollnumber)
        {
            found = 1;
            printf("enter the new name:");
            scanf("%s", &s.name);
            printf("enter the branch:");
            scanf("%s", &s.branch);
            printf("enter the marks:");
            scanf("%f", &s.marks);
        }
        fwrite(&s, sizeof(s), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");
    if (found)
        printf("record updated\n");
    else
        printf("record not found\n");
}
void deleteStudent()
{
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Student s;
    int rollnumber, found = 0;
    printf("enter the rollnumber to delete:");
    scanf("%d", &rollnumber);
    while (fread(&s, sizeof(s), 1, fp))
    {
        if (s.rollnumber==rollnumber){
        found = 1;
        }else{
        fwrite(&s, sizeof(s), 1, temp);
    }
}
fclose(fp);
fclose(temp);
remove("students.dat");
rename("temp.dat", "students.dat");
if (found)
    printf("record deleted successfully\n");
else
    printf("record not found\n");
}
