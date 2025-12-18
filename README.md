# Můj ročníkový projekt pro ročník 2025/2026

## Co to bude?/Hlavní funkce.
Chceme ve spolupráci s Hlibem vytvořit stolní zařízení na bázi Arduino UNO. Bude schopné připojení k telefonu přes bluetooth a vzápětí nás upozorní že nás někdo potřebuje, s to pomocí blikajících LED a reproduktoru, obsažený bude také vibrační motorek, který rozvibruje stůl. V tomto případě rodiče zařízení také bude mí skenovatelný NFC tag, který uživatele přesune na Obchod Play, kde bude moci stáhnout aplikaci k BT rozhraní. Zařízení bude mít také obrazovku.

## Díly a jejich využití, parametry.
### Arduino UNO
Rozhodl jsem se začít na bázi **Arduino UNO** a ktomu zakoupit startovní sadu **LaskaKit Arduino MINI Starter kit** 
https://www.laskakit.cz/laskkit-arduino-mini-starter-kit/ - pro začátek obsahuje vše co potřebujeme a bude solidním základem pro projekt
### 1.3" 240x240 TFT IPS Barevný displej ST7789, SPI
pro obrazovku jsme si vybrali právě tuto, hlavní myšlenou byla její velikost, které chce později využií ve vedlejším projektu, kterým je handheld verze daného zařízení, také protože má i barevné zobrazování; Využívá technologii tenkovrstvých tranzistorů (Thin Film Transistor) k ovládání jednotlivých pixelů, což umožňuje vyšší rozlišení, lepší barvy a rychlejší odezvu než starší LCD technologie. Zkrátka Pod každým pixelem je umístěn tranzistor, který řídí jeho jas a barvu. Díky tomu lze přesně ovládat obraz.
https://www.laskakit.cz/1-3--240x240-tft-ips-barevny-displej-st7789--spi/
### NFC nálepka inlay tag, NTAG215
tyto NFC stickery využijeme právě pro odkazování na aplikaci, tento typ má celkovou paměť 540B s uživatelskou pamětí 504B. Je sestaven na základu nového čipu NTAG215 dosahujícího jedné z nejlepších čtecích vzdáleností a vybaveného pokročilými funkcemi.
NFC Forum Type 2 Tag kompatibilita plně odpovídá standardům ISO/IEC 14443 Type A.
vlastnosti čipu
**Paměť:** (více než NTAG213 s 144 bajty, méně než NTAG216 s 888 bajty). **Přepisovatelnost:** až 100 000 cyklů zápisu – vhodné pro dynamické aplikace, kde se data často mění. **Životnost:** uchování dat po dobu až 20 let.
**Rychlost přenosu:** 106 kbit/s.**Napájení:** čip je pasivní – energii získává z elektromagnetického pole NFC čtečky.**Bezpečnost:** 32bitový heslový systém pro ochranu paměti.**Unikátní sériové číslo (UID):** 7 bajtů – slouží k jednoznačné identifikaci tagu. https://www.laskakit.cz/nfc-nalepka-inlay-tag--ntag215--45mm-10ks/
### Bluetooth modul HC-05 TTL
Tento Bluetooth modul je univerzální bezdrátový komunikační modul, který umožňuje sériový přenos dat (UART/TTL) mezi mikrokontroléry, počítači nebo mobilními zařízeními, a to přes Bluetooth 2.0. má tké dosah 10m, což je pro nás dostačující. Může fungovat jako **Master** tak i jako **Slave**
jeho hlavní funcí je, že **nám umožní komunikaci mezi zařízením a telefonem** https://www.laskakit.cz/bluetooth-modul-hc-05-ttl/
### Osvětlení, Bzučák
pro výstražné blikání použijeme dvě LED červené barvy, které budou problikávat jak světla vystražného zařízení na železničním přejezdu (multivibrátor) a pasivní bzučák, který bude měnit tóninu pomocí arduino kódu
// Připojení pasivního bzučáku na pin 8
int buzzer = 8;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // První tón (např. 1000 Hz)
  tone(buzzer, 1000);   // zahraje tón 1000 Hz
  delay(500);           // hraje 0,5 sekundy
  noTone(buzzer);       // vypne bzučák
  delay(200);           // krátká pauza

  // Druhý tón (např. 1500 Hz)
  tone(buzzer, 1500);   // zahraje tón 1500 Hz
  delay(500);           // hraje 0,5 sekundy
  noTone(buzzer);       // vypne bzučák
  delay(200);           // krátká pauza

  # To je pro momentální chvili vše, schémata zapojení, více kódu a sestavení bude až koupím díly, tedy zhruba po vánocích :smiley:

