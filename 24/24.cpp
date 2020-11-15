#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double x[3], y[3], area[1];
FILE* fp;

void Square() {

	printf("Square Area \n");
	printf("Input Side length = ");
	scanf("%lf", &x[0]);
	printf("Area of Square = %.2lf", area[0] = fabs((x[0] * x[0])));
	fprintf(fp, "Square Area \nLength = %lf \nArea of Square = %.2lf\n\n", x[0], area[0]);
}

void Rhombus() {

	printf("Rhombus Area \n");
	printf("Input diagonal 1 = ");
	scanf("%lf", &x[0]);
	printf("Input diagonal 2 = ");
	scanf("%lf", &y[0]);
	printf("Area of Rhombus = %.2lf", area[0] = fabs(0.5 * (x[0] * y[0])));
	fprintf(fp, "Rhombus Area \nDiagonal = %lf, %lf \nArea of Rhombus = %.2lf\n\n", x[0], y[0], area[0]);
}
void Paralellogram() {

	printf("Paralellogram Area \n");
	printf("Input base = ");
	scanf("%lf", &x[2]);
	printf("Input high = ");
	scanf("%lf", &y[1]);
	printf("Area of Paralellogram = %.2lf", area[0] = fabs(x[2] * y[1]));
	fprintf(fp, "Paralellogram Area \nBase = %lf \nHigh = %lf \nArea of Paralellogram = %.2lf\n\n", x[2], y[1], area[0]);
}

int main() {
	int num;
	printf("1.Square Area\n2.Rhombus Area\n3.Paralellogram  Area\n");
	printf("Enter 1-3: ");
	scanf("%d", &num);

	fp = fopen("square.txt", "a+t");
	if (fp == NULL) {
		printf("NOT FOUND!");
	}
	else {

		if (num == 1) {

			Square();

		}
		else if (num == 2) {
			
			Rhombus();
		}
		else if (num == 3) {

			Paralellogram();

		}
		else {
			printf("enter wrong number");
		}
		fclose(fp);
	}



	return 0;
}