struct Fraccion {
    int numerador;
    int denominador;
};

struct Fraccion sumaFracciones(struct Fraccion f1, struct Fraccion f2) {
    struct Fraccion resultado;
    //Encontrar el denominador común
    int denominadorComun = f1.denominador * f2.denominador;
    resultado.denominador = denominadorComun;
    //Convertir fracciones a denominadores comunes y sumar numeradores
    resultado.numerador = (f1.numerador * (denominadorComun / f1.denominador)) + (f2.numerador * (denominadorComun / f2.denominador));
    return resultado;
};

struct Fraccion restaFracciones(struct Fraccion f1, struct Fraccion f2) {
struct Fraccion resultado;
    //Encontrar el denominador común
    int denominadorComun = f1.denominador * f2.denominador;
    resultado.denominador = denominadorComun;
    //Convertir fracciones a denominadores comunes y restar numeradores
    resultado.numerador = (f1.numerador * (denominadorComun / f1.denominador)) - (f2.numerador * (denominadorComun / f2.denominador));
    return resultado;
};

struct Fraccion divisionFracciones(struct Fraccion f1, struct Fraccion f2) {
    struct Fraccion resultado;
    //Invertir la segunda fracción y multiplicarla por la primera
    struct Fraccion f2Invertida = {f2.denominador, f2.numerador};
    resultado.numerador = f1.numerador * f2Invertida.numerador;
    resultado.denominador = f1.denominador * f2Invertida.denominador;
    return resultado;
};