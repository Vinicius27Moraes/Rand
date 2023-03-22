#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int v1[10]; //vetor


void sorteia();
void apresenta();
int maior();
//---------------------------------
int main () {
  srand(time(NULL));
  sorteia();
  apresenta(); 
  printf("maior elemento %d \n",maior());   
  printf("\n\n\n");
  system("pause");
  return 0;
}
//------------------------------------
void sorteia(){
int x,y,tmp;
bool existe;
  for (x=0; x<10; x++){
   do{
     tmp=rand()%100;
     existe=false;
     for (y=0; y<x; y++){
       if (tmp==v1[y]){
         existe=true;
       }    
     }
   }while (existe==true); 
   v1[x]=tmp;    
  }  
}
//---------------------------------
void apresenta(){
 for (int x=0; x<10; x++){
    printf("%d \n",v1[x]);  
  } 
}
//---------------------------------
int maior(){
int m,x;    
  m=-1;  
  for (x=0; x<10; x++){
    if (v1[x]>m) 
       m=v1[x];    
  }
  return m;
}