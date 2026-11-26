Universidad Peruana Cayetano Heredia
Universidad Peruana Cayetano Heredia MATRIZ MORFOLÓGICA · VDI / ZWICKY
Sistema de riego automatizado  |  Equipo 15
SISTEMA DE RIEGO AUTOMATIZADO — EQUIPO 15
EMLAETCRTRIZÓ MNIOCORFOLÓGICA · ELECTRÓNICO
| FUNCIÓN | ALTERNATIVA 1        | ALTERNATIVA 2      | ALTERNATIVA 3       |
| ------- | -------------------- | ------------------ | ------------------- |
| FUNCIÓN | ALTERNATIVA 1        | ALTERNATIVA 2      | ALTERNATIVA 3       |
|         | Respuesta capacitiva | Reflectometría FDR | Potencial matricial |
Medir humedad del suelo
Sonda resistiva NTC Sensor digital por contacto Sonda combinada
Medir temperatura de
suelo
Turbina con efecto Hall Medición electromagnética Medición por sector
Medir caudal
|     | Control central | Microcontrolador por nodo | Central + nodos |
| --- | --------------- | ------------------------- | --------------- |
Procesar señales
|     | Cableado de señales | ESP-NOW entre nodos | ESP-NOW + WinFi |
| --- | ------------------- | ------------------- | --------------- |
Transmitir datos
Relés electromecánicos MOSFET de potencia MOSFET con protección
Conmutar actuadores

Universidad Peruana Cayetano Heredia
Universidad Peruana Cayetano Heredia MATRIZ MORFOLÓGICA · VDI / ZWICKY
Sistema de riego automatizado  |  Equipo 15
SISTEMA DE RIEGO AUTOMATIZADO — EQUIPO 15
MMEACTÁRNIIZC OMORFOLÓGICA · MECÁNICO
| FUNCIÓN | ALTERNATIVA 1 | ALTERNATIVA 2 | ALTERNATIVA 3 |
| ------- | ------------- | ------------- | ------------- |
| FUNCIÓN | ALTERNATIVA 1 | ALTERNATIVA 2 | ALTERNATIVA 3 |
Gabinete atornillado Caja sellada exterior Gabinete modular desmontable
Proteger electrónica
|     | Soporte fijo | Estaca removible | Estaca solidaria al soporte |
| --- | ------------ | ---------------- | --------------------------- |
Instalar sensores
|     | Tornillos de montaje | Soporte de poste/pared | Anclaje modular |
| --- | -------------------- | ---------------------- | --------------- |
Fijar carcasa
|     | Tubería rígida | Manguera flexible | Tubería con ramales |
| --- | -------------- | ----------------- | ------------------- |
Conducir agua
Electroválvula individual Manifold de electroválvulas Bomba por sector
Dirigir agua por zona
|     | Aspersión | Goteo superficial | Microaspersión localizada |
| --- | --------- | ----------------- | ------------------------- |
Aplicar agua a plantas

Universidad Peruana Cayetano Heredia
Universidad Peruana Cayetano Heredia MATRIZ MORFOLÓGICA · VDI / ZWICKY
Sistema de riego automatizado  |  Equipo 15
SISTEMA DE RIEGO AUTOMATIZADO — EQUIPO 15
EMNAETRRGIÍZA MORFOLÓGICA · ENERGÍA
| FUNCIÓN | ALTERNATIVA 1 | ALTERNATIVA 2 | ALTERNATIVA 3 |
| ------- | ------------- | ------------- | ------------- |
| FUNCIÓN | ALTERNATIVA 1 | ALTERNATIVA 2 | ALTERNATIVA 3 |
Adaptador AC/DC Batería recargable Solar fotovoltaica + batería
Suministrar energía
|     | Celda 18650 | Banco de celdas | Batería externa |
| --- | ----------- | --------------- | --------------- |
Almacenar energía
Carga Linion regulada
|     | Cargador externo |     | Regulación solar + carga |
| --- | ---------------- | --- | ------------------------ |
Gestionar recarga
|     | Conversión DC/DC | Elevación a 5 V | Regulación 5 V y 3.3 V |
| --- | ---------------- | --------------- | ---------------------- |
Acondicionar tensión
Fuente 12 V común Fuente 12 V por sector 12 V separado de lógica
Alimentar bomba
|     | Fusible | Protección rearmable | Corte electrónico |
| --- | ------- | -------------------- | ----------------- |
Proteger alimentación

