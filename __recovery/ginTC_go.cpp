//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ginTC_go.h"
#include "commGin.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TformGinTC_go *formGinTC_go;
//---------------------------------------------------------------------------
__fastcall TformGinTC_go::TformGinTC_go(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TformGinTC_go::FormCreate(TObject *Sender)
{
	okActif=false;
}
//---------------------------------------------------------------------------
void __fastcall TformGinTC_go::FormActivate(TObject *Sender)
{
	if (okActif)
		return;
	okActif=true;
	LabBitBtnIdentif->Visible=false;
	BitBtnIdentif->Visible=false;
	EdiIdentif->Visible=false;
	LabIdentif->Visible=false;
	EdiPass->Visible=false;
	LabPass->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TformGinTC_go::BitBtnIdentifClick(TObject *Sender)
{
	Beep();
	EdiIdentif->Visible=true;
	LabIdentif->Visible=true;
	EdiPass->Visible=true;
	LabPass->Visible=true;

}
//---------------------------------------------------------------------------
void __fastcall TformGinTC_go::BitBtnIniClick(TObject *Sender)
{
	if (OpenDialogIni->Execute() && OpenDialogIni->Files->Count>0) {
		CboGinIni->Items->Clear();
		CboGinIni->Items->Add(OpenDialogIni->FileName);
		CboGinIni->ItemIndex=0;
		LabBitBtnIdentif->Visible=true;
		BitBtnIdentif->Visible=true;
	}
	else	{
		CboGinIni->Items->Clear();
		LabBitBtnIdentif->Visible=false;
		BitBtnIdentif->Visible=false;
	}
}
//---------------------------------------------------------------------------

