#include <stdio.h> 
#include <stdlib.h>
#define PI 3.14

int main(){
	
	int r1,r2;
	double area1,area2;
	double total , diff; 
	
	printf("計算圓面積 \n\n");
	printf("Input radius of first circle : ");
	scanf("%d",&r1);
	

	area1 = PI * r1 * r1;
	printf("第一個圓的面積 : %.2f\n\n",area1); 
	
	
	printf("Input radius of two circle : ");
	scanf("%d",&r2);
	

	area2 = PI * r2 * r2;
	printf("第二個圓的面積 : %.2f\n\n",area1);
	
	total = area1 + area2;
	diff = area1 -area2; 
	
	
	printf("面積總和 : %.2f\n",total);
	printf("Difference is %.2f\n",diff);
	
	
	system("PAUSE");
	return 0;

} 
