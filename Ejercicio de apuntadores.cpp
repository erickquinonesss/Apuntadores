#include <iostream>
#include <string>

using namespace std;

struct Estudiante {
    long long int codigo;
    string nombre;
    float sum, prom, notas[3];
    
};


int main(){
  long long int codigo;
    int n;
    string nombre =" ";
    float sum, prom, notas[3];

  cout<<"Ingrese el número de estudiantes: "<<endl;
  cin>>n;

  do 
    {
      if (n<3)
      {
        cout<<"Tiene que haber mínimo tres estudiantes."<<endl; 
        cout<<"Ingrese un número mayor o igual a 3."<<endl;
        cin>>n; 
    }
  }
  while (n<3); 
  
  Estudiante Alumno [n];
  Estudiante* ptr= Alumno;

  for (int i=0; i<3; i++){
    cout<<"\n Ingrese los datos del estudiante "<<i+1<<endl; 

    cout << "Ingrese el código del estudiante: ";
        cin >> (ptr+i)->codigo;
        cin.ignore();

        cout << "Ingrese el nombre completo: ";
        getline(cin, (ptr+i)->nombre);

        for (int j=0;j<3;j++){
          cout<<"Ingrese las notas del estudiante: "<<endl;
          cin>>(ptr+i)->notas[j];
    }
  }

  for (int i=0;i<n;i++){
    cout<<"\nEstudiante "<< i+1<< ":"<< endl;
    cout<<"Nombre: "<<(ptr+i)->nombre<<endl;
    cout<<"Código: "<<(ptr+i)->codigo<<endl;

    for (int j=0;j<3;j++){
      cout<<"Notas: "<< (ptr+i)->notas[j]<<endl;
    
    sum+=(ptr+i)->notas[j];
	}
	(ptr+i)->prom=sum/3.0f;
	cout<<"Su promedio es: "<< (ptr+i)->prom<< endl;
	sum=0;
  }
  
  return 0;
  
}
