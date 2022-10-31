#include <iostream>
#include <queue>
using namespace std;
int main () {
	// Haciendo uso de la estructura queue == cola
	// First In First Out - FIFO
	// Primero en Entrar Primero en Salir
	// En colas de C++ push == enqueue 
	// En colas de C++ pop == dequeue
	queue <int> Q;
	Q.push(5); // | Front | 5 | End |
	Q.push(2); // | Front | 5 | 2 | End |
	Q.pop();   // | Front | 2 | End |
	Q.push(3); // | Front | 2 | 3 | End |
	Q.pop();   // | Front | 3 | End |
	cout<<"Tamanio de la cola: "<<Q.size()<<endl;
	cout<<"Frente de la cola: "<<Q.front()<<endl;
	cout<<"Final de la cola: "<<Q.back()<<endl;
	return 0;
}
