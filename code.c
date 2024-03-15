sbit LCD_RS at RB0O bit;
sbit LCD_EN at RB1 bit;
sbit LCD _D4 at RB2 bit;
sbit LCD_D5 at RB3 bit;
sbit LCD_D6 at RB4 bit;
sbit LCD_D7 at RB5 bit;

sbit LCD RS Direction at TRISBO bit;
sbit LCD EN Direction at TRISB1 bit;
sbit LCD D7 Direction at TRISB5 bit;
sbit LCD D6 Direction at TRISB4 bit;
sbit LCD DS Direction at TRISB3 bit;
sbit LCD D4 Direction at TRISB2 bit;

unsigned int v=0 ;
float voltage ;
char voltagetext[15] ;
void main() {
ADC_init();
lcd init();
lcd cmd(_1cd_ clear) ;
Icd cmd(_1cd cursor_off);
lcd out(i,1,"DC POWER SUPPLY") ;

while (1)
{

1cd_cmd(_1cd_ clear) ;

v=ADC_read(0) ;
voltage=(v#12.0)/1023.0 ;

if (voltage<1)

{

lcd out(1,1,"DC POWER SUPPLY")
voltage=voltage*1000 ;
floattostr(voltage,voltagetext)
voltagetext[3]=0;

lcd out(2,1,voltagetext) ;

lcd out (2,6,"mv") ;
delay_ms(500) ;
}
else {

lcd out(1,1,"DC POWER SUPPLY")
floattostr(voltage,voltagetext)
voltagetext[4]=0;

lcd out (2,1,voltagetext)
lcd out (2,6,"v")

delay _ms (500)
}
}
