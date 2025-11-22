//Plantilla

for (inicializacion; condicion; incremento/decremento) {
    // Código que se repite mientras la condición sea verdadera.
}

while (condicion) {
    // Código que se repite mientras la 'condicion' sea verdadera.
    
    // **Importante:** Debe haber una instrucción que modifique la
    // condición para que el bucle pueda terminar, evitando un bucle infinito.
    modificacionDeLaCondicion;
}

do {
    // Código que se ejecuta al menos una vez, incluso si la condición es falsa.
    
    // **Importante:** Instrucción para modificar la condición.
    modificacionDeLaCondicion;
    
} while (condicion); // La condición se verifica después de la primera ejecución.