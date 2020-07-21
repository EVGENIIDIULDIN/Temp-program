//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karta_mira5.h"
#include "Karta_mira4.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
	extern UnicodeString mystr;
	Memo1->Clear();
	Memo1->Lines->LoadFromFile(mystr);
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
    this->Close();
}
//---------------------------------------------------------------------------

