#ifndef __BST_H__
#define __BST_H__


using namespace std;




template <typename T>
class nodo {
	public:
		
	T label;
	nodo *parent;
	nodo *left;
	nodo *right;
	
/**

@brief Función que indica si un nodo es hijo izquierdo de su padre o no

@return True si es hijo izquierdo, False en caso contrario

*/
bool hijo_izq() const;



/**

@brief Función recursiva que devuelve el numero de nodos que cuelgan de un nodo base

@param n Nodo base

@return El numero de nodos totales;

*/
int size(const nodo *n) const;



/**

@brief Operador de asignación

@param n Objeto que se quiere copiar

@return Una referencia al objeto de la clase

*/
nodo<T> & operator=(const nodo &n);
	
	
/**

@brief Destructor de la clase. Libera la memoria ocupara por toda la estructura de nodos

*/
~nodo();
}










/** 

@brief Especificación del TDA BST
@file bst.h

TDA BST

Es un tipo de dato contenedor que permite la inserción, la consulta y el borrado en orden log2(n) de cualquier dato de tipo T.

Para ello, los objetos T deben tener las operaciones: 
	- bool operator=(const T &c);
	- bool operator==(const T & c);
	- bool operator<(const T &c);
	
*/
template <typename U>
class BST {
	private:
		
	nodo<U> raiz;
	
/**

@brief Función Privada que devuelve una referencia a un nodo si se encuentra en el arbol. Si no lo encuentra devuelve NULL

@param dato Dato a encontrar

@return Una referencia  al objeto.

*/
nodo<U> & private_find(const U &dato);
	
	public:
		
		
/**

@brief Constructor por parámetros. Inicializa el BST recién creado con la etiqueta indicada como raíz

@param e Etiqueta

*/
BST(const U &e);



/**

@brief Función que inserta un dato en el árbol

@param dato Dato que se quiere insertar

@return True si se ha podido insertar, False en caso contrario (porque ya se encontraba)

*/
bool insert(const U &dato);



/**

@brief Función que indica si un dato se encuentra en el árbol

@param dato Dato a consultar

@return True si se encuentra, False en caso contrario

*/
bool find(const U &dato);



/**

@brief Borra el dato indicado del arbol

@param dato Dato a eliminar

@return True si se ha borrado False en caso contrario

*/
bool erase(const U &dato);



/**

@brief Devuelve el número de nodos de un árbol

@return El número de nodos del árbol

*/
int size();



/**

@brief Función que elimina todos los nodos de un árbol

*/
void clear();



/**

@brief Función que Indica si el árbol esta vacío o no

@return True si está vacío, False en caso contrario

*/
bool empty();



/**

@brief Destructor de la clase. Libera toda la memoria reservada por BST tras su uso

*/
~BST();

}


#endif;
















