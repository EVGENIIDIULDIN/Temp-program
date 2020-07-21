//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karta_mira6.h"
#include "Karta_mira3.h"
#include <jpeg.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Image3Click(TObject *Sender)
{
  //Image3->Picture->LoadFromFile("C:\\Images\\luyanzheng.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image2Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("C:\\Image\\Lp.jpg");
}
//---------------------------------------------------------------------------

