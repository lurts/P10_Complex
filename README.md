# 10 Praktikum: Datentyp complex<double>

Gegeben sei ein komplexer Widerstand bestehend aus der Reihenschaltung eines ohmschen Wider-
stands R = 10 Ohm mit einer Induktivität von L = 100mH und einer Kapazität C = 1uF.

## Aufgabe 1

Schreiben Sie ein Programm, das bei Eingabe der Frequenz f die Impedanz (d.h. den komplexen
Scheinwiderstand) der Reihenschaltung Z = R + j w L + 1/( j w C ) berechnet und ausgibt.

**Hinweis:** j bezeichnet (in der Elektrotechnik) die imaginäre Einheit, und es gilt: w = 2 * Pi * f

Die Impedanzen von Induktivität (j w L) und Kapazität (1/( j w C )) sollen dabei jeweils gesondert in
einer eigenen Funktion mit den Übergabeparametern Frequenz und Bauteilwert berechnet und auch
in main ausgegeben werden. Erstellen Sie für die beiden Funktionen ein separates Modul (mit .cpp-
und .h-Datei). Verwenden Sie keine globalen Variablen. Für j und 𝜋 = 3.14159 dürfen aber globale
Konstanten verwendet werden.

Beispiel: f = 100 Hz ➔ Impedanz Induktivität: 62.8319j Impedanz Kapazität: -1591,55j  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Impedanz Reihenschaltung: 10 – 1528.72j
                        
## Aufgabe 2

Erweitern Sie Ihr Programm so, dass die Frequenz und die Polarkoordinaten der Impedanz (d. h. Ab-
solutwert und Winkel - in Grad²) über den Frequenzbereich von 100 Hz bis 1kHz ausgegeben wer-
den. In der Schleife ist dabei die Frequenz jeweils durch Multiplikation mit 1,05 zu erhöhen.

**Beispiel:** f = 100 Hz ➔ Polarkoordinaten: (1528.75, -89,6252°)

## Aufgabe 3

Stellen Sie die Kurve der Impedanz über der Frequenz mit Microsoft Excel (oder einem anderen Ta-
bellenkalkulation-Programm) grafisch dar.

Erzeugen Sie hierzu eine CSV-Datei werte.csv, in der pro Zeile die Frequenz und der Absolutwert
der zugehörigen Impedanz Z durch ; (Semikolon) getrennt stehen.

Öffnen Sie zur Darstellung der Kurve zunächst nur Excel ohne eine Datei, um die Einstellungen so zu
ändern, dass beim Einlesen von Werten ein Dezimalpunkt (wie vom C++-Programm erzeugt) statt ei-
nes Dezimalkommas erwartet wird. Klicken Sie dazu im Menu Datei auf Optionen und dort auf Erwei-
tert. Entfernen Sie dann in der Rubrik „Bearbeitungsoptionen“ das Häkchen bei „Trennzeichen vom
Betriebssystem übernehmen“ und setzen als Dezimaltrennzeichen . (Punkt) und als Tausendertrenn-
zeichen , (Komma). Klicken Sie auf OK.

Öffnen Sie jetzt die Datei werte.csv und selektieren alle Werte (A:1 bis B:48) mit der Maus. Die Kurve
können Sie dann im Menu Einfügen, Abschnitt Diagramme erzeugen. Wählen Sie bei Punkt (XY) –
erkennbar an einem Koordinatensystem mit eingetragenen Punkten – die Variante „Punkte mit inter-
polierten Linien“. Dann wird das Diagramm zum Excel-Sheet hinzugefügt.

**Hinweis:**

Ihr Programm soll mit den Datentypen complex<double> arbeiten. Impedanzen sollen somit von
diesem Typ sein und die Berechnungen werden mit diesem Typ ausgeführt. (Siehe Einführungs-Kapi-
tel der Vorlesung, Abschnitt „Komplexe Zahlen“ und Datei complex.cpp.)
