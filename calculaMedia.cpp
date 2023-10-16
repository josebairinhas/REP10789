#include<iostream>
using namespace std;

int main(){
	float nota1,nota2,nota3,nota4,somaNotas,media;
	cout<<"Insira 4 notas"<<endl;
	cin>>nota1;
	cin>>nota2;
	cin>>nota3;
	cin>>nota4;
	somaNotas = (nota1*5)+(nota2)+(nota3)+(nota4*2);
	media = somaNotas/4;
	cout<< "Nota 1: "<< nota1<<endl;
	cout<< "Nota 2: "<< nota2<<endl;
	cout<< "Nota 3: "<< nota3<<endl;
	cout<< "Nota 4: "<< nota4<<endl;
	cout<< "Media: "<< media<<endl;
}
