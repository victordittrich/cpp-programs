#include <string>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void esc1(){
	
		int linhas, colunas;
		int matriz1[5][5];
		int matriz2[5][5];
		int matriz3[5][5];
		int op;
		
		cout<<"Digite o numero de linhas: ";
		cin>>linhas;
		cout<<"Digite o numero de colunas: ";
		cin>>colunas;
		cout<<"Digite a operação que você gostaria de fazer (1 +, 2 -, 3 /, 4 *): ";
		cin>>op;
		for(int i=0;i<colunas;i++){
			for(int j=0;j<linhas;j++){
				cin>>matriz1[j][i];
			}
		}
		
		cout<<"\n\nDigite a outra matriz"<<linhas<<" x "<<colunas<<"\n\n";
		
		for(int i=0;i<colunas;i++){
			for(int j=0;j<linhas;j++){
				cin>>matriz2[j][i];
			}
		}
		
		cout<<"\n\nMatriz 1:\n\n";
		
		for(int i=0;i<colunas;i++){
			for(int j=0;j<linhas;j++){
				cout<<matriz1[j][i]<<" ";
			}
			cout<<"\n";
		}
		
		cout<<"\n\nMatriz 2:\n\n";
		
		for(int i=0;i<colunas;i++){
			for(int j=0;j<linhas;j++){
				cout<<matriz2[j][i]<<" ";
			}
			cout<<"\n";
		}
		
		cout<<"\n\nResultado da operação:\n\n";
		
		if(op == 1){
			
			for(int i=0;i<colunas;i++){
				for(int j=0;j<linhas;j++){
					matriz3[j][i] = matriz1[j][i] + matriz2[j][i];
				}
			}
			
			for(int i=0;i<colunas;i++){
				for(int j=0;j<linhas;j++){
					cout<<matriz3[j][i];
					cout<<" ";
				}
				cout<<"\n";
			}
		}
		else if(op == 2){
			
			for(int i=0;i<colunas;i++){
				for(int j=0;j<linhas;j++){
					matriz3[j][i] = matriz1[j][i] - matriz2[j][i];
				}
			}
			
			for(int i=0;i<colunas;i++){
				for(int j=0;j<linhas;j++){
					cout<<matriz3[j][i];
					cout<<" ";
				}
				cout<<"\n";
			}
		}
		else if(op == 3){
			
			for(int i=0;i<colunas;i++){
				for(int j=0;j<linhas;j++){
					matriz3[j][i] = matriz1[j][i] / matriz2[j][i];
				}
			}
			
			for(int i=0;i<colunas;i++){
				for(int j=0;j<linhas;j++){
					cout<<matriz3[j][i];
					cout<<" ";
				}
				cout<<"\n";
			}
		}
		else if(op == 4){
			
			for(int i=0;i<colunas;i++){
				for(int j=0;j<linhas;j++){
					matriz3[j][i] = matriz1[j][i] * matriz2[j][i];
				}
			}
			
			for(int i=0;i<colunas;i++){
				for(int j=0;j<linhas;j++){
					cout<<matriz3[j][i];
					cout<<" ";
				}
				cout<<"\n";
			}
		}
		else{
			cout<<"Houve algum erro";
	}
	
}

void esc2(){
	
	int esc;
	int matriz2[2][2];
	int matriz3[3][3];
	
	cout<<"Escolha o tamanho da matriz (2 e 3): ";
	cin>>esc;
	
	if(esc==2){
		
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cin>>matriz2[j][i];
			}
		}
		
		int resul2 = (matriz2[0][0]*matriz2[1][1])-(matriz2[0][1]*matriz2[1][0]);
		cout<<"Determinante da matriz: "<<resul2;
		
	}
	else if(esc==3){
		
		int matriz3[3][3];
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>matriz3[j][i];
			}
		}
		
		int resul3 = (matriz3[0][0]*matriz3[1][1]*matriz3[2][2])+(matriz3[0][1]*matriz3[1][2]*matriz3[2][0])+(matriz3[0][2]*matriz3[1][0]*matriz3[2][1])-(matriz3[0][1]*matriz3[1][0]*matriz3[2][2])-(matriz3[0][0]*matriz3[1][2]*matriz3[2][1])-(matriz3[0][2]*matriz3[1][1]*matriz3[2][0]);
		cout<<"Determinante da matriz: "<<resul3;
		
		
	}
	else{
		cout<<"Opção não disponível";
	}
}

