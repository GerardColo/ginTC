//---------------------------------------------------------------------------

#ifndef ginTC_goH
#define ginTC_goH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TformGinTC_go : public TForm
{
__published:	// Composants gérés par l'EDI
	TBitBtn *BitBtnIdentif;
	TLabel *LabBitBtnIdentif;
	TEdit *EdiIdentif;
	TLabel *LabIdentif;
	TLabel *LabPass;
	TEdit *EdiPass;
	TLabel *LabGinIni;
	TComboBox *CboGinIni;
	TBitBtn *BitBtnIni;
	TOpenDialog *OpenDialogIni;
	void __fastcall BitBtnIdentifClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall BitBtnIniClick(TObject *Sender);
private:	// Déclarations utilisateur
  bool okActif;
public:		// Déclarations utilisateur
	__fastcall TformGinTC_go(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TformGinTC_go *formTC_go;
//---------------------------------------------------------------------------
#endif
