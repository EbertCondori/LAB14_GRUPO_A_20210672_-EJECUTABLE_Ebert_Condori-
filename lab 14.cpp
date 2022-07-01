#include <iostream>
using namespace std;

void crear_nombre(string **&A, int f , int c){
	A=new string*[f];
	for(int i=0;i<f;i++){
		A[i]=new string[c];
	}
}

void ingresar_nombre(string **A,int f,int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cin>>*(*(A+i)+j);
		}
	}
}

void crear_datos(int **&A,int f,int c)
{
	A=new int*[f];
	for(int i=0;i<f;i++){
		A[i]=new int[c];
	}
}

void ingresar_datos(int **A,int f,int c)
{
	for(int i=0;i<f;i++)
		for(int j=0;j<c;j++)
		cin>>*(*(A+i)+j);
}


int main(int argc, char *argv[]) {
	
	string **nombre;
	int **datos;
	crear_nombre(nombre,15,1);
	crear_datos(datos,15,3);
	
	cout<<"Ingresar 10 nombres de producto  "<<endl;
	
	for(int i=0;i<10;i++){
		for(int j=0;j<1;j++){
			cin>>*(*(nombre+i)+j);
		}
	}
	
	cout<<"Ingresar los datos de los productos "<<endl;
	
	for(int i=0;i<10;i++){
		cout<<"ingresando cui -- precio -- stock  "<<endl;
		cout<<*(*(nombre+i))<<" -> ";
		for(int j=0;j<3;j++){
			cin>>*(*(datos+i)+j);
		}
		cout<<endl;
	}
	int opc;
	cout<<endl;
	cout<<"1. Dar de alta un producto nuevo."<<endl;
	cout<<"2. Dar de baja a un producto. (No hay stock)."<<endl;
	cout<<"3. Buscar un producto por su nombre o código."<<endl;
	cout<<"4. Modificar el nombre, precio o cantidad de un producto dado."<<endl;
	cout<<"5. Salir"<<endl;
	cin>>opc;
		
	if(opc==1){
		cout<<"Ingresando nombre del nuevo pructo  "<<endl;
		for(int i=10;i<10+1;i++){
		    for(int j=0;j<1;j++){
			    cin>>*(*(nombre+i)+j);
				}
			}
		for(int i=10;i<10+1;i++){
			cout<<"ingresando cui -- precio -- stock del nuevo producto "<<endl;
			cout<<*(*(nombre+i))<<" -> ";
			for(int j=0;j<3;j++){
				cin>>*(*(datos+i)+j);
			}
			cout<<endl;
		}
		
		cout<<"nueva lista de datos "<<endl;
		for(int i=0;i<11;i++)
		{
			cout<<*(*(nombre+i))<<" -> ";
			
			for(int j=0;j<3;j++)
				cout<<*(*(datos+i)+j)<<"\t";
			cout<<endl;
		}
			
	}
	else if(opc == 2){
		
		cout<<"lista de datos "<<endl;
		for(int i=0;i<10;i++)
		{
			cout<<*(*(nombre+i))<<" -> ";
			
			for(int j=0;j<3;j++)
				cout<<*(*(datos+i)+j)<<"\t";
			cout<<endl;
		}
		
		int a;
		cout<<"ingrese codigo del producto a eliminar (0 stock )"<<endl;
		cin>>a;
		for(int i=0;i<10;i++){
			for(int j=0;j<1;j++){//3-1
				if(*(*(datos+i)+j)==a){
					*(*(datos+i)+j)==0;
				}
			}
		}
		
		cout<<"nueva lista de datos "<<endl;
		for(int i=0;i<10;i++)
		{
			cout<<*(*(nombre+i))<<" -> ";
			
			for(int j=0;j<3;j++)
				cout<<*(*(datos+i)+j)<<"\t";
			cout<<endl;
		}
		
	}
	else if(opc == 3 ){
		
		
	}
	else if(opc == 4 ){
		
		cout<<"lista de datos "<<endl;
		for(int i=0;i<10;i++)
		{
			cout<<*(*(nombre+i))<<" -> ";
			
			for(int j=0;j<3;j++)
				cout<<*(*(datos+i)+j)<<"\t";
			cout<<endl;
		}
		cout<<"ingrese codigo del producto a cambiar nombre codigo y stock"<<endl;
		cin>>b;
		

		
		
	}
	

	
	
	for(int i=0; i<15; i++)
		delete [] nombre[i];
	delete [] nombre;
	
	for(int i=0; i<15; i++)
		delete [] datos[i];
	delete [] datos;
	
	
	
	return 0;
}

