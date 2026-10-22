const int PIN_SOIL  = 34;
const int PIN_RELAY = 26;
const bool RELAY_ACTIVE_LOW = true;

const int RAW_SECO   = 3200;
const int RAW_MOJADO = 1400;

const float UMBRAL_RIEGO = 35.0;
const float UMBRAL_PARO  = 50.0;

const unsigned long INTERVALO_LECTURA_MS = 30000;
const unsigned long TIEMPO_MAX_RIEGO_MS  = 60000;

bool bombaEncendida = false;
unsigned long inicioRiego = 0;
unsigned long ultimaLectura = 0;

float leerHumedad() {
  long suma = 0;
  for (int i = 0; i < 10; i++) {
    suma += analogRead(PIN_SOIL);
    delay(10);
  }
  float promedio = suma / 10.0;
  float porcentaje = (RAW_SECO - promedio) * 100.0 / (RAW_SECO - RAW_MOJADO);
  return constrain(porcentaje, 0.0, 100.0);
}

void setBomba(bool encender) {
  bombaEncendida = encender;
  bool nivel = encender ? HIGH : LOW;
  if (RELAY_ACTIVE_LOW) nivel = !nivel;
  digitalWrite(PIN_RELAY, nivel);
}

void setup() {
  Serial.begin(115200);
  pinMode(PIN_RELAY, OUTPUT);
  setBomba(false);
}

void loop() {
  unsigned long ahora = millis();

  if (ahora - ultimaLectura >= INTERVALO_LECTURA_MS) {
    ultimaLectura = ahora;
    float humedad = leerHumedad();
    Serial.printf("Humedad: %.1f %%  Bomba: %s\n", humedad, bombaEncendida ? "ON" : "OFF");

    if (!bombaEncendida && humedad < UMBRAL_RIEGO) {
      setBomba(true);
      inicioRiego = ahora;
    } else if (bombaEncendida && humedad > UMBRAL_PARO) {
      setBomba(false);
    }
  }

  if (bombaEncendida && ahora - inicioRiego >= TIEMPO_MAX_RIEGO_MS) {
    setBomba(false);
  }
}