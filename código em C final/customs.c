#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "customs.h"


int TRIOR(int A, int B, int C){

	if(A == 1 || B == 1 || C == 1) return 1;
	else return 0;
}


int TETRAOR(int A, int B, int C, int D){
	
	if(A == 1 || B == 1 || C == 1 || D == 1) return 1;
	else return 0;
}


int PENTAOR(int A, int B, int C, int D, int E){
	
	if(A == 1 || B == 1 || D == 1 || E == 1 || C == 1) return 1;
	else return 0;
}

int HEXAOR(int A, int B, int C, int D, int E, int F){
	
	if(A == 1 || B == 1 || D == 1 || E == 1 || C == 1 || F == 1) return 1;
	else return 0;
}

int HEPTAOR(int A, int B, int C, int D, int E, int F, int G){
	
	if(A == 1 || B == 1 || D == 1 || E == 1 || C == 1 || F == 1 || G == 1) return 1;
	else return 0;
}

int OCTOR(int A, int B, int C, int D, int E, int F, int G, int H){
	
	if(A == 1 || B == 1 || D == 1 || E == 1 || C == 1 || F == 1 || G == 1 || H == 1) return 1;
	else return 0;
}

int ENEAOR(int A, int B, int C, int D, int E, int F, int G, int H, int I){
	
	if(A == 1 || B == 1 || D == 1 || E == 1 || C == 1 || F == 1 || G == 1 || H == 1 || I == 1) return 1;
	else return 0;
}

int DECAOR(int A, int B, int C, int D, int E, int F, int G, int H, int I, int J){
	
	if(A == 1 || B == 1 || D == 1 || E == 1 || C == 1 || F == 1 || G == 1 || H == 1 || I == 1 || J == 1) return 1;
	else return 0;
}

int TRIAND(int A, int B, int C){
	
	if(A == 1 && B == 1 && C == 1) return 1;
	else return 0;
}

int TETRAND(int A, int B, int C, int D){
	
	if(A == 1 && B == 1 && C == 1 && D == 1) return 1;
	else return 0;
}

int HEXAND(int A, int B, int C, int D, int E, int F){
	
	if(A == 1 && B == 1 && C == 1 && D == 1 && E == 1 && F == 1) return 1;
	return 0;
}

int HEPTAND(int A, int B, int C, int D, int E, int F, int G){
	
	if(A == 1 && B == 1 && C == 1 && D == 1 && E == 1 && F == 1 && G == 1) return 1;
	return 0;
}


int N(int A){
	
	if(A == LIG) return DES;
	else return LIG;
}




//-----------------------------------------------------------



int alternar(int A){
	
	if(A == LIG) return DES;
	else return LIG;
}


int interfac(int W, int E, int R, int T, int S, int D, int F, int G, int Z, int X, int C, int V, int B){
	
	gotoxy(2,1);
	printf("0%d%d%d%d",W,E,R,T);
	gotoxy(1,2);
	printf("+0%d%d%d%d",S,D,F,G);
	gotoxy(1,3);
	printf("------------");
	gotoxy(2,4);
	printf("%d%d%d%d%d",Z,X,C,V,B);
	
	printf("\n\nAs teclas mostradas abaixo, como A, Z, ou W, representam os segmentos de cada display, pressione!");
	
	return 0;
}


void digital(int HS, int HC, int HI, int VES, int VEI, int VDS, int VDI, int overflow){
	
	int chaA = 32, chaB = 32, chaC = 32, chaD = 32, chaE = 32, chaF = 32, chaG = 32, chaOV = 32;
	
	if(VES) chaA = 219;
	if(VEI) chaF = 219;
	if(VDS) chaC = 219;
	if(VDI) chaD = 219;
	if(HS) chaB = 219;
	if(HC) chaG = 219;
	if(HI) chaE = 219;
	if(overflow) chaOV = 219;
		
	gotoxy(80,15);
	printf("%c%c",chaA,chaA);
	gotoxy(80,16);
	printf("%c%c",chaA,chaA);
	
	gotoxy(80,18);
	printf("%c%c",chaF,chaF);
	gotoxy(80,19);
	printf("%c%c",chaF,chaF);
	
	gotoxy(87,15);
	printf("%c%c",chaC,chaC);
	gotoxy(87,16);
	printf("%c%c",chaC,chaC);
	
	gotoxy(87,18);
	printf("%c%c",chaD,chaD);
	gotoxy(87,19);
	printf("%c%c",chaD,chaD);	
	
	gotoxy(82,14);
	printf("%c%c%c%c%c",chaB,chaB,chaB,chaB,chaB);
	
	gotoxy(82,20);
	printf("%c%c%c%c%c",chaE,chaE,chaE,chaE,chaE);
	
	gotoxy(82,17);
	printf("%c%c%c%c%c",chaG,chaG,chaG,chaG,chaG);
	
	gotoxy(73,15);
	printf("%c%c",chaOV,chaOV);
	gotoxy(73,16);
	printf("%c%c",chaOV,chaOV);
	
	gotoxy(73,18);
	printf("%c%c",chaOV,chaOV);
	gotoxy(73,19);
	printf("%c%c",chaOV,chaOV);
	
	return;
}



