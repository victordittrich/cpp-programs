#include <bits/stdc++.h>
using namespace std;
int main() {
setlocale(LC_ALL, "Portuguese");

string temp, comando;
int h, m,r,test;
comando="shutdown -s -t ";
inicio:
system("cls");

cout<<"by @vituhds\n\n1- Adicionar sleep.\n2- Cancelar sleep ja feito.\n3- Desligar agora.\n4- Reiniciar.\n5- Fechar\n\nEscolha: ";
cin>>r;
if(r==1){
	system("cls");
	cout<<"Quantas horas para desligar: ";
	cin>>h;
	cout<<"Quantos minutos (opcional): ";
	cin>>m;
	test=((h*60*60) + (m*60));
	temp=to_string(test);
	comando+=temp;
	system(comando.c_str());
    goto inicio;
} else if (r==2){
	system("shutdown -a");
} else if(r==3){
	system("shutdown -s -t 0");
} else if(r==4){
	system("shutdown /r");
} else if(r==5){
    goto fim;
} else{
    goto inicio;
}
fim:
    return 0;
}
