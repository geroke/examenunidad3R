#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
main(){
int n,r;

gotoxy(10,2);cout<<"hola mundo :v";
gotoxy(10,7);cout<<"dame un numero ";
cin>>n;
r=n%2;
if(r==0){
 gotoxy(10,8);cout<<"par";
}
if(r>0){
 gotoxy(10,8);cout<<"impar";
}
if(r<0){
 gotoxy(10,9);cout<<"nulo";
}
getch();
}
