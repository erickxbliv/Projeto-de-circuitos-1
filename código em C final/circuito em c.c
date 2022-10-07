#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "customs.h"

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

int SUM(int A, int B, int C){
	
	return XOR(XOR(A,B),C);
}

int carry_out(int A, int B, int C){
	
	return OR(OR(AND(A,B),AND(B,C)),AND(A,C));
}


int main(){
	
		   int W = 0, E = 0, R = 0, T = 0;
		   int S = 0, D = 0, F = 0, G = 0;
	int Z = 0, X = 0, C = 0, V = 0, B = 0;
	
	int RIDM = 0, RIM = 0, RIC = 0, RID = 0, RIU = 0;
	
	int VEI  = 1, VES  = 1, VDS  = 1, VDI  = 1, HC  = 0, HS  = 1, HI  = 1, overflow = 0;
	int VEI1 = 1, VES1 = 1, VDS1 = 1, VDI1 = 1, HC1 = 0, HS1 = 1, HI1 = 1;
	int VEI2 = 1, VES2 = 1, VDS2 = 1, VDI2 = 1, HC2 = 0, HS2 = 1, HI2 = 1;
	
	
	char input, clear = 1;
	
	do{
		
		
		
		//AQUI OS DIGITOS DE CADA ENTRADA SERÃO CALCULADOS DEPENDENDO DO DESENHO FEITO PELO USUÁRIO
		
		W = HEXAND(VES1,HS1,VDS1,VDI1,HI1,HC1);
		
		E = TRIOR(HEXAND(VES1,HS1,N(VDS1),VDI1,HI1,HC1),HEPTAND(VES1,N(HS1),VDS1,VDI1,N(HI1),N(VEI1),HC1),HEPTAND(N(VES1),HS1,VDS1,VDI1,N(HI1),N(VEI1),N(HC1)));
		
		R = TETRAOR(HEPTAND(VES1,HS1,N(VDS1),VDI1,HI1,VEI1,HC1),HEPTAND(N(VES1),HS1,VDS1,VDI1,HI1,N(VEI1),HC1),
		HEPTAND(N(VES1),HS1,VDS1,VDI1,N(HI1),N(VEI1),N(HC1)),HEPTAND(N(VES1),HS1,VDS1,N(VDI1),HI1,VEI1,HC1));
		
		T = TRIOR(HEXAND(VES1,HS1,VDI1,HI1,N(VEI1),HC1),HEXAND(N(VES1),VDS1,VDI1,N(HI1),N(VEI1),N(HC1)),HEXAND(HS1,VDS1,VDI1,HI1,N(VEI1),HC1));
		
		
				
		S = HEXAND(VES2,HS2,VDS2,VDI2,HI2,HC2);
		
		D = TRIOR(HEXAND(VES2,HS2,N(VDS2),VDI2,HI2,HC2),HEPTAND(VES2,N(HS2),VDS2,VDI2,N(HI2),N(VEI2),HC2),HEPTAND(N(VES2),HS2,VDS2,VDI2,N(HI2),N(VEI2),N(HC2)));
		
		F = TETRAOR(HEPTAND(VES2,HS2,N(VDS2),VDI2,HI2,VEI2,HC2),HEPTAND(N(VES2),HS2,VDS2,VDI2,HI2,N(VEI2),HC2),
		HEPTAND(N(VES2),HS2,VDS2,VDI2,N(HI2),N(VEI2),N(HC2)),HEPTAND(N(VES2),HS2,VDS2,N(VDI2),HI2,VEI2,HC2));
		
		G = TRIOR(HEXAND(VES2,HS2,VDI2,HI2,N(VEI2),HC2),HEXAND(N(VES2),VDS2,VDI2,N(HI2),N(VEI2),N(HC2)),HEXAND(HS2,VDS2,VDI2,HI2,N(VEI2),HC2));
		
		
		//AGORA QUE SE TEM OS VALORES DAS DUAS ENTRADAS, A OPERAÇÃO SERÁ REALIZADA
		
		
		B = SUM(T,G,RIU);
		RID = carry_out(T,G,RIU);
		V = SUM(R,F,RID);
		RIC = carry_out(R,F,RID);
		C = SUM(E,D,RIC);
		RIM = carry_out(E,D,RIC);
		X = SUM(W,S,RIM);
		RIDM = carry_out(W,S,RIM);
		Z = RIDM;
		
		
		//AQUI OS VALORES DO DISPLAY DO RESULTADO SÃO CONVERTIDO PARA VERIFICAR SE ACENDERÃO OU NÃO
		
		
		VES = OCTOR(TRIAND(Z,X,N(V)),TRIAND(X,N(C),N(V)),TRIAND(X,V,N(B)),TRIAND(N(X),N(V),N(B)),TETRAND(Z,N(X),N(C),V),TETRAND(N(Z),X,C,V),TETRAND(N(Z),N(X),C,N(V)),TETRAND(N(Z),N(X),C,N(B)));
		
		VEI = PENTAOR(TRIAND(Z,N(X),N(B)),TRIAND(Z,V,N(B)),TRIAND(N(Z),N(C),N(B)),TRIAND(N(X),V,N(B)),TETRAND(X,C,N(V),N(B)));
		
		VDS = ENEAOR(TRIAND(Z,N(X),V),TRIAND(Z,N(X),B),TRIAND(Z,V,B),TRIAND(X,C,N(V)),TRIAND(X,C,N(B)),TRIAND(X,N(V),N(B)),TRIAND(N(X),V,B),TRIAND(C,N(V),N(B)),AND(N(Z),N(C)));
		
		VDI = HEXAOR(AND(Z,X),AND(X,N(C)),AND(Z,N(C)),AND(N(X),N(V)),TRIAND(N(Z),C,V),B);
		
		HC = HEPTAOR(TRIAND(Z,N(X),V),TRIAND(Z,N(C),N(B)),TRIAND(N(Z),X,C),TRIAND(N(Z),C,N(V)),TRIAND(N(Z),C,N(B)),AND(X,N(V)),TRIAND(N(X),N(C),V));
		
		HS = OCTOR(TRIAND(Z,N(X),N(C)),TRIAND(Z,C,N(B)),TRIAND(Z,N(C),V),TRIAND(N(Z),C,B),TRIAND(N(Z),N(C),N(B)),TRIAND(X,C,N(V)),TRIAND(X,N(V),B),AND(N(X),V));
		
		HI = DECAOR(TRIAND(Z,N(X),V),TRIAND(Z,N(X),N(B)),TRIAND(Z,V,N(B)),TRIAND(N(Z),N(C),N(B)),TRIAND(X,C,N(V)),
		TRIAND(X,N(V),B),TRIAND(N(X),N(C),V),TRIAND(N(X),V,N(B)),TETRAND(N(Z),X,C,B),TETRAND(N(Z),C,N(V),B));
		
		overflow = OR(Z,AND(X,OR(C,V)));
		
		//ESSAS FUNÇÕES DESENHAM OS DISPLAYS NA TELA, APENAS A PARTE GRÁFICA
		
		if(clear <= 4){
			
			interfac(W,E,R,T,S,D,F,G,Z,X,C,V,B);
			digital(HS,HC,HI,VES,VEI,VDS,VDI,overflow);
			digital1(HS1,HC1,HI1,VES1,VEI1,VDS1,VDI1);
			digital2(HS2,HC2,HI2,VES2,VEI2,VDS2,VDI2);
			partes();
		}
		
		//ESSA PARTE REPRESENTA A FUNÇÃO DE "DESENHAR" OS DISPLAYS SÃO ACENDIDOS ALTERNANDO COMO SE AS TECLAS FOSSEM SEUS RESPECTIVOS INTERRUPTORES
		
		if(kbhit()){
			
			clear = 1;
			input = getch();
			
				 if(input == 'a' || input == 'A') VES1 = alternar(VES1);
			else if(input == 'z' || input == 'Z') VEI1 = alternar(VEI1);
			else if(input == 'w' || input == 'W') HS1 = alternar(HS1);
			else if(input == 's' || input == 'S') HC1 = alternar(HC1);
			else if(input == 'x' || input == 'X') HI1 = alternar(HI1);
			else if(input == 'd' || input == 'D') VDS1 = alternar(VDS1);
			else if(input == 'c' || input == 'C') VDI1 = alternar(VDI1);
			
			else if(input == 'f' || input == 'F') VES2 = alternar(VES2);
			else if(input == 'v' || input == 'V') VEI2 = alternar(VEI2);
			else if(input == 't' || input == 'T') HS2 = alternar(HS2);
			else if(input == 'g' || input == 'G') HC2 = alternar(HC2);
			else if(input == 'b' || input == 'B') HI2 = alternar(HI2);
			else if(input == 'h' || input == 'H') VDS2 = alternar(VDS2);
			else if(input == 'n' || input == 'N') VDI2 = alternar(VDI2);
		
			else clear = 3;
		}
		
		clear++;
		if(clear > 10) clear = 5;
	}while(1);
	
	return 0;
}