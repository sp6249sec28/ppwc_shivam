#include <stdio.h>

int main(){
	char s1[20] = {'S', 'h', 'i', 'v', 'a', 'm', '\0'};
	char s2[20] = {'S', 'o', 'm', 'n', 'a', 't', 'h', '\0'};
	char s3[20] = "Black hole";
	char s4[] = "Computer Science";
	char *cp = "super string";
	char *sp;
	char s5[20];
	char s6[20];
	
	//printf("Enter name of student 5 \n");
	//scanf("%s", s5);
	//printf("%s\n", s5);
	printf("Enter name of student 6 \n");
	//scanf("%[^\n]s", s6);
	fgets(s6, 20, stdin);
	int n = strlen(s4);
	printf("%d\n", s4);
	
	
	//printf("s1[0]: %c, s2[1] = %c, s3[2] = %c, cp[3] = %c",s1[0], s2[1], s3[2], cp[3]);
	//printf("s1: %s\n",s1);
	//printf("s3: %s\n",s3);
	//printf("cp: %s",cp);
}
