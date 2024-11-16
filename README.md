# Project Menyalakan LED Menggunakan Tombol (Pushbutton) dengan Arduino

Project ini bertujuan untuk mengendalikan LED menggunakan tombol (pushbutton) dengan Arduino Uno. Ketika tombol ditekan, LED akan menyala, dan saat tombol dilepas, LED akan mati. Program ini menggunakan mode **INPUT_PULLUP** pada pin tombol, yang berarti tombol akan menghubungkan pin ke GND saat ditekan, dan pin akan membaca **HIGH** saat tombol tidak ditekan.

## Daftar Alat dan Bahan

- 1 x **Arduino Uno**
- 1 x **Breadboard**
- 1 x **Pushbutton (Tombol Tekan)**
- 1 x **LED (Light Emitting Diode)**
- 1 x **Resistor 1k Ω** (untuk LED)
- Kabel penghubung (jumper wires)

## Skematik

Sambungkan komponen-komponen berikut pada breadboard sesuai dengan skematik berikut:

1. Sambungkan salah satu kaki **LED** ke pin digital **5** pada Arduino.
2. Sambungkan kaki pendek (katoda) LED ke resistor 1kΩ, lalu sambungkan ujung resistor ke pin GND pada Arduino.
3. Sambungkan salah satu kaki **Pushbutton** ke pin digital **6** pada Arduino.
4. Sambungkan kaki lainnya dari tombol ke **GND** pada Arduino.
5. Pada pin tombol, saya menggunakan **INPUT_PULLUP**, sehingga tidak memerlukan resistor eksternal untuk "pull-up" (resistor internal sudah aktif).
