# Gabungan-Suhu-PH-LCD
# Nama : Agung Dwi Surya Tahta


# ALAT DAN BAHAN :
1.	Komputer
2.	Arduino 
3.	Modul LCD 20x4
4.	Sensor suhu DS18B20
5.	Adapter DS18B20
6.	Sensor ph meter
7.	Kabel probe ph meter 
8.	Kabel USB 2.0 Type A Male to Male 
9.	Kabel Jumper Male to Female


# LANGKAH KERJA :
1. Langkah pertama anda harus menginstal software Arduino IDE pada komputer anda. 
2. Setelah menginstal software Arduino IDE dibutuhkan juga library sensor suhu DS18B20 dan sensor ph meter terlebih dahulu,berikut linknya  (https://github.com/matmunk/DS18B20) dan (https://github.com/DFRobot/DFRobot_EC). 
3. Lalu untuk menginstal library sensor suhu DS18B20 dan sensor ph meter, maka masukkan link library pada menu preference secara bergantian  pada  Arduino IDE (cara penginstalan library dan penambahan board ada pada file di atas) lalu tekan tombol "OK" (cara penginstall an ada di file).
4. Jika librarynya sudah terinstal dan ditambahkan, maka anda bisa mulai memasukkan programnya (contoh program ada pada file "suhu_ph" diatas). 
5. Setelah library ditambahkan maka program dapat dimasukkan dan jangan lupa di upload ke Arduino, kemudian buka serial monitor untuk mengetahui apakah program dapat berjalan dengan benar. 
6. Lalu siapkan beberapa jenis benda seperti air yang ingin diketahui nilai suhu-nya dan nilai ph-nya.
7. Masukkan alat sensor suhu DS18B20 dan alat sensor ph meter secara bersamaan  ke dalam beberapa jenis air tersebut, diamkan beberapa saat hingga nilai suhu dan ph-nya muncul pada LCD.


# WIRING/PENGKABELAN :
1.	Hubungkan VCC dan GND Arduino ke jalur positif dan negative project board menggunakan kabel jumper.
2.	Hubungkan kabel sensor suhu DS18B20 dengan adapter DS18B20
- hubungkan kabel kuning pada sensor suhu DS18B20 dengan pin out D0 adapter DS18B20
- hubungkan kabel hitam pada sensor suhu DS18B20 dengan pin out GND adapter DS18B20
- hubungkan kabel merah pada sensor suhu DS18B20 dengan pin out VCC adapter DS18B20
3.	Setelah terhubung , lalu pasang kabel jumper wires male to female untuk menghubungkan adapter DS18B20 dengan VCC dan GND ke project board.
-	 Hubungkan kabel warna kuning dengan pin VCC adapter DS18B20 ke VCC Arduino yang sudah tersambung pada project board.
-	Hubungkan kabel warna orange dengan pin GND adapter DS18B20 ke GND Arduino yang sudah tersambung pada project board.
-	Hubungkan  kabel warna merah dengan pin SIG adapter DS18B20 ke pin 4 (pin digital) Arduino.
4.	Kemudian sambungkan modul sensor ph dengan sensor ph konektor.
5.	Lalu hubungkan modul sensor ph ke  pin Arduino serta VCC dan GND yang sudah terhubung ke project board dengan menggunakan kabel jumper male to female.
-	Hubungkan kabel warna hijau dengan pin VCC modul sensor ph ke VCC Arduino yang sudah tersambung pada project board.
-	Hubungkan kabel warna biru dengan pin GND modul sensor ph ke GND Arduino yang sudah tersambung pada project board.
-	Hubungkan kabel warna ungu dengan pin PO modul sensor ph ke pin A0 (pin analog) Arduino
6.	Setelah itu sambungkan pin-pin modul LCD ke project board dengan 
menggunakan kabel jumper male to female.
-	Hubungkan kabel warna hijau dengan pin VCC modul LCD ke VCC Arduino yang sudah tersambung pada project board.
-	Hubungkan kabel warna biru dengan pin GND modul LCD ke GND Arduino yang sudah tersambung pada project board.
-	Hubungkan kabel warna orange dengan pin SDA modul LCD ke pin A4 (pin analog) Arduino.
-	Hubungkan kabel warna kuning dengan pin SCL modul LCD ke pin A5 (pin analog) Arduino.
7.	Hubungkan Arduino dengan computer menggunakan kabel type A 2.0, lalu upload programnya (untuk rangkaian lebih jelasnya ada di file atas).

