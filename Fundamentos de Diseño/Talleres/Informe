# Sistema modular de riego automatizado para parques y áreas verdes de San Martín de Porres

## 1. Problemática

El agua es un recurso cuya gestión resulta especialmente relevante en Lima debido a las condiciones de disponibilidad hídrica de la costa peruana. La Autoridad Nacional del Agua (ANA) señala que la vertiente del Pacífico concentra al 66 % de la población peruana, pero dispone únicamente del 2,2 % del agua superficial del país [1]. Esta situación hace relevante mejorar la eficiencia en el uso del recurso hídrico, especialmente en actividades urbanas que requieren un suministro continuo.

En Lima Metropolitana y Callao, la Superintendencia Nacional de Servicios de Saneamiento (SUNASS) reportó un consumo promedio de 134 litros de agua potable por persona al día durante 2025 [2]. Asimismo, SUNASS señala que, en distritos con viviendas que cuentan con jardines privados, el riego puede representar hasta el 22 % del consumo diario, mientras que en zonas sin áreas verdes esta proporción no supera el 4 % [2]. Estos datos corresponden a Lima Metropolitana y Callao y no específicamente a San Martín de Porres, por lo que se utilizan como referencia del contexto urbano y no como una estimación del consumo de los parques del distrito.

En San Martín de Porres existe una necesidad permanente de mantener las áreas verdes y, paralelamente, se han implementado sistemas de riego tecnificado en parques del distrito. En 2025, la Municipalidad de San Martín de Porres informó la inauguración de sistemas de riego tecnificado en los parques Stella Maris y Antonio Raymondi. La municipalidad indicó que estos sistemas permiten mantener las áreas verdes, asegurar el suministro necesario de agua y reducir la dependencia de cisternas en determinados espacios [3,4]. Además, la municipalidad señaló que el distrito cuenta con más de 650 parques [3].

La existencia de numerosos espacios verdes y de diferentes modalidades de riego plantea la necesidad de gestionar el agua de manera eficiente. Un sistema basado únicamente en horarios predeterminados o intervención manual puede no responder a las condiciones reales de cada zona. La humedad del suelo puede variar dentro de un mismo parque debido a factores como exposición solar, sombra, tipo de suelo, vegetación y condiciones ambientales. Por ello, aplicar el mismo riego a todas las zonas puede producir un suministro insuficiente en algunos sectores o un uso innecesario de agua en otros.

Asimismo, cuando no se registra el volumen utilizado por cada zona, resulta más difícil conocer el consumo y evaluar objetivamente posibles mejoras. El uso de sensores de humedad permite obtener información sobre las condiciones del suelo, mientras que los sensores de flujo pueden registrar el volumen de agua utilizado.

Por ello, el problema central del proyecto se formula de la siguiente manera:

> ¿Cómo mejorar la gestión del agua utilizada para el riego de parques y áreas verdes de San Martín de Porres mediante un sistema automatizado que adapte el riego a las condiciones de humedad del suelo y permita registrar el consumo de agua?

## 2. Justificación mediante estadísticas y evidencia

La problemática puede sustentarse mediante evidencia de diferentes ámbitos. En el contexto nacional, la Autoridad Nacional del Agua (ANA) reporta que la vertiente del Pacífico concentra al 66 % de la población peruana y dispone únicamente del 2,2 % del agua superficial del país [1]. En el contexto metropolitano, la Superintendencia Nacional de Servicios de Saneamiento (SUNASS) reportó un consumo promedio de 134 L por persona al día en Lima Metropolitana y Callao durante 2025; además, en viviendas con jardines privados, el riego puede representar hasta el 22 % del consumo diario [2]. A nivel distrital, la Municipalidad de San Martín de Porres ha implementado sistemas de riego tecnificado en diferentes parques del distrito y, durante 2025, informó la instalación de estos sistemas en los parques Stella Maris y Antonio Raymondi [3,4]. En conjunto, esta información permite contextualizar la importancia de gestionar eficientemente el agua destinada al mantenimiento de las áreas verdes, considerando tanto las condiciones de disponibilidad hídrica como las necesidades de riego en el ámbito urbano.

Estas cifras no deben interpretarse como una medición directa del desperdicio de agua en los parques de San Martín de Porres. En particular, el dato del 22 % corresponde a viviendas con jardines privados en Lima Metropolitana y Callao, no a parques públicos del distrito [2]. Por ello, se utiliza únicamente para contextualizar la importancia que puede tener el riego dentro del uso urbano del agua.

