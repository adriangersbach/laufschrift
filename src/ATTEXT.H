// Header File
// Filename: ATTEXT.h

enum CONSTTEXT
{
  STATIC_TEXT_ENG,
  STATIC_TEXT_GER,
  MOVE_TEXT_ENG,
  MOVE_TEXT_GER
};

/////////////////////////////////////////////////////////////////////////////
// Prototypes
//
extern void  set_Ascii(uint nPos);
extern const uchar get_Spalte(uint nPos);
extern const uchar get_TextLen(uchar nTextID);
extern const uint  get_TextLenInt(uchar nTextID);
extern const uchar get_TextRow(uchar nTextID, uchar nRow, uchar nStringPos);
extern const uchar ascii2LCD(uchar nTextID, uchar nRow);
