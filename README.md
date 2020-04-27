1. Nama : Benyamin Pravalent Siregar
2. NIM  : 181401109

3. Saya membuat program mobil yang sedang berjalan di dalam kota dan terletak di bawah matahari berwarna hijau karena tempat ini berada di planet Namek.
Kemudian saya membuat gambar bangunan, jendela, matahari, mobil dengan glVertex dengan glBegin(GL_POLYGON) dan memberi warna dengan glColor, ada yang glColor 3f dan ada yang glColor3ub. Dalam program ini saya membuat mobil yang bergerak ke kiri (mundur) dan ke kanan (maju) dan dapat berpindah jalur (atas & bawah) sesuai dengan titik koordinat yang telah saya buat (x, y). 
Nb : glutInitWindowSize(640, 480);
Ketika program dirun, mobil berada di sebelah kiri mendekati koordinat x=0 dengan bagian ujung sebelah kiri mobil (berwarna hijau menjadi patokan). Kemudian mobil dapat bergerak ke kanan ketika koordinat y-nya ditambah 30, sehingga setiap di tekan tombol huruf 'D' (ke kanan), maka koordinat x-nya akan ditambah 30,
Begitu pula sebaliknya, setiap di tekan tombol huruf 'A' (ke kiri/mundur), maka koordinat-x nya akan dikurangi 30, kemudian apabila ditekan 'D' atau ke kanan sampai ke ujung layar kanan (dengan patokan apabila sudut sebelah kiri mobil yang berwarna hijau sudah lebih dari 640) maka koordinat x kembali ke nilai awal  (yaitu di sebelah kiri layar mendekati 0). Begitu pula sebaliknya, apabila tombol 'A' ditekan terus menerus (ke kiri) sampai mentok (dengan patokan apabila sudut sebelah kanan mobil yang berwarna biru telah melewati 0 (n<0) ), maka mobil akan kembali ke kanan dengan membuat koordinat-x nya mendekati 640.
Pada sumbu y, misal mobil berada di jalur bawah (dari sudut pandang user) atau jalur kanan (dari sudut pandang mobil), (Nb:nilai koordinat-y bawah < koordinat-y atas),
Ketika ditekan tombol 'W' d(ke jalur atas), maka nilai koordinat-y akan bertambah 30, dan apabila ditekan lagi (apabila y<=200), maka y+=0 yang artinya mobil tidak berpindah ke atas lagi karena hanya 2 jalur (dibatasi dengan nilai koordinat y), begitu pula sebaliknya, ketika mobil berada di jalur atas, kemudian ditekan tombol 'S', maka mobil akan ke jalur bawah karena dikurangi 30 (y-=30), kemudian apabila ditekan 'S' lagi (sehingga y<=150), maka y-=0, sehingga y tidak akan berpindah nilai dari sumbu y (tetap).

4. - 'a' atau 'A' untuk bergerak mundur atau ke kiri
   - 'd' atau 'D' untuk bergerak maju atau ke kanan
   - 'w' atau 'W' untuk berpindah jalur ke atas
   - 's' atau 'S' untuk berpindah jalur ke bawah