La evidencia disponible permite justificar la necesidad de mejorar la gestión del riego, pero no permite establecer todavía un porcentaje específico de ahorro producido por el prototipo. Cualquier reducción del consumo deberá determinarse mediante mediciones experimentales posteriores.

## 3. Propuesta de solución

Se propone desarrollar un sistema modular de riego automatizado para parques y áreas verdes de San Martín de Porres, capaz de controlar el riego de manera independiente por zonas.

El sistema utilizará un ESP32 como unidad de control y sensores de humedad del suelo para determinar las condiciones de cada sector. De acuerdo con los valores registrados, el sistema podrá activar o desactivar electroválvulas para suministrar agua cuando sea necesario. También incorporará sensores de flujo para registrar el volumen de agua utilizado durante cada periodo de riego.

La propuesta contempla además comunicación IoT/web, mediante la cual se podrán visualizar datos de humedad y consumo para facilitar el monitoreo. De esta manera, el proyecto busca que las decisiones de riego se basen en condiciones medidas y que el consumo pueda ser registrado.

El carácter modular permitirá controlar diferentes sectores de manera independiente. Esto resulta pertinente porque las necesidades de riego pueden variar dentro de un mismo parque debido a diferencias de exposición solar, vegetación, suelo y sombra.

En esta etapa no se establece un porcentaje de reducción del consumo. La reducción del uso de agua será un resultado que deberá comprobarse experimentalmente mediante mediciones del prototipo.

## 4. Relación con los Objetivos de Desarrollo Sostenible

### 4.1. ODS principal: ODS 6 — Agua limpia y saneamiento

El proyecto se relaciona principalmente con el ODS 6: Agua limpia y saneamiento, específicamente con la meta 6.4, que busca aumentar sustancialmente la eficiencia en el uso del agua en todos los sectores y asegurar extracciones y abastecimiento sostenibles de agua dulce frente a la escasez hídrica [5].

El indicador oficial asociado es el 6.4.1: Cambio en la eficiencia del uso del agua a lo largo del tiempo [5]. La propuesta se relaciona con esta meta porque busca mejorar la eficiencia del riego mediante sensores, automatización y medición del consumo.

Sin embargo, el prototipo no mide directamente el indicador oficial 6.4.1 de Naciones Unidas. Para evaluar el funcionamiento del sistema pueden utilizarse indicadores propios, como el volumen de agua utilizado por zona, el consumo por periodo, la frecuencia de activación de las electroválvulas y la humedad del suelo antes y después del riego.

### 4.2. ODS secundario: ODS 9 — Industria, innovación e infraestructura

El proyecto también se relaciona con el ODS 9: Industria, innovación e infraestructura, específicamente con la meta 9.4, orientada a modernizar infraestructuras y adoptar tecnologías y procesos ambientalmente racionales, aumentando la eficiencia en el uso de los recursos [6].

El indicador oficial correspondiente es el 9.4.1: Emisiones de CO₂ por unidad de valor añadido [6]. Este indicador no es calculado por el prototipo. La relación con el ODS 9 se encuentra en la incorporación de sensores, automatización, control electrónico y comunicación IoT para mejorar la gestión del riego.

### 4.3. ODS secundario: ODS 11 — Ciudades y comunidades sostenibles

El proyecto se vincula asimismo con el ODS 11: Ciudades y comunidades sostenibles, particularmente con la meta 11.7, que busca proporcionar acceso universal a espacios verdes y públicos seguros, inclusivos y accesibles [7].

El indicador oficial 11.7.1 mide la proporción media del área construida de las ciudades destinada a espacios abiertos de uso público [7]. El prototipo no calcula directamente este indicador, pero puede contribuir al mantenimiento de áreas verdes existentes mediante una gestión más eficiente del riego.

Por tanto, la relación con el ODS 11 debe entenderse como una contribución al mantenimiento sostenible de espacios verdes y no como una medición directa del indicador 11.7.1.

## 5. Indicadores de evaluación del prototipo

Para evaluar experimentalmente la propuesta se pueden considerar los siguientes indicadores propios:

