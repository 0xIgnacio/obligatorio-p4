#ifndef OBLIGATORIO_P4_FACHADA_H
#define OBLIGATORIO_P4_FACHADA_H

#include "Comun.h"
#include "DiccioBrujas.h"
#include "Error.h"
#include "Suprema.h"

class Fachada {
private:
  // Atributes
  DiccioBrujas Brujas;

public:
  // Constructor / Destructor
  Fachada();
  ~Fachada();

  // Methods
  void nuevaSuprema(Suprema *, Error &);     // 1) Registrar bruja suprema
  void nuevaComun(Comun *, string, Error &); // 2) Nueva comun y asignar super
  void listarAquelarre(Iterador &, Error &); // 3) Listar alfabeticamente brujas
  void listarBruja(string, Error &); // 4) Listar bruja en concreto, en caso de
                                     // comun listar super tambien
  void listarSupremaMayor(Error &);  // 5) Listar suprema mas anciana
  void registrarHechizo(string, Hechizo *,
                        Error &);           // 6) Agregar hechizo a bruja
  void listarHechizo(string, int, Error &); // 7) Listar hechizo
  int hechizosEspecialesAno(
      string, int, Error &); // 8) Cant hechizos especiales en determinado año
};

#endif // OBLIGATORIO_P4_FACHADA_H
