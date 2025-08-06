class figura {
    constructor(nombre, color) {
        this.nombre = nombre;
        this.color = color;
    }

    mostrar() {
        console.log(`Figura: ${this.nombre}, Color: ${this.color}`);
    }
}

class cuadrado extends figura {
    constructor(color, lado) {
        super('Cuadrado', color);
        this.lado = lado;
    }

    area() {
        return this.lado * this.lado;
    }

    mostrar() {














































                º   ººººººººººººººººººººººººººººººº11111111 
        super.mostrar();
        console.log(`Lado: ${this.lado}, Área: ${this.area()}`);
    }
}