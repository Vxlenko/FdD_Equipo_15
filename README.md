# Equipo 15 - Fundamentos de Diseño
### Carrera de Ingeniería Informática / Industrial  
**Universidad Peruana Cayetano Heredia**

---

## 🌍 Descripción del Equipo 
Somos el **Equipo 15** del curso **Fundamento de Diseño 2026-2**, conformado por estudiantes de la carrera de Ingeniería Informática / Industrial.  

## Propósito del Proyecto

Aplicamos metodología de diseño centrado en el usuario para desarrollar una solución tecnológica que aborda la sostenibilidad de recursos hídricos en contextos urbanos, generando impacto social, ambiental y tecnológico.

---

## 📸 Fotografía del Equipo  
<p align="center">
<img width="1408" height="768" alt="equipo_15" src="/Recursos/Imágenes/Grupo.png" />
  <em>Figura 1. Fotografía del equipo 15</em>
</p>

---

## 👥 Integrantes del Equipo  

| Foto | Nombre | Rol | Intereses |
|------|--------|-----|-----------|
| <img src="/Recursos/Imágenes/Kenneth.png" width="90"/> | **Kenneth Samir Ramos Espinoza** | Líder del equipo | Innovación social, sostenibilidad |
| <img src="/Recursos/Imágenes/Giordano.png" width="90"/> | **Giordano Valentino Valero Bonifacio** | Responsable de investigación | Gestión ambiental, desarrollo comunitario |
| <img src="/Recursos/Imágenes/Leonardo.png" width="90"/> | **Leonardo Pedro Espinoza Flores** | Diseñador/a | Diseño de prototipos, creatividad aplicada |
| <img src="/Recursos/Imágenes/Josue.png" width="90"/> | **Josue Ismael Cardenas Luna** | Encargado/a de documentación | Comunicación científica, redacción técnica |
| <img src="/Recursos/Imágenes/Willians.png" width="90"/> | **Leonel Willians Sotelo Mamani** | Programador/a - Modelador/a | Programación, análisis de datos, simulación |

---

## 🌍 Alineación con los Objetivos de Desarrollo Sostenible (ODS):

* **ODS 6: Agua Limpia y Saneamiento (Principal)**
  * **Meta 6.4:** Aumentar la eficiencia en el uso del agua en el riego de áreas verdes urbanas mediante control por humedad y registro de consumo.

* **ODS 9: Industria, Innovación e Infraestructura (Secundario)**
  * **Meta 9.4:** Modernizar los sistemas de riego tradicionales incorporando tecnología IoT de bajo costo.

* **ODS 11: Ciudades y Comunidades Sostenibles (Secundario)**
  * **Meta 11.7:** Contribuir al mantenimiento de áreas verdes públicas mediante un riego más eficiente.

---

## 🎯 Objetivos del Proyecto

## 🎯 Objetivos del Proyecto

* **Objetivo General:**
  Desarrollar un sistema modular de monitoreo y riego por zonas para áreas verdes de San Martín de Porres, que utilice mediciones del suelo para apoyar las decisiones de riego y registre el consumo de agua.

* **Objetivos Específicos:**
  1. Adquirir y visualizar la humedad y temperatura del suelo asociadas a una zona.
  2. Centralizar la información y conservar registros con fecha y hora para su consulta web.
  3. Integrar canales de riego independientes y medición de caudal por línea.
  4. Validar las mediciones y comparar el consumo frente a una condición de referencia bajo condiciones comparables.

---

## 💡 Propuesta de Solución

* **Descripción general:** Sistema modular de monitoreo y riego por zonas para áreas verdes de San Martín de Porres. Cada zona tiene un módulo de medición de humedad y temperatura del suelo basado en ESP32-C3, que se comunica con una central ESP32-S3 mediante ESP-NOW. La central envía los datos a una plataforma web y los almacena en Supabase.
* **Problema que busca atender:** El riego con horario fijo o manual no considera la humedad real de cada sector. Esto puede dejar zonas con agua insuficiente y otras con riego innecesario.
* **Enfoque de diseño:** Metodología VDI 2206, con alternativas de solución evaluadas mediante el método Pugh. El prototipo registrará el volumen de agua por zona para compararlo con un método de referencia.

---

## 📂 Documentación del proyecto

* [Informe técnico (Entregable 2)](Fundamentos%20de%20Dise%C3%B1o/Entregables/Entregable_2.md)
* [Desk research y evaluación de referencias (Taller 7)](Fundamentos%20de%20Dise%C3%B1o/Talleres/Taller%207/Informe_Taller_7.md)
* [Código y documentación por módulo](Proyecto/README.md)

---

## 📌 Resumen Final

El proyecto propone un sistema modular de monitoreo y riego por zonas para áreas verdes de San Martín de Porres. Mide la humedad del suelo en cada zona, centraliza los datos en una plataforma web y registra el volumen de agua utilizado. El efecto del sistema sobre el consumo de agua se determinará con mediciones del prototipo.
