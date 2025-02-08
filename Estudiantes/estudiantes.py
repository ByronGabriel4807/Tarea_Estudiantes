class Estudiantes:
    def __init__(self, nombre, edad, calificaciones, grado, carrera):
        self.nombre = nombre
        self.edad = edad
        self.calificaciones = calificaciones
        self.grado = grado
        self.carrera = carrera

    def calcular_promedio(self):
        if not self.calificaciones:
            return 0
        return sum(self.calificaciones) / len(self.calificaciones)

    def ha_aprobado(self):
        promedio = self.calcular_promedio()
        return promedio >= 60 

# Ejemplo de uso
estudiante = Estudiantes("Juan Perez", 20, [70, 80, 90], "Segundo", "Ingeniería")
print(f"Promedio del estudiante: {estudiante.calcular_promedio()}")
print(f"Ha aprobado: {'Sí' if estudiante.ha_aprobado() else 'No'}")