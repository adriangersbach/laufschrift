// Header-File
// Filename: ATTimer.h


/* definition of symbolic constants */

#define Level_LOW  0x00
#define Level_HIGH 0xFF

/* Import / Export */


extern void enable_all_Interrupts(void);
extern void disable_all_Interrupts(void);
extern void start_Blink(void);
extern void stop_Blink(void);

extern void enable_EXT0_Interrupt(void);
//extern void disable_EXT0_Interrupt(void);


//extern COMMON Rechteck;
