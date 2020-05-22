#include <iostream>
#include <stdlib.h>
using namespace std;


//SuperClase Usuario
class Usuario{
	private:
		string nombre;
		int id_usuario;
		string c_electronico;
	public:
		Usuario(string, int, string);
		void verificar_cuenta();
};

//Constructor SuperClase Usuario
Usuario::Usuario(string _nombre, int _id_usuario, string _c_electronico){
	nombre=_nombre;
	id_usuario=_id_usuario;
	c_electronico=_c_electronico;
}


//Void de la SuperClase Usuario
void Usuario::verificar_cuenta(){
	cout<<"Verificar Cuenta del Usuario: "<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Id de Usuario: "<<id_usuario<<endl;
	cout<<"Correo electronico: "<<c_electronico<<endl;
}

//SubClase Adminitrador

class Administrador: public Usuario{
	private:
		int no_empleado;
	public:
		Administrador(string, int, string, int);
		void consult_info();
};

//Constructor SubClase Administrador
Administrador::Administrador(string _nombre, int _id_usuario, string _c_electronico, int _no_empleado) : Usuario(_nombre,_id_usuario,_c_electronico){
	no_empleado=_no_empleado;
}

//Void SubClase Administrador
void Administrador::consult_info(){
	cout<<endl;
	cout<<"Informacion del Administrador:"<<endl;
	verificar_cuenta();
	cout<<"No. de empleado: "<<no_empleado<<endl;
} 



//Subclase Cliente
class Cliente: public Usuario{
	private:
		int no_tarjeta;
		int cod_cliente;
	public:
		Cliente(string, int, string, int, int);
		void comprar_vuelo();
		void consult_info();
};

//Constructor de Subclase Cliente
Cliente::Cliente(string _nombre, int _id_usuario, string _c_electronico, int _no_tarjeta, int _cod_cliente): Usuario(_nombre, _id_usuario, _c_electronico){
	no_tarjeta=_no_tarjeta;
	cod_cliente=_cod_cliente;
}

//Void de SubClase Cliente
void Cliente::comprar_vuelo(){
}

//Void de SubClase Cliente
void Cliente::consult_info(){
	verificar_cuenta();
	cout<<"No. de Tarjeta: "<<no_tarjeta<<endl;
	cout<<"Codigo de Cliente: "<<cod_cliente;
}


//Clase Vuelos
class Vuelos{
	private:
		string lugar_partida;
		string lugar_destino;
		string clase;
		int no_asiento;
		string fecha_vuelo;
		int no_boletos;
	public:
		Vuelos(string, string, string, int, string, int);
		void consultar_vuelo();
		void comprar_vuelo();
};

//Constructor Clase Vuelos
Vuelos::Vuelos(string _lugar_partida, string _lugar_destino, string _clase, int _no_asiento, string _fecha_vuelo, int _no_boletos){
	lugar_partida=_lugar_partida;
	lugar_destino=_lugar_destino;
	clase=_clase;
	no_asiento=_no_asiento;
	fecha_vuelo=_fecha_vuelo;
	no_boletos=_no_boletos;
}

//Void Clase Vuelos
void Vuelos::consultar_vuelo(){
	cout<<endl;
	cout<<"Consulta del vuelo: "<<endl;
	cout<<"Lugar de partida: "<<lugar_partida<<endl; 
	cout<<"Lugar de destino: "<<lugar_destino<<endl; 
	cout<<"Clase: "<<clase<<endl;
	cout<<"Numero de asiento: "<<no_asiento<<endl;
	cout<<"Fecha del vuelo: "<<fecha_vuelo<<endl;
	cout<<"Boletos comprados: "<<no_boletos<<endl;
}

//Void 2 Clase Vuelos
void Vuelos::comprar_vuelo(){
	cout<<"Vuelo comprado."<<endl;
}


//Clase Factura
class Factura{
	private:
		float precio;
		string aerolinea; 
		int no_factura;
	public:
		Factura(float, string, int);
		void actualizar_info();
};


//Constructor de la clase Factura
Factura::Factura(float _precio, string _aerolinea, int _no_factura){
	precio=_precio;
	aerolinea=_aerolinea;
	no_factura=_no_factura;
}


//Void Factura
void Factura::actualizar_info(){
	cout<<endl;
	cout<<"Informacion de Factura: "<<endl;
	cout<<"Precio del Boleto: "<<precio<<endl;
	cout<<"Aerolinea: "<<aerolinea<<endl;
	cout<<"No. de Factura: "<<no_factura<<endl;
}

int main(){
	
	Cliente cliente1("Misael",7158,"a01706158@itesm.mx",12345678,6154);
	cliente1.verificar_cuenta();
	
	Administrador administrador1("Josuse",3434,"josue64@gmail.com",11234);
	administrador1.consult_info();
	
	Vuelos vuelos1("Madrid","Mexico","Primera Clase",97,"22/01/2021",1);
	vuelos1.consultar_vuelo();
	
	
	Factura factura1(15256.45, "Aeromexico", 11256);
	factura1.actualizar_info();
	
	system("pause");
	return 0;
	
}