void esc3(){
	
	int esc;
	
	cout<<"Digite se você deseja descobrir 2 ou 3 termos: ";
	cin>>esc;
	
	if(esc==2){
		
		int termo1, termo2, termoind1;
		int termo21, termo22, termoind2;
		
		cout<<"Digite a 1a equação! \n1o termo: ";
		cin>>termo1;
		cout<<"2o termo: ";
		cin>>termo2;
		cout<<"Termo independente: ";
		cin>>termoind1;
		
		int originaltermo1 = termo1;
		int originaltermo2 = termo2;
		int originaltermoind1 = termoind1;
		
		cout<<"Digite a 2a equação! \n1o termo: ";
		cin>>termo21;
		cout<<"2o termo: ";
		cin>>termo22;
		cout<<"Termo independente: ";
		cin>>termoind2;
		
		termo1 = (termo1)*-(termo21);
		termo2 = (termo2)*-(termo21);
		termoind1 = (termoind1)*-(termo21);
		
		termo21 = (termo21)*(originaltermo1);
		termo22 = (termo22)*(originaltermo1);
		termoind2 = (termoind2)*(originaltermo1);
		
		termo1 = (termo1)+(termo21);
		termo2 = (termo2)+(termo22);
		termoind1 = (termoind1)+(termoind2);
		
		int resultermo2 = (termoind1)/(termo2);
		
		int resultadotermo1 = (((resultermo2*originaltermo2)*-1)+originaltermoind1)/originaltermo1;
		
		cout<<"O resultado do 1o termo: "<<resultadotermo1<<", e o resultado do 2o termo: "<<resultermo2;
		
	}
	
	else{
		cout<<"Opção não disponível";
	}
}

void esc4(){
	
	int num2, den1, den2;
	
	cout<<"Digite o denominador do número que você quer descobrir: ";
	cin>>den1;
	cout<<"Digite o numerador da fração igual ao número que você quer descobrir: ";
	cin>>num2;
	cout<<"Digite o denominador da fração igual a que você quer descobrir: ";
	cin>>den2;
	
	num2 = num2*den1;
	den2 = num2/den2;
	
	cout<<"\nO número que você quer descobrir é: "<<den2;

	
}

void esc5(){
	
	int limite;
	int ang, resul;
	
	cout<<"Quantos Ângulos você vai digitar: ";
	cin>>limite;
	
	for(int i=0;i<limite;i++){
		cin>>ang;
		resul += ang;
	}
	
	cout<<"A soma dos Ângulos é: "<<resul;
	
}

string esc6(){
	
	float r, lq;
float r1, lt1, lt2, bt, at, br, ar;
float l1, l2, l3, l4, l5, ap;
inicio:
system("cls");
cout<< "Polígonos:\n[1] Quadrado\n[2] Triângulo\n[3] Retângulo\n[4] Pentágono\n[5] Trapézio\n\nEscolha: ";
cin>> r;

if(r==1){
	quadrado:
	system("cls");
	cout<< "Digite o lado do quadrado: ";
	cin>>lq;
	cout << "A área do quadrado é: " << lq*lq;
	cout<<"\nO perímetro é: " << lq*4;
	cout<<"\n\n[1] Again?\n[2] Escolher outro\n[3] Sair\nEscolha: ";
	cin >> r1;
	if (r1==1){
		goto quadrado;
	} else if (r1 == 2){
		goto inicio;
	} else{
		goto fim;
	}
}

if(r==2){
	triangulo:
	system("cls");
	cout<<"Digite a base: ";
	cin>> bt;
	cout<< "Digite os outros lados:\n";
	cin>> lt1;
	cin>> lt2;
	cout<< "\nAgora a altura: ";
	cin>>at;
	cout<< "\n\nA área do triangulo é: " << (bt *at) / 2;
	cout << "\nO perímetro é: " << lt1 + lt2 + bt;
	cout<<"\n\n[1] Again?\n[2] Escolher outro\n[3] Sair\nEscolha: ";
	cin >> r1;
	if (r1==1){
		goto triangulo;
	} else if (r1 == 2){
		goto inicio;
	} else{
		goto fim;
	}
}

if(r==3){
	retangulo:
	system("cls");
	cout<< "Digite a base: ";
	cin>>br;
	cout<< "Digite a altura: ";
	cin>>ar;
	cout << "\n\nA área é: "<< br *ar;
	cout<< "\nO perímetro é: " << (br*2) + (ar*2);
	cout<<"\n\n[1] Again?\n[2] Escolher outro\n[3] Sair\nEscolha: ";
	cin >> r1;
	if (r1==1){
		goto retangulo;
	} else if (r1 == 2){
		goto inicio;
	} else{
		goto fim;
	}
}


if(r==4){
	pentagono:
	system("cls");
	cout<< "Digite os lados: ";
	cin>> l1>> l2>> l3>> l4>> l5;
	cout<< "Digite a ap�tema: ";
	cin>>ap;
	cout << "\nA área do pentágono é: " << (l1+l2+l3+l4+l5) *ap;
	cout<< "\nO perímetro é: " << l1+l2+l3+l4+l5;
	cout<<"\n\n[1] Again?\n[2] Escolher outro\n[3] Sair\nEscolha: ";
	cin >> r1;
	if (r1==1){
		goto pentagono;
	} else if (r1 == 2){
		goto inicio;
	} else{
		goto fim;
	}
}

if(r==5){
	float bma, bme, al, test, lado;
	trapezio:
	system("cls");
	cout<<"Base maior: ";
	cin>>bma;
	cout << "Base menor: ";
	cin>> bme;
	cout<<"Altura: ";
	cin>>al;
	cout << "\nA área é: " << (bma + bme) *al / 2;
	test = (bma - bme) /2;
	lado = sqrt((test*test) + (al*al));
	cout<<"\nO perímetro é: " << bma + bme + (lado*2);
	cout<<"\n\n[1] Again?\n[2] Escolher outro\n[3] Sair\nEscolha: ";
	cin >> r1;
	if (r1==1){
		goto trapezio;
	} else if (r1 == 2){
		goto inicio;
	} else{
		goto fim;
	}
}

fim:
	return 0;

	
}

