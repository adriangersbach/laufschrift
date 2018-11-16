// Header File
// Filename: System.h


#include <AT892051.h>

/* Type-Definitions */

typedef unsigned char   uchar;
typedef unsigned int    uint;
typedef unsigned long   ulong;

typedef uchar           BYTE;
typedef uint            UINT;
typedef ulong           DWORD;

/*
typedef unsigned char data    uchard;
typedef unsigned char idata   uchari;
typedef unsigned char xdata   ucharx;
typedef unsigned char code    ucharc;

typedef unsigned int data     uintd;
typedef unsigned int idata    uinti;
typedef unsigned int xdata    uintx;
typedef unsigned int code     uintc;
*/
/*
#define uchar  unsigned char
#define uchard unsigned char data
#define uchari unsigned char idata
#define ucharx unsigned char xdata
#define ucharc unsigned char code

#define uint  unsigned int
#define uintd unsigned int data
#define uinti unsigned int idata
#define uintx unsigned int xdata
#define uintc unsigned int code
*/

#define COMMON  uchard


/* Definition of symbolic constants */

#define FALSE  00
#define TRUE   !FALSE

/* global Variables */

/* Define */

#define DISP_ON     0xFF              // Anzeige ist eingeschaltet
#define DISP_OFF    0x00              // Anzeige ist ausgeschaltet


/* Display Controll */

#define ZEICHEN   6                   // Ein Zeichen hat 6 Spalten
#define ANZEIGE   (15 * ZEICHEN)      // Laenge der Anzeige = 15 Zeichen

#define DISPLAY_CX_MIN    0           // Anfang der logischen Anzeige
#define DISPLAY_CX_MAX    (ANZEIGE-1) // Ende der logischen Anzeige

// Helper

//BYTE code  BMaskC[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