void digital1(int HS, int HC, int HI, int VES, int VEI, int VDS, int VDI){									//73
	
	
	int chaA = 32, chaB = 32, chaC = 32, chaD = 32, chaE = 32, chaF = 32, chaG = 32;
	
	if(VES) chaA = 219;
	if(VEI) chaF = 219;
	if(VDS) chaC = 219;
	if(VDI) chaD = 219;
	if(HS) chaB = 219;
	if(HC) chaG = 219;
	if(HI) chaE = 219;
		
	gotoxy(5,15);
	printf("%c%c",chaA,chaA);
	gotoxy(3,16);
	printf("A %c%c",chaA,chaA);
	
	gotoxy(5,18);
	printf("%c%c",chaF,chaF);
	gotoxy(3,19);
	printf("Z %c%c",chaF,chaF);
	
	gotoxy(12,15);
	printf("%c%c",chaC,chaC);
	gotoxy(12,16);
	printf("%c%c D",chaC,chaC);
	
	gotoxy(12,18);
	printf("%c%c",chaD,chaD);
	gotoxy(12,19);
	printf("%c%c C",chaD,chaD);	
	
	gotoxy(7,13);
	printf("  W");
	gotoxy(7,21);
	printf("  X");
	gotoxy(7,16);
	printf("  S");
	
	gotoxy(7,14);
	printf("%c%c%c%c%c",chaB,chaB,chaB,chaB,chaB);
	
	gotoxy(7,20);
	printf("%c%c%c%c%c",chaE,chaE,chaE,chaE,chaE);
	
	gotoxy(7,17);
	printf("%c%c%c%c%c",chaG,chaG,chaG,chaG,chaG);
	
	return;
}


void digital2(int HS, int HC, int HI, int VES, int VEI, int VDS, int VDI){
	
	
	int chaA = 32, chaB = 32, chaC = 32, chaD = 32, chaE = 32, chaF = 32, chaG = 32;
	
	if(VES) chaA = 219;
	if(VEI) chaF = 219;
	if(VDS) chaC = 219;
	if(VDI) chaD = 219;
	if(HS) chaB = 219;
	if(HC) chaG = 219;
	if(HI) chaE = 219;
		
	gotoxy(40,15);
	printf("%c%c",chaA,chaA);
	gotoxy(38,16);
	printf("F %c%c",chaA,chaA);
	
	gotoxy(40,18);
	printf("%c%c",chaF,chaF);
	gotoxy(38,19);
	printf("V %c%c",chaF,chaF);
	
	gotoxy(47,15);
	printf("%c%c",chaC,chaC);
	gotoxy(47,16);
	printf("%c%c H",chaC,chaC);
	
	gotoxy(47,18);
	printf("%c%c",chaD,chaD);
	gotoxy(47,19);
	printf("%c%c N",chaD,chaD);	
	
	gotoxy(42,13);
	printf("  T");
	gotoxy(42,16);
	printf("  G");
	gotoxy(42,21);
	printf("  B");
	
	
	gotoxy(42,14);
	printf("%c%c%c%c%c",chaB,chaB,chaB,chaB,chaB);
	
	gotoxy(42,20);
	printf("%c%c%c%c%c",chaE,chaE,chaE,chaE,chaE);
	
	gotoxy(42,17);
	printf("%c%c%c%c%c",chaG,chaG,chaG,chaG,chaG);
	
	return;
}



void partes(){
	
	gotoxy(23,17);
	printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
	
	gotoxy(26,16);
	printf("%c%c",219,219);
	
	gotoxy(26,15);
	printf("%c%c",220,220);
	
	
	
	gotoxy(26,18);
	printf("%c%c",219,219);
	
	gotoxy(26,19);
	printf("%c%c",223,223);
	
	
	
	
	gotoxy(58,16);
	printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
	
	gotoxy(58,18);
	printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
	
	
	return;
}

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
