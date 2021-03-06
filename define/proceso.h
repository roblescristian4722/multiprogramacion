#ifndef PROCESO_H
#define PROCESO_H
#include <iostream>
#include <regex>
#include "cursor.h"

class Proceso
{
private:
    std::string nombre;
    std::string operacion;
    unsigned int lote;
    std::string resultado;
    unsigned long id;
    unsigned long tiempoMax;
    unsigned long tiempoRes;
    unsigned long tiempoTrans;
public:
    Proceso();
    Proceso(unsigned long id, std::string nombre, std::string operacion,
            unsigned long tiempoMax);
    ~Proceso();
    
    // Obtiene el nombre del programador del proceso
    const std::string& getNombre() const;
    // Obtiene el tipo de operación a realizar en el proceso
    const std::string& getOperacion() const;
    // Obtiene el ID único del proceso
    const unsigned long& getId() const;
    // Obtiene el tiempo máximo estimado de ejecución del proceso (en segundos)
    const unsigned long& getTiempoMax() const;
    // Obtiene el resultado de la operación 
    const std::string& getResultado() const;
    // Obtiene el tiempo restante
    const unsigned long& getTiempoRes() const;
    // Obtiene el tiepo transcurrido
    const unsigned long& getTiempoTrans() const;
    // Obitiene el número de lote
    const unsigned int& getLote() const;
    
    // Genera el resultado de la operación
    void calculate();
    // Asigna el resultado de la operación (usado principalmente cuando hay un
    // error en la ejecución)
    void setResultado(const std::string& resultado);
    // Asigna el tiempo restante
    void setTiempoRes(const unsigned long& tiempoRes);
    // Asigna el tiepo transcurrido
    void setTiempoTrans(const unsigned long& tiempoTrans);
    // Asigna el nombre del programador del proceso
    bool setNombre(const std::string& nombre);
    // Asigna el tipo de operacion a realizar en el proceso
    bool setOperacion(const std::string& operacion);
    // Asigna el ID único al proceso
    bool setId(const std::string& idD);
    // Asigna el tiempo máximo estimado de ejecucón del proceso (en segundos)
    bool setTiempoMax(const std::string& tiempoMax);
    // Asigna el número de lote
    void setLote(const unsigned int& lote);
};

#endif // PROCESO_H
