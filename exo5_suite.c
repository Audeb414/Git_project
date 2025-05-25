#include <stdio.h>
#include <stdlib.h>
//il s'agit ici d'un programme qui calcule la valeur d'une suite
float suite(int n){
	int i;
	float uo;
	
	uo=5;
	if(n>=1){
		for(i=1;i<=n;i++){
			uo=sqrt(1+uo);
		}
	}
	return uo;
}
C
int x;
float u;
int main() {
	printf("entrer la valeur du terme: ");
	scanf("%d",&x);
	u=suite(x);
	printf("u(%d)=%f",x,u);
	return 0;
}
CODE MODIFIE
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Ajout pour utiliser sqrt()

double suite(int n) {
    double uo = 5; // Initialisation directe
    for (int i = 1; i <= n; i++) {
        uo = sqrt(1 + uo);
    }
    return uo;
}

int main() {
    int x;
    double u;

    printf("Entrez la valeur du terme (>= 0) : ");
    if (scanf("%d", &x) != 1 || x < 0) { // Vérification de la saisie
        printf("Erreur : Veuillez entrer un entier positif.\n");
        return 1;
    }

    u = suite(x);
    printf("u(%d) = %.6f\n", x, u); // Meilleur formatage pour la précision

    return 0;
}

//ajout de derni�re minute
