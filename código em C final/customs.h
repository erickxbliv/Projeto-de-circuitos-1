#define SIM 1
#define NAO 0
#define VERDADEIRO 1
#define FALSO 0
#define ALTO 1
#define BAIXO 0
#define LIG 1
#define DES 0

int TRIOR(int A, int B, int C);
int TETRAOR(int A, int B, int C, int D);
int PENTAOR(int A, int B, int C, int D, int E);
int HEXAOR(int A, int B, int C, int D, int E, int F);
int HEPTAOR(int A, int B, int C, int D, int E, int F, int G);
int OCTOR(int A, int B, int C, int D, int E, int F, int G, int H);
int ENEAOR(int A, int B, int C, int D, int E, int F, int G, int H, int I);
int DECAOR(int A, int B, int C, int D, int E, int F, int G, int H, int I, int J);

int TRIAND(int A, int B, int C);
int TETRAND(int A, int B, int C, int D);
int HEXAND(int A, int B, int C, int D, int E, int F);
int HEPTAND(int A, int B, int C, int D, int E, int F, int G);

int N(int A);


int alternar(int A);
int interfac(int W, int E, int R, int T, int S, int D, int F, int G, int Z, int X, int C, int V, int B);
void digital(int HS, int HC, int HI, int VES, int VEI, int VDS, int VDI, int overflow);
void digital1(int HS, int HC, int HI, int VES, int VEI, int VDS, int VDI);
void digital2(int HS, int HC, int HI, int VES, int VEI, int VDS, int VDI);
void partes();
void gotoxy(int x, int y);