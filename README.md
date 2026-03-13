# Můj ročníkový projekt pro ročník 2025/2026

## Co to bude?/Hlavní funkce.
Chceme ve spolupráci s Hlibem vytvořit stolní zařízení na bázi Arduino UNO. Bude schopné připojení k telefonu přes bluetooth a vzápětí nás upozorní že nás někdo potřebuje, s to pomocí blikajícího LED pásku a bzučáku. V tomto případě rodiče zařízení také bude mí skenovatelný NFC tag, který uživatele přesune na Obchod Play, kde bude moci stáhnout aplikaci k BT rozhraní. Zařízení bude mít také obrazovku.

## Díly a jejich využití, parametry.
### Arduino UNO
Rozhodl jsem se začít na bázi **Arduino UNO** a ktomu zakoupit startovní sadu **LaskaKit Arduino MINI Starter kit** 
https://www.laskakit.cz/laskkit-arduino-mini-starter-kit/ - pro začátek obsahuje vše co potřebujeme a bude solidním základem pro projekt

### Bluetooth modul HC-05 TTL
Tento Bluetooth modul je univerzální bezdrátový komunikační modul, který umožňuje sériový přenos dat (UART/TTL) mezi mikrokontroléry, počítači nebo mobilními zařízeními, a to přes Bluetooth 2.0. má tké dosah 10m, což je pro nás dostačující. Může fungovat jako **Master** tak i jako **Slave**
jeho hlavní funcí je, že **nám umožní komunikaci mezi zařízením a telefonem** https://www.laskakit.cz/bluetooth-modul-hc-05-ttl/
### Osvětlení, Bzučák
pro výstražné blikání použijeme LED pásek, který jsem recykloval z čelovky, který bude problikávat jako světla výstražného zařízení a pasivní bzučák který bude pípat zároveň s páskem.

[Kód pro Arduino UNO](https://github.com/mishko-exe/Rocnikovy_Projekt_Nezkusil_S3E/blob/main/BT_vyvolavac_deti_copy_led_pasek.ino)

[JAK FUNGUJE? (video)](https://youtube.com/shorts/f1tW5r6IqrI?feature=share)


