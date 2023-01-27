# APPS

Dit is de repository met alle firmware- (source code), hardware- (kicad+schematische tekening) en GUI ontwerp bestanden (squareline studio) gemaakt door de S3 groep van 2022/2023.\\\\
De firmware is geschreven in c en maakt gebruik van het esp-idf framework. Esp-idf is een framework wat los geinstalleerd moet worden en niet meegeleverd wordt met een IDE. \\

VSCode in combinatie met de c/c++ en c/c++ extension pack is het makkelijkst op te zetten. Voor een handleiding [klik hier](https://github.com/teunrensing/APPS/tree/main/docs/install_vscode.md)\\
De hardware ontwerpbestanden zijn gemaakt in kicad, er staat nog een actuele PDF van de schematische tekening in de GitHub repo. \\\\

De GUI ontwerpbestanden zijn gemaakt in squareline studio. (Let op! In autogegenereerde .c bestanden van squareline studio wordt schaduw gebruikt. Dit onderdeel werkt niet en laat de ESP32 crashen. Verwijder deze stukjes code bij het porten van de code naar de ESP32.)

## Status Hardware
De hardware functioneert. Er zijn wat kleine foutjes. Zo zijn de ID_RES pullup weerstanden verkeerd getekend. En zijn niet alle modules precies zoals ze zouden moeten zijn.\\
Mocht iemand zin hebben om een volgende versie te maken... hier wat tips:\\
- Gebruik grotere onderdelen (geen mssop flipflop)\\
- Haal het flipflop flankdetectie circuit eruit voor de encoder\\
- Maak gebruik van een ESP32 devboard i.p.v. een esp32-wroom module\\
- Blijf gebruik maken van standaard onderdelen zoals: 74HC14 en 74HC595\\
- Haal de extra output en input pins weg. \\
- Haal een hele boel switch input pins weg. \\
- Haal de flat flex connector weg voor een display\\

## Status Software

Er zijn op dit moment drie volledige instelschermen (Licht, Vibratie en Tens) volledig af en functionerend. De code is nog vrij grof en lelijk. Dit kan flink gerefactord worden nog. \\
- Er is een module driver voor licht en motor. **Maar de Tens driver ontbreekt nog.**\\
- Er is geen datacommunicatie protocol gemaakt voor externe communicatie met sensoren.\\
- Er is geen stuk software gemaakt die gebruik maakt van de microsd kaart slot.\\
- Er is geen stuk software die detecteert dat de noodstop is ingedrukt. Dit is op dit moment alleen in hardware afgehandeld.\\
- Er zijn geen unit testen (cmock of dut testen)


