//Plantilla

if (condicion1) {
    // Código si 'condicion1' es verdadera.
} else if (condicion2) {
    // Código si 'condicion1' fue falsa, y 'condicion2' es verdadera.
} else if (condicion3) {
    // Código si 'condicion1' y 'condicion2' fueron falsas, y 'condicion3' es verdadera.
} else {
    // (Opcional) Código de último recurso si todas las condiciones anteriores fallan.
}

switch (expresion) {
    case valor1:
        // Código si 'expresion' == 'valor1'.
        break; // Necesario para salir.
    case valor2:
        // Código si 'expresion' == 'valor2'.
        break;
    default:
        // Código si no coincide con ningún 'case'.
}