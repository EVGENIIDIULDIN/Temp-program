//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karta_mira8.h"
#include "Karta_mira9.h"
#include "Karta_mira10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button1Click(TObject *Sender)
{
  Form9->ShowModal();
}
//---------------------------------------------------------------------------



void __fastcall TForm8::Button3Click(TObject *Sender)
{
   Form10->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button2Click(TObject *Sender)
{
		UnicodeString msg = "Раздел в разработке";
		UnicodeString ttl = "";
		MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);
}
//---------------------------------------------------------------------------


