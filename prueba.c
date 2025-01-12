#include <stdio.h>
#include <math.h>
#define MAX 1000


int main(){

float r = 0.0;

float xelem = 0.0;
float yelem = 0.0;
float x_lineal = 0.0;
float y_lineal = 0.0;


float x_temp = 0.0;
float y_temp = 0.0;

float x[MAX] = {}; 
float y[MAX] = {};
float x_minus_x[MAX] = {};
float y_minus_y[MAX] = {};

float products_x_xlineal_y_ylineal = 0.0;
float cubes_x_xlineal = 0.0;
float cubes_y_ylineal = 0.0;



int cantidadx = 0;
int cantidady = 0;

	printf("cuantos datos son para x?: ");
	scanf("%d", &cantidadx);	

	printf("\n");

	printf("cuantos datos son para y?: ");
	scanf("%d", &cantidady);	

	printf("\n");

	for (int i =0; i < cantidadx; i++) {
		printf("deme el numero: %d de x: ", i+1);
		scanf("%f", &xelem);	
		x[i] = xelem;	
	
	printf("\n");
	}

	printf("\n");
	for (int i =0; i < cantidadx; i++) {
		printf("%.2f",x[i]);	
	
	printf("\n");
	}
	
	printf("\n");
	for (int i =0; i < cantidady; i++) {
		printf("deme el numero: %d de y: ", i+1);
		scanf("%f", &yelem);	
		y[i] = yelem;	
	
	printf("\n");
	}

	for (int i =0; i < cantidady; i++) {
		printf("%.2f",y[i]);	
	
	printf("\n");
	}
	
	
	printf("\n");
/////////////////// BASE DONDE HARE LOS CALCULOS LOL 
	
	for (int i = 0; i < cantidadx; i++) {
		x_temp += x[i];	
	}

	printf("%f/%f\n", x_temp, (double)cantidadx);
	x_lineal = x_temp/(double)cantidadx;	

	for (int i = 0; i < cantidady; i++) {
		y_temp += y[i];	
	}
	
	
	printf("%f/%f\n", y_temp, (double)cantidady);
	y_lineal = y_temp/(double)cantidady;

	printf("x lineal: %.2f \n y lineal: %.2f\n", x_lineal, y_lineal);
	
	printf("\n");
/////// DESVIACIONES
	
	for (int i = 0; i < cantidadx; i++) {
		x_minus_x[i] = x[i] - x_lineal;			
	}
	for (int i = 0; i < cantidadx; i++) {
		printf("desviaciones x: %.2f\n", x_minus_x[i]);	
	}
	
	for (int i = 0; i < cantidadx; i++) {
		y_minus_y[i] = y[i] - y_lineal;			
	}

	for (int i = 0; i < cantidadx; i++) {
		printf("desviaciones y: %.2f\n", y_minus_y[i]);	
	}

	printf("\n");

//////// PRODUCTOS Y CUADRADOS

	for (int i = 0; i < cantidadx; i++) {
		products_x_xlineal_y_ylineal += x_minus_x[i] * y_minus_y[i];			
		printf("producto %d: (%.2f)x(%.2f) = %.2f\n", i+1,x_minus_x[i],y_minus_y[i], x_minus_x[i] * y_minus_y[i]);	
	}
	
	for (int i = 0; i < cantidadx; i++) {
		cubes_x_xlineal += pow(x_minus_x[i], 2);			
	
		printf("cruadado x(%d): (%.2f)^2 = %.2f\n",i+1, x_minus_x[i], pow(x_minus_x[i], 2));
	}


	for (int i = 0; i < cantidadx; i++) {
		cubes_y_ylineal += pow(y_minus_y[i], 2);		
		printf("cruadado y(%d): (%.2f)^2 = %.2f\n",i+1, y_minus_y[i], pow(y_minus_y[i], 2));

	}

	printf("\n");
///////// CALCULO COMPLETO Y FINAL
float square_root = sqrt((cubes_x_xlineal*cubes_y_ylineal)); 
	
	
	
	printf("  %.2f\n", products_x_xlineal_y_ylineal);

	printf("------------\n");
	printf("raiz(%.2f x %.2f)\n", cubes_x_xlineal, cubes_y_ylineal);
	r = products_x_xlineal_y_ylineal/square_root;


	printf("\n");

	printf("multiplicacion : %.2f x %.2f = %.2f \n", cubes_x_xlineal, cubes_y_ylineal, cubes_x_xlineal * cubes_y_ylineal);	
	
	printf("\n");
	printf("raiz cuadrada: (%.2f)^2 = %.2f\n", cubes_x_xlineal * cubes_y_ylineal, square_root);	
	
	printf("\n");
	
	printf("  %.2f\n", products_x_xlineal_y_ylineal);
	
	printf("------------\n");
	printf(" %.2f\n",square_root);	
	
	
	printf(" r = %f\n", r);	

	return 0;
}


















