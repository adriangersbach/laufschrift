// Header File
// Filename: ATBios.h

extern void   write_LEDs(uchar);

extern void   write_Red_LED(bit byLED);
extern void   write_Green_LED(bit byLED);

extern bit    put_Line(uchar nValue);
extern uchar  get_Line();
extern uchar  get_BufferSize();
//extern void get_Line(uchari * );
