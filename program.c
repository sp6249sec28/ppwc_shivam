#include <stdio.h>
#include <string.h>

struct student{
    char *name;
    int rollno;
    float marks;
};
int main(){
    struct student s2;
    struct student *p=&s2;
    
    p -> name= (char*)malloc(30*sizeof(char));
    
    if(p->name ==NULL){
        printf("Memory not allocated");
        exit(1);
    }
    printf("Enter the name of the student:\n");
    fgets(p->name,30,stdin);
    printf("Enter the roll no of the student:\n");
    scanf("%d", &p->rollno);
    printf("Enter the marks of the student:\n");
    scanf("%f", &p->marks);
    
    printf("Student details : \n");
    printf("Name: %s", p->name);
    printf("Roll no: %d\n", p->rollno);
    printf("Marks: %.2f", p->marks);
}