#include <stdio.h>

int main(){
	int n, score;
	int a,b,c,f;
	printf("Enter the number of student : ");
	scanf("%d", &n);
	
	printf("Enter the scores : ");
	for (int i=0; i<n; i++){
		scanf("%d", &score);
		if (score<0 || score>100){
			printf("Invalid Score !!");
		}
		if(score >=  80){
			a++;
		}
		else if(score<80 && score>=65){
			b++;
		}
		else if(score<65 && score>=40){
			c++;
		}
		else {
			f++;
		}
	}
	printf("Number of students with grade 'A' : %d\n", a);
	printf("Number of students with grade 'B' : %d\n", b);
	printf("Number of students with grade 'C' : %d\n", c);
	printf("Number of students with grade 'F' : %d\n", f);
	
	return 0;
}
