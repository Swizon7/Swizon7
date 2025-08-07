#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Marks_reportCard{
    char subject[50];
    float marks;
    char grade[6];
    
};
int main()
{
    float total=0;
    int average;
    char grade;
    struct Marks_reportCard s[5];
    char Sname[60];
    printf("\nEnter a name:");
    scanf("%s",Sname);
    for(int i=0;i<=4;i++){
    printf("Enter a marks record %d",i+1);
    printf("\nEnter a Subject:\t");
    scanf("%s",s[i].subject);
    printf("Enter a marks:\t");
    scanf("%f",&s[i].marks);

    
    if (s[i].marks >= 90) {
    strcpy(s[i].grade, "A+");
} else if (s[i].marks >= 80) {
    strcpy(s[i].grade, "A");
} else if (s[i].marks >= 70) {
    strcpy(s[i].grade, "B+");
} else if (s[i].marks >= 60) {
    strcpy(s[i].grade, "B");
} else if (s[i].marks >= 50) {
    strcpy(s[i].grade, "C");
} else {
    strcpy(s[i].grade, "F");
}
}
    
    printf("\n\n\t\t\t\t\t Jana Bhawana Campus\n");
    printf("\t\t\t\tGodawari-11, Chappagaun, Lalitpur\n");
    printf("\t\t\t\t\t Marks report Card\n\n");
    printf("\nsubject\t\t\tMarks\t\t\tGrade\n");
    printf("___________________________________________________\n");
    for(int i=0;i<=4;i++){
       // printf("%s\t\t\t%f\t\t\t%s\n",s[i].subject,s[i].marks,s[i].grade);
        printf("%-25s %-10.2f \t\t%-5s\n", s[i].subject, s[i].marks, s[i].grade);
        total=total+s[i].marks;
        average=total/5;
        
    }
    printf("\n...................................................\n");
    printf("\n Total:%f",total);
    printf("\nAverage:%d\n",average);
    getch();
    return 0;
}