void esc7(){
	
	float r, a, p, e, t;

cout<<"Qual opção você tem \n1-raio \n2-Descubra o raio:";
cin>>e;
if(e==1){
cout<<"Digite o raio da circunferência :";
cin>>r;
p=(2)*(3.14)*r;
a= 3.14*(r*r);
cout<<"a área é"<<a;

cout<<"\nO perimetro é"<<p;}

if(e==2){
cout<<"Digite a :";
cin>>a;
t= 3.14*2;
r=a/t;
cout<<"\nO raio é"<<r;
}
	
}

string esc8(){
	
	float r, a, p, e, t;

cout<<"Qual opção você tem \n1-raio \n2-Descubra o raio:";
cin>>e;
if(e==1){
cout<<"Digite o raio da circunferência :";
cin>>r;
p=(2)*(3.14)*r;
a= 3.14*(r*r);
cout<<"a área é"<<a;

cout<<"\nO perimetro é"<<p;}

if(e==2){
cout<<"Digite a :";
cin>>a;
t= 3.14*2;
r=a/t;
cout<<"\nO raio é"<<r;
}


	return 0;
	
}

int esc9(){
	
	int r1, r;
inicio:
system("cls");
cout<< "PRISMAS\n\nPolígonos:\n[1] Quadrado\n[2] Triângulo\n[3] Pentágono\n[4] Trapézio\n\nEscolha: ";
cin>> r;

if(r==1){
	float h,pro, lar;
	quadrado:
	system("cls");
	cout<< "Altura: ";
	cin>>h;
	cout<<"Profundidade: ";
	cin>>pro;
	cout<<"Largura: ";
	cin>>lar;
	cout<<"\nO volume é: " << h*lar*pro;
	cout<<"\n\n[1] Again?\n[2] Escolher outro\n[3] Sair\nEscolha: ";
	cin >> r1;
	if (r1==1){
		goto quadrado;
	} else if (r1 == 2){
		goto inicio;
	} else{
		goto fim;
	}
}

if(r==2){
	float h,pro, lar;
	triangulo:
	system("cls");
	cout<<"Altura: ";
	cin>>h;
	cout<<"Profundidade: ";
	cin>>pro;
	cout<<"Largura: ";
	cin>>lar;
	cout<< "\nO volume é: " << (h*pro*lar) /2;
	cout<<"\n\n[1] Again?\n[2] Escolher outro\n[3] Sair\nEscolha: ";
	cin >> r1;
	if (r1==1){
		goto triangulo;
	} else if (r1 == 2){
		goto inicio;
	} else{
		goto fim;
	}
}

if(r==3){
	float l, apo, pro;
	pentagono:
	system("cls");
	cout<< "Lado: ";
	cin>>l;
	cout << "Ap�tema: ";
	cin>>apo;
	cout<< "Profundidade: ";
	cin>>pro;
	cout<<"\nO volume é: "<<(5*apo*l*pro) / 2;
	cout<<"\n\n[1] Again?\n[2] Escolher outro\n[3] Sair\nEscolha: ";
	cin >> r1;
	if (r1==1){
		goto pentagono;
	} else if (r1 == 2){
		goto inicio;
	} else{
		goto fim;
	}
}

if(r==4){
	float bma,pro, bme, al;
	trapezio:
	system("cls");
	cout<<"Base maior: ";
	cin>>bma;
	cout << "Base menor: ";
	cin>> bme;
	cout<<"Profundidade: ";
	cin>>pro;
	cout<<"Altura: ";
	cin>>al;
	cout<<"\nO volume é: " << ((bma+bme)*pro /2) *al;
	cout<<"\n\n[1] Again?\n[2] Escolher outro\n[3] Sair\nEscolha: ";
	cin >> r1;
	if (r1==1){
		goto trapezio;
	} else if (r1 == 2){
		goto inicio;
	} else{
		goto fim;
	}
}

fim:
	return 0;	
	
}

