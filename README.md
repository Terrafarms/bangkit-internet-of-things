# bangkit-IoT

Pada tahap awal kami menerapkan IoT monitoring hanya menggunakan 3 buah sensor yaitu:
- Sensor keasaman (pH tanah)
- Sensor kelembapan tanah
- Sensor TDS (Total Dissolved Solid)

Data sensor yang didapatkan dikirim secara daring langsung ke domain yang ada di GCP (Google Cloud Platform) yang kami punya. Data akan disimpan dalam bentuk JSON di Firebase, data yang dikirim berisikan informasi state sensor yang ditanam beserta timestamp di tiap pengirimannya. IoT kami dapat mengirimkan data sesuai dengan selang waktu yang ditentukan (10 detik, 30 detik, 1 menit, 1 jam, 1 hari, dst).

Untuk pengembangan lebih lanjut kami akan menetapkan 2 sensor utama dan fitur penyiraman mobile, perangkat yang digunakan adalah:
- Sensor keasaman (pH tanah)
- Sensor NPK (Nitrogen, Fosfor, Kalium) pada tanah
- Pompa Air
- Pipa dan Sprinkler

Masih banyak potensi IoT yang bisa dikembangkan seperti pemupukan otomatis, pengusir hama mobile/otomatis, hingga implementasi IoT yang diintegrasikan dengan computer vision seperti deteksi kebakaran dini pada lahan pertanian yang rawan kebakaran.
