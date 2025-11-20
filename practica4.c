#include <stdio.h>

typedef struct {
    char nombre[50];
int matricula;
float calif[4];
float promedio;
} Estudiante;

void capturarEstudiante(Estudiante *est);
void calcularPromedio(Estudiante *est);
void mostrarEstudiante(Estudiante est);

int main(){
    Estudiante grupo[3];
		
	printf("=== SISTEMA DE GESTIÓN ACADÉMICA ===\n");
	
	// Capturar datos de 3 estudiantes
	for(int i = 0; i < 3; i++) {
		printf("\nEstudiante %d:\n", i+1);
		capturarEstudiante(&grupo[i]);
	}
	
	// Mostrar todos los estudiantes
	printf("\n=== LISTA COMPLETA DE ESTUDIANTES ===\n");
	for(int i = 0; i < 3; i++) {
		mostrarEstudiante(grupo[i]);
	
	
	// Encontrar el mejor promedio
	int mejorIndex = 0;
		for(int i = 1; i < 3; i++){
	    if(grupo[i].promedio > grupo[mejorIndex].promedio){
	        mejorIndex = i;
		}
		}
	
	
	printf("\n=== ESTUDIANTE CON MEJOR PROMEDIO ===\n");
	printf("Nombre: %s\n", grupo[mejorIndex].nombre);
	printf("Promedio: %.2f\n", grupo[mejorIndex].promedio);
	
	return 0;
}

void capturarEstudiante(Estudiante *est) {
	 printf("Ingrese nombre: ");
    scanf("%s", est->nombre);

	  printf("Ingrese matricula: ");
    scanf("%d", &est->matricula);

    for(int i = 0; i < 4; i++){
        printf("Ingrese calificacion %d: ", i+1);
        scanf("%f", &est->calif[i]);
}
 calcularPromedio(est);

void calcularPromedio(Estudiante *est) {
	// Calcular: suma de calificaciones / 4
	 float suma = 0;
    for(int i = 0; i < 4; i++){
        suma += est->calif[i];
}
est->promedio = suma / 4;
}

void mostrarEstudiante(Estudiante est) {
	//nombre del estudiante
	//matricula del estudiante
	//calificaciones del estudiante
	//promedio del estudiante
	printf("\n--- Información del Estudiante ---\n");
	printf("Nombre: %s\n", est.nombre);
	printf("Matricula: %d\n", est.matricula);

	for(int i = 0; i < 4; i++){
	    printf("Calificación %d: %.2f\n", i+1, est.calif[i]);
}
printf("Promedio: %.2f\n", est.promedio);
}