void esc10(){
	
	int h, r, s;
	
	cout<<"Digite a altura do cone: ";
	cin>>h;
	cout<<"Digite o raio do cone: ";
	cin>>r;
	cout<<"Digite a superfície da área: ";
	cin>>s;
	
	cout<<"A área do cone é: "<< (3.14*(r*r))+(3.14*r*s);
	cout<<"\nO volume do cone é: "<< (3.14*r*r*h)/3;
	
}

void esc11(){
	
	int base, h, lados;
	
	cout<<"Calculando a Area lateral!\nDigite a base: ";
	cin>>base;
	cout<<"Digite a altura: ";
	cin>>h;
	cout<<"Calculando a Area da base!\nDigite se a base tem 3, 4 ou 5 lados: ";
	cin>>lados;
	
	if(lados==3){
		
		int h2, base2;
		
		cout<<"Digite a altura: ";
		cin>>h2;
		cout<<"Digite a base: ";
		cin>>base2;
		
		int al = base*h*lados/2;
		int ab = h2*base2/2;
		
		cout<<"A Area da piramide triangular : "<<al+ab;
		cout<<"\nO volume da piramide triangular : "<< 1/3*ab*h;
		
	}
	else if(lados==4){
		
		int l;
		
		cout<<"Digite o lado: ";
		cin>>l;
		
		int al = base*h*lados/2;
		int ab = l*l;
		
		cout<<"A área da pirâmide triangular é: "<<al+ab;
		cout<<"\nO volume da pirâmide triangular é: "<< 1/3*ab*l;
		
	}
	else if(lados==5){
		
		int l, apt;
		
		cout<<"Digite o lado: ";
		cin>>l;
		cout<<"Digite a apótema: ";
		cin>>apt;
		
		int al = base*h*lados/2;
		int ab = 5*l*apt;
		
		cout<<"A área da pirâmide triangular é: "<<al+ab;
		cout<<"\nO volume da pirâmide triangular é: "<< 1/3*ab*h;
		
	}
	
}

int esc12(){
	
	float r, a, p, e, t, v,x,l;
    cout<< "Digite  o raio: ";
    cin>>r;
    a=(4*3.14)*r*r;
    cout<<"\nA área é "<<a;
    x=r*r*r*3.14;
    v=1.333333;
    l=x*v;
    cout<<"\nO volume é "<<l;


	return 0;
	
}

int esc13(){
	
	float h,hi,b,c;
cout<<"Digite B:";
cin>>b;
cout<<"Digite C:";
cin>>c;
h=(b*b)+(c*c);
hi=sqrt(h);	
cout<<"A hipotenusa "<<hi;

	return 0;
	
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	system("cls");
	int esc;
	
	cout<<"1- Matrizes (5x5) no maximo\n2- Determinantes\n3- Sistemas Lineares\n4- Retas\n5- Angulos\n6- Poligonos\n7- Circulos\n8- Circunferencias\n9- Prismas\n10- Cones\n11- Piramides\n12- Esferas\n13- Pitagoras\n\nEscolha: ";
	cin>>esc;
	
	if(esc==1){
		esc1();
	}
	else if(esc==2){
		esc2();
	}
	else if(esc==3){
		esc3();
	}
	else if(esc==4){
		esc4();
	}
	else if(esc==5){
		esc5();
	}
	else if(esc==6){
		esc6();
	}
	else if(esc==7){
		esc7();
	}
	else if(esc==8){
		esc8();
	}
	else if(esc==9){
		esc9();
	}
	else if(esc==10){
		esc10();
	}
	else if(esc==11){
		esc11();
	}
	else if(esc==12){
		esc12();
	}
	else if(esc==13){
		esc13();
	}
	else{
		cout<<"Op��o inv�lida";
	}
	
	return 0;
}