Universidad Peruana Cayetano Heredia
Universidad Peruana Cayetano Heredia MATRIZ MORFOLÓGICA · VDI / ZWICKY
Sistema de riego automatizado  |  Equipo 15
SISTEMA DE RIEGO AUTOMATIZADO — EQUIPO 15
CMOANTTRRIOZL MORFOLÓGICA · CONTROL
| FUNCIÓN | ALTERNATIVA 1 | ALTERNATIVA 2       | ALTERNATIVA 3 |
| ------- | ------------- | ------------------- | ------------- |
| FUNCIÓN | ALTERNATIVA 1 | ALTERNATIVA 2       | ALTERNATIVA 3 |
|         | Umbral fijo   | Umbrales ajustables | Histéresis    |
Comparar humedad
|     | Solo humedad medida | Humedad + ambiente | Humedad + caudal |
| --- | ------------------- | ------------------ | ---------------- |
Decidir riego
|     | Control centralizado | Decisión por nodo | Central S3 + nodos C3 |
| --- | -------------------- | ----------------- | --------------------- |
Coordinar sectores
|     | Temporización de bomba | MOSFET por nodo | MOSFET con seguridad |
| --- | ---------------------- | --------------- | -------------------- |
Ordenar activación
|     | Parada general | Parada de zona | Corte seguro y aviso |
| --- | -------------- | -------------- | -------------------- |
Responder ante fallas

Universidad Peruana Cayetano Heredia
Universidad Peruana Cayetano Heredia MATRIZ MORFOLÓGICA · VDI / ZWICKY
Sistema de riego automatizado  |  Equipo 15
SISTEMA DE RIEGO AUTOMATIZADO — EQUIPO 15
SMOAFTTRWIAZR MEO ER INFTOELRÓFGAZICA · SOFTWARE E INTERFAZ
| FUNCIÓN | ALTERNATIVA 1        | ALTERNATIVA 2     | ALTERNATIVA 3      |
| ------- | -------------------- | ----------------- | ------------------ |
| FUNCIÓN | ALTERNATIVA 1        | ALTERNATIVA 2     | ALTERNATIVA 3      |
|         | Firmware local único | Firmware por nodo | Proceso coordinado |
Procesar mediciones
|     | Parámetros fijos | Portal web local | Ajustes persistentes |
| --- | ---------------- | ---------------- | -------------------- |
Configurar parámetros
|     | Memoria local | Base remota | Remoto + respaldo |
| --- | ------------- | ----------- | ----------------- |
Registrar mediciones
|     | Pantalla LCD I2C | Panel de control web | LCD + panel web |
| --- | ---------------- | -------------------- | --------------- |
Mostrar datos
|     | Reinicio manual | Reconexión automática | Estado seguro |
| --- | --------------- | --------------------- | ------------- |
Recuperar operación

Universidad Peruana Cayetano Heredia
Universidad Peruana Cayetano Heredia MATRIZ MORFOLÓGICA · VDI / ZWICKY
Sistema de riego automatizado  |  Equipo 15
SISTEMA DE RIEGO AUTOMATIZADO — EQUIPO 15
CMOANTCREIPZT MOOS RDFEO SLOÓLUGCICIÓAN · CONCEPTOS DE SOLUCIÓN
| FUNCIÓN | ALTERNATIVA 1     | ALTERNATIVA 2    | ALTERNATIVA 3        |
| ------- | ----------------- | ---------------- | -------------------- |
| FUNCIÓN | ALTERNATIVA 1     | ALTERNATIVA 2    | ALTERNATIVA 3        |
|         | C1 · Centralizado | C2 · Distribuido | C3 · Híbrido modular |
Arquitectura de control
Sensores cableados al S3 Capacitivo + DS18B20 por C3 Sensado por C3 y reporte central
Medición en campo
|     |     | ESPnNOW | ESPnNOW + WinFi |
| --- | --- | ------- | --------------- |
Señal por cable
Enlace entre módulos
|     | Fuente DC común | Batería por nodo | Panel solar + batería |
| --- | --------------- | ---------------- | --------------------- |
Energía electrónica
Caja central, cableado a campo Cajas verdes separadas Estacas desmontables
Montaje físico
|     | Control desde S3 | MOSFET y bomba por C3 | Actuación + caudal |
| --- | ---------------- | --------------------- | ------------------ |
Actuación del agua
LCD y parada general Nodo local y aviso LCD + web, estado seguro
Información y fallas