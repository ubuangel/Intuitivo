void pushpila(int p[],int tamano,int elemento,int z){
	p[z]=0;
	p[z]=p[z]+elemento;
	for (int i = 0; i < tamano; ++i) {
		cout<<p[i]<<" "; }
}
void popila(int p[],int tamano,int z){
	p[z]=0;
	for (int i = 0; i < tamano; ++i) {
		cout<<p[i]<<" ";
	}
}
int main(int argc, char **argv) {
	int p[20]={0};
	int tamano;
	int bandera;
	int elemento;
	cout<<"observacion el programa solo es una manera intuitiva de manejar una pila por lo que el numero de ingresos de elementos debe ser menor o = al tamaño de pila pila"<<'\n';
	cout<<"recordar que una pila es una estructura lifo por lo que manejar correctamente vbandera es  importante "<<'\n';
	cout<<"ingresar el tamao de la pila\n";cin>>tamano;
cout<<"en cualquier momento puede precionar CTRL +c para Salir del programa XD"<<'\n';

	cout<<"array actual "<<"{";
	for (int i = 0; i < tamano; ++i) {
		cout<<p[i]<<" ,";
	}
	cout<<"}";
	cout<<endl;
	for (int n = 0; n < tamano; ++n) {
			cout<<"ingresar en que posicion realizar la actividad vbandera: ";cin>>bandera;
			cout<<"ingresar el elenmento a apilar o \n";cin>>elemento;
		pushpila(p,tamano,elemento,bandera);
	cout<<'\n';
	}

	cout<<endl;
	for (int n2 = 0; n2 < tamano; ++n2) {

		cout<<"ingresar en que posicion realizar la actividad vbandera(desapilar) ";cin>>bandera;
		popila(p,tamano,bandera);
	cout<<'\n';
}
cout<<"pila desapilada totalmente hasta luego amigo!!"<<'\n';
	return 0;
}

