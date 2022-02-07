#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {

printf("\t\t\t\t\tCe programme calcul la moyenne\n\n");

	float A, Z, E, R, T, Y, U, I, O, P, W, X, AA, C;
	float Q, S, D, F, G, H, J, V, B, N, WX, XW, VC, CV;
	float average;

	printf("Donnez la note d'arabe: ");
	scanf("%f", &A);

	printf("Donnez son coefficien: ");
	scanf("%f", &Q);

    printf("\nDonnez la note d'englais: ");
	scanf("%f", &Z);

	printf("Donnez son coefficient: ");
	scanf("%f", &S);

	printf("\nDonnez la note de francais: ");
	scanf("%f", &E);

	printf("Donnez son coefficient: ");
	scanf("%f", &D);

	printf("\nDonnez la note de math: ");
	scanf("%f", &R);

	printf("Donnez son coefficient: ");
	scanf("%f", &F);

	printf("\nDonnez la note de physique: ");
	scanf("%f", &T);

	printf("Donnez son coefficient: ");
	scanf("%f", &G);

	printf("\nDonnez la note du sport: ");
	scanf("%f", &Y);

	printf("Donnez son coefficient: ");
	scanf("%f", &H);

	printf("\nDonnez la note d'islamique: ");
	scanf("%f", &U);

	printf("Donnez son coefficient: ");
	scanf("%f", &J);

	printf("\nDonnez la note d'philosophie: ");
	scanf("%f", &I);

	printf("Donnez son coefficient: ");
	scanf("%f", &V);

	printf("\nDonnez la note d'sc.de la vie et de la terra: ");
	scanf("%f", &O);

	printf("Donnez son coefficient: ");
	scanf("%f", &B);

	printf("\nDonnez la note d'assiduite et conduite: ");
	scanf("%f", &P);

	printf("Donnez son coefficient: ");
	scanf("%f", &N);

	printf("\nDonnez la note d'traduction: ");
	scanf("%f", &W);

	printf("Donnez son coefficient: ");
	scanf("%f", &WX);

	printf("\nDonnez la note d'espanol:" );
	scanf("%f", &X);

	printf("Donnez son coefficient :");
	scanf("%f", &XW);

	printf("\nDonnez la note d'INFORMATIC: ");
	scanf("%f", &AA);

	printf("Donnez son coefficient: ");
	scanf("%f", &VC);

	printf("\nDonnez la note d'ijtima3yat: ");
	scanf("%f", &C);
	//ma3raftch smitha bfronsi
	printf("Donnez son coefficient: ");
	scanf("%f", &CV);



	  average = ((A*Q)+(Z*S)+(E*D)+(R*F)+(T*G)+(Y*H)+(U*J)+(I*V)+(O*B)+(P*N)+(W*WX)+(X*XW)+(C*CV)+(AA*VC))/(Q+S+D+F+G+H+J+V+B+N+WX+XW+CV+VC);        

	printf("\n\n\t\t\t\t\t\ttotal = %.2f", average);

	average >= 10 ? printf("\n\n\t\t\t\t\t\tYOU SUCCSES") : printf("\n\n\t\t\t\t\t\tYOU NOT SUCCSES");

	printf("\n\nTHANK YOU FOR USING OUR PROGRAM\n");

	system("PAUSE");


}
