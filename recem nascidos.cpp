#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
	
int qtcriancas=0, qtprematuro=0, qtprefem=0, qtpremasc=0;
char sexo;
int diasincub;
float porcentpre, porcentfem, porcentmasc;
float mediaincub; 
int totaldincub = 0;
int maiordia=0;

printf("\n entre com a quantdade de criancas nascidas no periodo:");
scanf("%d",&qtcriancas);
printf("\n entre com a quantidade de prematuros desse periodo:");
printf("\n entre com o sexo do prematuro(m/f) ou x para fim:");
sexo = getche();

while (sexo != 'x'){
	
	
printf("\n quantidade de dias na incubadora:");
scanf("%d",&diasincub);
qtprematuro++;
totaldincub += diasincub;



if(sexo == 'm')
qtpremasc++;

else qtprefem++;


if  (maiordia < diasincub){
     maiordia = diasincub;
	 
	 }

printf("\n entre com o sexo do prematuro(m/f) ou x para fim:");
sexo = getche();



}

porcentpre = (qtprematuro*100)/qtcriancas;

porcentfem = (qtprefem*100)/qtprematuro;

porcentmasc = (qtpremasc*100)/qtprematuro;

mediaincub = (totaldincub*1.)/qtprematuro;

printf("\n porcentagem de recem nascidos prematuros = %f",porcentpre);
printf("\n porcentagem de prematuros meninas = %f e meninos = %f",porcentfem,porcentmasc);
printf("\n media de dias de permanencia dos recem nascidos prematuros na incubadora = %5.2f",mediaincub);
printf("\n o maior numero de dias que um recem nascido permaneceu na incubadora = %d",maiordia);









}

