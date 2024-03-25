#include <stdio.h>

char konverto_noten(int nota_numerike) { //Inicializimi i te dhenave 
    int shifra_dhjeteshe = nota_numerike / 10; // Merr shifrën në pozicionin e dhjetësheve
char nota;
    switch(shifra_dhjeteshe) {
        case 10:
        case 9:
            nota= 'A';
  break;//Per te dale nga struktura switch
        case 8:
           nota= 'B';
  break;

        case 7:
            nota= 'C';
  break;
        case 6:
            nota= 'D';
  break;
        default:
            nota= 'E';
    }
 
  return nota;
  
}

int main() {
  int nota_numerike ;
  char nota_shkronje;
   
  printf("jepni noten ne forme numerike:");//Merr te dhenat nga perdoruesi
  scanf("%d",&nota_numerike);

    nota_shkronje=konverto_noten(nota_numerike);//Kthen noten nga numerike ne note me shkronje
    

    printf("Nota me shkronjë: %c\n", nota_shkronje);

    return 0;
}