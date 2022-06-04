#include<stdio.h>
int main()
{
	int eng, bang, chem, phy, bio, aggregate;
	float percentange;
	
	printf("Enter the marks of English:");
	scanf("%d", &eng);
	
	printf("Enter the marks of Bangla:");
	scanf("%d", &bang);
	
	printf("Enter the marks of Chemistry:");
	scanf("%d", &chem);
	
	printf("Enter the marks of Physics:");
	scanf("%d", &phy);
	
	printf("Enter the marks of Biology:");
	scanf("%d", &bio);
	
	aggregate= eng+bang+chem+phy+bio;
	percentange= aggregate*(100.00/500.00);
	
	printf("Aggregate marks obtainted by students=%d\n", aggregate);
	printf("Percentange of students=%.2f\n", percentange);
	
	return 0 ;
}