| Indicador del prototipo                         | Qué permite evaluar                                                                                  |
| ----------------------------------------------- | ---------------------------------------------------------------------------------------------------- |
| Volumen de agua utilizado por zona (L)          | Cantidad de agua empleada en cada sector                                                             |
| Consumo de agua por periodo (L/día o L/semana)  | Evolución del consumo                                                                                |
| Humedad del suelo antes y después del riego (%) | Variación de las condiciones del suelo                                                               |
| Frecuencia de activación de las electroválvulas | Comportamiento del sistema de control                                                                |
| Duración de cada evento de riego (min)          | Tiempo de funcionamiento por zona                                                                    |
| Reducción porcentual del consumo (%)            | Efecto del sistema frente a una condición de referencia, únicamente cuando se mida experimentalmente |

Estos indicadores son propios del proyecto y no deben presentarse como indicadores oficiales de los ODS.

## 6. Conclusión

La gestión eficiente del agua es relevante para el mantenimiento de las áreas verdes urbanas de Lima. La información de la ANA y SUNASS muestra la importancia de utilizar el recurso hídrico de manera eficiente, mientras que la evidencia de la Municipalidad de San Martín de Porres demuestra que el riego tecnificado ya se está incorporando en parques del distrito [1–4].

En este contexto, el sistema modular de riego automatizado propuesto plantea una alternativa tecnológica basada en sensores de humedad, electroválvulas, sensores de flujo, ESP32 y comunicación IoT. Su principal aporte será permitir que el riego se gestione por zonas de acuerdo con las condiciones medidas y que el consumo de agua pueda registrarse.

El proyecto se relaciona principalmente con el ODS 6, especialmente con la eficiencia en el uso del agua, y de manera secundaria con los ODS 9 y 11. No obstante, los beneficios cuantitativos del sistema, como una eventual reducción del consumo de agua, deberán comprobarse mediante mediciones experimentales y no asumirse antes de validar el prototipo.

## Referencias

1. Autoridad Nacional del Agua. ANA pone en marcha política de uso de aguas subterráneas para combatir estrés hídrico [Internet]. Lima: Autoridad Nacional del Agua; 2025 [citado 23 sep 2026]. Disponible en: https://www.gob.pe/institucion/ana/noticias/1107626-ana-pone-en-marcha-politica-de-uso-de-aguas-subterraneas-para-combatir-estres-hidrico

2. Superintendencia Nacional de Servicios de Saneamiento. Consumo promedio de agua potable en Lima es de 134 litros al día por persona, con tendencia decreciente de 13 litros en la última década [Internet]. Lima: SUNASS; 2026 [citado 23 sep 2026]. Disponible en: https://www.gob.pe/institucion/sunass/noticias/1350994-consumo-promedio-de-agua-potable-en-lima-es-de-134-litros-al-dia-por-persona-con-tendencia-decreciente-de-13-litros-en-la-ultima-decada

3. Municipalidad Distrital de San Martín de Porres. SMP: Alcalde Hernán Sifuentes inauguró sistema de riego tecnificado y mejoramiento integral del parque Stella Maris [Internet]. Lima: Municipalidad Distrital de San Martín de Porres; 2025 [citado 23 sep 2026]. Disponible en: https://www.gob.pe/institucion/munisanmartindeporres/noticias/1120248-smp-alcalde-hernan-sifuentes-inauguro-sistema-de-riego-tecnificado-y-mejoramiento-integral-del-parque-stella-maris

4. Municipalidad Distrital de San Martín de Porres. SMP: Alcalde Hernán Sifuentes presentó remodelado parque con un nuevo sistema de riego tecnificado [Internet]. Lima: Municipalidad Distrital de San Martín de Porres; 2025 [citado 23 sep 2026]. Disponible en: https://www.gob.pe/institucion/munisanmartindeporres/noticias/1138472-smp-alcalde-hernan-sifuentes-presento-remodelado-parque-con-un-nuevo-sistema-de-riego-tecnificado

5. United Nations Department of Economic and Social Affairs. Goal 6: Clean water and sanitation [Internet]. New York: United Nations; 2026 [citado 23 sep 2026]. Disponible en: https://sdgs.un.org/goals/goal6

6. United Nations Department of Economic and Social Affairs. Goal 9: Industry, innovation and infrastructure [Internet]. New York: United Nations; 2026 [citado 23 sep 2026]. Disponible en: https://sdgs.un.org/goals/goal9

7. United Nations Department of Economic and Social Affairs. Goal 11: Sustainable cities and communities [Internet]. New York: United Nations; 2026 [citado 23 sep 2026]. Disponible en: https://sdgs.un.org/goals/goal11
