# templatesCpp
💻 - Lección de Programación de estructuras de datos y algoritmos fundamentales || Itesm Tercer Semestre

¿Que son los templates?
🤓 Definición: El uso de Templates (Plantillas) es una característica del lenguaje de programación C++ en el cual permite que funciones y clases operen con tipos de datos genéricos, permitiendo con esto que una función o clase trabaje en muchos tipos de datos sin tener que reescribirse para cada uno. 

Ejemplo de función: 

template <typename T>
T menor(T uno, T dos){
  if (uno < dos){
       return uno;
  }
  return dos;
}

template <class T>                 
class Value{                 
     public:            
          Value();       
          Value(T);    
          T getValue;
          void setValue(T value);
     private:
          T value;
};

template <class T>
Value<T>::Value(T value){
      this->value = value; 
}
  
template <class T>
T Value<T>::getValue(){
      return this->value;
}
