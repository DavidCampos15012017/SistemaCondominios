#ifndef CLIENTE_H
#define CLIENTE_H


class cliente
{
   public:
      cliente();
      virtual ~cliente();

      void nuevoCliente(void);
      void nuevofiador(void);
      
   protected:

   private:
      int idCliente;
      char nomCliente[30];
      char apellido1[30];
      char apellido2[30];
      char morosidad[30];
      //-----------------------
      long int idFiador;
      char nomFiador[30];
      char apFiador1[30];
      char apFiador2[30];
      
      
};

#endif // CLIENTE_H
