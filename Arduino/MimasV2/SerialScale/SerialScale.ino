/* sample for digital weight scale of hx711
 * library design: Weihong Guan (@aguegu)
 * library host on
 *https://github.com/aguegu/ardulibs/tree/3cdb78f3727d9682f7fd22156604fc1e4edd75d1/hx711
 */

 // You need to add Hx711 library to your arduino folder it is lib folder on this repo

#include <Hx711.h>
Hx711 scale(33, 35);  P6--8 and P6--6

__BEGIN_DECLS
int __cxa_atexit(void (destructor) (void *), void *arg, void *dso) { return (0);}
__END_DECLS;

void setup() {
  Serial.begin(19200);

}

void loop() {
  delay(10);
  Serial.print(scale.getGram(), 1);
  delay(10);
  Serial.println(" g");
  delay(500);
}


