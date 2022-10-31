class ListaEnteros {
    private:
        int cuenta;
        int capacidad;
        int *items;
        void agrandar();
    public:
        ListaEnteros(int capacidad);
        ListaEnteros();
        ~ListaEnteros();
        ListaEnteros(const ListaEnteros &otra);
        bool estaVacia();
        int tamano();
        void insertar(int indice, int item);
        void adjuntar(int item);
        int obtener(int indice);
        bool contiene(int item);
        int remover(int indice);
};
