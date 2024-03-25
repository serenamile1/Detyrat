#include<stdio.h>
int main() {
  int n;
  int piket=0;
  char x1='C', x2='C',x3='C';//Celsat ne gjendjen e tyre fillestare
  printf("Tregoni numrin e hedhjeve:");
  scanf("%d",&n);
  for (int i=0;i<n;++i){
    printf("hedhja %d: Tregoni porten (A ose B):",i+1);
    char port;
    scanf("%c",&port);
    
    if(port=='A' ||
      port =='B'){
      if(x1=='C'&& x3=='C'){
        x1='B';
        x3='B';
      } else {
        x1='C';
        x3='C';
          }
      }
 
    if(x2=='C')x2 ='B';
    else x2='C';
    
    if(i==0){
      x1='C';
      x2='C';
      x3='C';
    }
    if (port=='B'){
      piket++;
    }
  
  }
  printf("Piket totale:%d\n",piket);
  return 0;
}