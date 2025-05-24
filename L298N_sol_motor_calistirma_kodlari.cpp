// Bu proje kodları Kerim DELİL tarafından yazılmıştır.
// Proje Adı: L298N motor sürücüsünün sol kısmına bağlı motorun kontrolü
// Proje Amacı: 5 saniye saat yönünde, 5 saniye saat yönünün tersinde motoru döndürmek.
// Sol Motor için ENA kısa dever edilmiştir.
#define in1 D14 // L298N IN1 
#define in2 D15 // L298N IN2

void setup() {
    pinMode(in1, OUTPUT); // D14 PİNİ ÇIKIŞ OLARAK TANIMLANMIŞTIR.
    pinMode(in2, OUTPUT); // D15 PİNİ ÇIKIŞ OLARAK TANIMLANMIŞTIR.
  }
            
void loop() {
  
  // SAAT YÖNÜNDE DÖNDÜRMEK İÇİN
  digitalWrite(in1, 1); // IN1 1 YAPILDI
  digitalWrite(in2, 0); // IN2 0 YAPILDI
  delay(5000);// 5 SANİYE BEKLE
  // SAAT YÖNÜNÜN TERSİNDE DÖNDÜRMEK İÇİN
  digitalWrite(in1, 0); // IN1 0 YAPILDI
  digitalWrite(in2, 1); // IN2 1 YAPILDI
  delay(5000);// 5 SANİYE BEKLE

}
