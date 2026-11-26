# LISTA DE EXIGENCIAS

**Edición:** 2026 - 02  
**Pág:** 1 de 1

| Campo | Información |
|---|---|
| **PROYECTO** | Sistema de Riego Automatizado |
| **Fecha** | 24/09/2026 |
| **Revisado** | …...... |

## CLIENTE

1. José Luis Da Silva
2. John Edward Esquiagola Aranda
3. Johmer Rodrigo Contreras Paucca
4. Marco Antonio Mugaburu Celi

## ELABORADO

1. Giordano Valentino Valero Bonifacio
2. Josue Ismael Cardenas Luna
3. Leonel Willians Sotelo Mamani
4. Leonardo Pedro Espinoza Flores
5. Kenneth Samir Ramos Espinoza

---

## Tabla de exigencias

| Fecha (cambios) | Clase | Descripción | Responsable |
|---|:---:|---|---|
| 24/09/2026 | | **FUNCIÓN PRINCIPAL:** | |
| | E | El sistema debe gestionar el riego de áreas verdes por zonas independientes, utilizando mediciones de humedad del suelo para decidir qué sectores requieren agua y registrando el volumen utilizado. | Todos |
| | E | El prototipo debe permitir comparar el consumo de agua de un método de referencia con el consumo obtenido mediante el control por humedad, sin asumir previamente un porcentaje de ahorro. | Todos |
| | | **GEOMETRÍA:** | |
| | E | El sistema debe presentar una arquitectura modular que permita añadir nuevas zonas sin rediseñar completamente el sistema. | Todos |
| | E | Los módulos, sensores y conexiones deben instalarse sin obstaculizar el tránsito ni las actividades normales del área verde. | Todos |
| | D | Los módulos deben ser compactos y permitir una instalación discreta. | Todos |
| | | **CINEMÁTICA:** | |
| | E | Cada zona debe disponer de una salida de agua controlable de manera independiente mediante válvula, bomba u otro actuador compatible. | Leonardo |
| | | **FUERZAS:** | |
| | E | Los soportes, tuberías, uniones y actuadores deben resistir el peso de los componentes y la presión de trabajo sin deformaciones ni fugas. | Leonardo |
| | | **MATERIA:** | |
| | E | Las partes expuestas al exterior deben utilizar materiales resistentes a la humedad, salpicaduras y condiciones ambientales propias de un área verde. | Willians |
| | | **ENERGÍA:** | |
| | E | La electrónica debe operar con baja tensión y contar con protección eléctrica adecuada. El consumo energético deberá medirse durante las pruebas. | Josue |
| | D | Se podrá incorporar batería recargable y alimentación mediante energía solar para aumentar la autonomía del sistema. | Josue |
| | | **SEÑALES — ENTRADAS:** | |
| | E | El sistema debe recibir mediciones de humedad del suelo correspondientes a cada zona. | Josue |
| | E | El sistema debe registrar información que permita determinar el volumen de agua utilizado. | Josue |
| | E | Debe existir la posibilidad de ingresar un comando manual de riego o detención. | Josue |
| | | **SEÑALES — SALIDAS:** | |
| | E | El sistema debe generar órdenes independientes de apertura o cierre para la salida de agua de cada zona. | Josue |
| | E | Debe generar información sobre el estado del sistema, alarmas y registro de eventos. | Josue |
| | | **CONTROL:** | |
| | E | El sistema debe comparar la humedad medida con parámetros configurables para cada zona y evitar activaciones repetitivas provocadas por lecturas inestables. | Giordano |
| | E | Ante una falla o lectura inválida, el sistema debe pasar a una condición segura. | Giordano |
| | E | El prototipo debe permitir realizar pruebas con un mínimo de dos zonas de diferente humedad. | Giordano |
| | | **ELECTRÓNICA (HARDWARE):** | |
| | E | El sistema debe incorporar procesamiento electrónico, sensores de humedad, medición de agua, accionamiento de las salidas de riego, protección eléctrica y conexiones identificadas. | Giordano / Willians |
| | | **SOFTWARE:** | |
| | E | El software debe leer y validar sensores, controlar las zonas, registrar eventos y permitir configurar parámetros de funcionamiento. | Willians / Leonardo |
| | E | El sistema debe recuperarse de manera segura después de un reinicio o pérdida temporal de alimentación. | Willians / Leonardo |
| | | **COMUNICACIONES:** | |
| | E | El sistema debe transmitir mediciones y estados hacia una interfaz remota mediante una tecnología de comunicación adecuada. | Kenneth |
| | E | La interfaz debe mostrar la zona, última lectura, estado del riego y registros de consumo disponibles. | Kenneth |
| | E | Las funciones básicas de control no deben depender exclusivamente de una conexión permanente a Internet. | Kenneth |
| | | **SEGURIDAD:** | |
| | E | No deben existir conductores eléctricos expuestos y el sistema debe contar con protección frente a cortocircuitos o sobrecorriente. | Todos |
| | E | El usuario debe poder detener manualmente el riego durante mantenimiento, pruebas o emergencia. | Todos |
| | | **ERGONOMÍA:** | |
| | E | El usuario debe poder identificar fácilmente las zonas húmedas, secas, activas y aquellas que presenten una falla. | Todos |
| | D | La interfaz podrá representar las distintas zonas mediante una visualización tipo matriz. | Todos |
| | | **FABRICACIÓN:** | |
| | E | El prototipo debe fabricarse con herramientas, procesos y materiales disponibles para el equipo. | Todos |
| | E | La lista de materiales debe indicar componente, cantidad, especificación mínima y costo aproximado. | Todos |
| | | **CONTROL DE CALIDAD:** | |
| | E | Antes de la validación deben comprobarse sensores, funcionamiento independiente de las zonas, ausencia de fugas, medición de agua, comunicación y respuesta ante fallas. | Kenneth |
| | E | Se deberán ensayar dos sectores y registrar humedad, litros utilizados, número de activaciones y duración de los eventos de riego. | Kenneth |
| | E | El porcentaje de ahorro solo deberá calcularse a partir de los resultados experimentales obtenidos. | Kenneth |
| | | **MONTAJE:** | |
| | E | El montaje debe realizarse siguiendo un esquema eléctrico y un plano básico de la instalación hidráulica. | Todos |
| | E | Los sensores deben ubicarse de forma representativa para cada zona y evitando la influencia directa inmediata del chorro de agua. | Todos |
| | E | Sensores, válvulas y conexiones deben permanecer accesibles para limpieza, calibración o reemplazo. | Todos |
| | | **COSTOS:** | |
| | E | Se debe registrar el costo total del prototipo incluyendo sensores, electrónica, actuadores, medición de agua, estructura, alimentación, instalación y software. | Todos |
| | D | Se priorizarán alternativas disponibles localmente y de bajo costo siempre que cumplan las exigencias técnicas y de seguridad. | Todos |
| | | **PLAZOS:** | |
| | E | Semana 8: presentar avance funcional y pruebas iniciales. | Todos |
| | E | Semana 16: presentar prototipo final, documentación y resultados de validación. | Todos |

---

## Leyenda

- **E = Exigencia:** requisito obligatorio para el diseño y funcionamiento del sistema.
- **D = Deseo:** característica conveniente que puede mejorar el sistema, pero no es indispensable.