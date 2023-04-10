#include <stdio.h>
int main(){

int nexa, exaa, exa, vexa, ntar, tarr, vtar, tar ,ppar, par, v, alumnos;
float promex, promtar, pexa, ptar, promf;

printf("Introduzca el numero de alumnos: ");
scanf("%d", &alumnos);

printf("Introduzca el numero de examenes que se realizaron: ");
scanf("%d", &nexa);

printf("Introduzca el numero de tareas que se realizaron: ");
scanf("%d", &ntar);

for (v=1;v<=alumnos;v++){
pexa=0;
ptar=0;
printf("\n\n\nREGISTRANDO LAS CALIFICACIONES DEL ALUMNO NUMERO %d ", v);

	for(vexa=1;vexa<=nexa;vexa++){
		printf("\nRegistre la calificacion del examen numero %d: ", vexa);
		scanf("%d", &exaa);
		pexa=pexa+exaa;
	}
	
pexa=pexa/nexa;
promex=(0.7*pexa)*10;
printf("\nEl porcentaje de calificacion en los examenes del alumno es de: %.2f\n", promex);

		for(vtar=1;vtar<=ntar;vtar++){
			printf("\nRegistre la calificacion de la tarea numero %d: ", vtar);
			scanf("%d", &tarr);
			ptar=ptar+tarr;
		}

ptar=ptar/ntar;
promtar=(0.2*ptar)*10;
printf("\nEl porcentaje de calificacion en las tareas del alumno es de: %.2f\n", promtar);

printf("\n\nIntroduzca la cantidad de participaciones: ");
scanf("%d", &par);
			
			if(par>=5){
				ppar=10;
				printf("\nEl porcentaje de calificacion en las participaciones del alumno es del 10 porciento");
			}
			else{
				ppar=0;
				printf("\nEl porcentaje de calificacion en las participaciones del alumno es del 0 porciento");
				}

promf=(promex+promtar+ppar)/10;
printf("\n\n\nEl alumno numero obtuvo un promedio final de: %.2f", promf);
		if(promf>=6){
		printf("\nY por lo tanto, el alumno esta APROBADO");
	}
		else {
		printf("\nY por lo tanto, el alumno esta REPROBADO");
		}	
			}

}
