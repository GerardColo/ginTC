//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ginTC_go.h"
//#include "commGin.h"
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
	LabBitBtnIdentif->Enabled=false;
	BitBtnIdentif->Enabled=false;
	EdiIdentif->Enabled=false;
	LabIdentif->Enabled=false;
	EdiPass->Enabled=false;
	LabPass->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TformGinTC_go::BitBtnIdentifClick(TObject *Sender)
{
	Beep();
	EdiIdentif->Enabled=true;
	LabIdentif->Enabled=true;
	EdiPass->Enabled=true;
	LabPass->Enabled=true;

}
//---------------------------------------------------------------------------
void __fastcall TformGinTC_go::BitBtnIniClick(TObject *Sender)
{
	if (OpenDialogIni->Execute() && OpenDialogIni->Files->Count>0) {
		CboGinIni->Items->Clear();
		CboGinIni->Items->Add(OpenDialogIni->FileName);
		CboGinIni->ItemIndex=0;
		LabBitBtnIdentif->Enabled=true;
		BitBtnIdentif->Enabled=true;
	}
	else	{
		CboGinIni->Items->Clear();
		LabBitBtnIdentif->Enabled=false;
		BitBtnIdentif->Enabled=false;
	}
}
//---------------------------------------------------------------------------


