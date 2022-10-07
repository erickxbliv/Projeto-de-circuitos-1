#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define SIM 1
#define NAO 0
#define VERDADEIRO 1
#define FALSO 0
#define ALTO 1
#define BAIXO 0
#define LIG 1
#define DES 0

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

int AND(int A, int B){
	
	if(A == LIG && B == LIG) return LIG;
	else return DES;
}

int OR(int A, int B){
	
	if(A == LIG || B == LIG) return LIG;
	else return DES;
}

int NOT(int A){
	
	if(A == LIG) return DES;
	else return LIG;
}

int XOR(int A, int B){
	
	return OR(AND(A,NOT(B)),AND(NOT(A),B));
}

int alternar(int A){
	
	if(A == ALTO) return BAIXO;
	else return ALTO;
}

int SUM(int A, int B, int C){
	
	return XOR(XOR(A,B),C);
}

int carry_out(int A, int B, int C){
	
	return OR(OR(AND(A,B),AND(B,C)),AND(A,C));
}



int interfac(int W, int E, int R, int S, int D, int F, int Z, int X, int C, int V){
	
	gotoxy(2,1);
	printf("0%d%d%d",W,E,R);
	gotoxy(1,2);
	printf("+0%d%d%d",S,D,F);
	gotoxy(1,3);
	printf("---------");
	gotoxy(2,4);
	printf("%d%d%d%d",Z,X,C,V);
	
	return 0;
}









int OCTOOR(int A, int B, int C, int D, int E, int F, int G, int H){
	
	if(A == 1 || B == 1 || D == 1 || E == 1 || C == 1 || F == 1 || G == 1 || H == 1) return 1;
	else return 0;
}


int TRIAND(int A, int B, int C){
	
	if(A == 1 && B == 1 && C == 1) return 1;
	else return 0;
}


int QUADRIAND(int A, int B, int C, int D){
	
	if(A == 1 && B == 1 && C == 1 && D == 1) return 1;
	else return 0;
}




int N(int A){
	
	if(A == LIG) return DES;
	else return LIG;
}



int main(){
	
		   																	int W = 0, E = 0, R = 0;
		   																	int S = 0, D = 0, F = 0;
	int Z = 0, X = 0, C = 0, V = 0, B = 1;
	
	//int carryM = 0, carryC = 0, carryD = 0, carryU = 0;
	int RIM = 0, 	RIC = 0, 	RID = 0, 	RIU = 0;
	char input, clear = 1;
	
	
	
	do{
		
		if(clear != 2) clear = interfac(W,E,R,S,D,F,Z,X,C,V);
		
		/*
		
		V = SUM(R,F,RIU);
		RID = carry_out(R,F,RIU);
		C = SUM(E,D,RID);
		RIC = carry_out(E,D,RID);
		X = SUM(W,S,RIC);
		RIM = carry_out(W,S,RIC);
		Z = RIM;
		
		*/
		
		
		/*
		if(			//VES
		OCTOOR(TRIAND(Z,X,N(V)),TRIAND(X,N(C),N(V)),TRIAND(X,V,N(B)),TRIAND(N(X),N(V),N(B)),
		QUADRIAND(Z,N(X),N(C),V),QUADRIAND(N(Z),X,C,V),QUADRIAND(N(Z),N(X),C,N(V)),QUADRIAND(N(Z),N(X),C,N(B))) == 1
		) exit(10);
		*/
		
		
		
		if(			//HS
		OCTOOR(TRIAND(Z,N(X),C),TRIAND(Z,C,N(B)),TRIAND(Z,N(C),V),TRIAND(N(Z),C,B),TRIAND(N(Z),N(C),N(B)),TRIAND(X,C,N(V)),TRIAND(X,N(V),B),AND(N(X),V))
		) exit(9);
		
		
	
		if(kbhit()){
			
			clear = 1;
			input = getch();
			if(input == 'W' || input == 'w') W = alternar(W);
			else if(input == 'E' || input == 'e') E = alternar(E);
			else if(input == 'R' || input == 'r') R = alternar(R);
			else if(input == 'S' || input == 's') S = alternar(S);
			else if(input == 'D' || input == 'd') D = alternar(D);
			else if(input == 'F' || input == 'f') F = alternar(F);
			else clear = 0;
		}
		
	}while(1);
	
	
	return 0;
}










