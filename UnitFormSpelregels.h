//---------------------------------------------------------------------------
/*
    Met Z'n Drie�n. A 3-player tic-tac-toe-like game.
    Copyright (C) 2010  Richel Bilderbeek

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
// From http://www.richelbilderbeek.nl
//---------------------------------------------------------------------------
#ifndef UnitFormSpelregelsH
#define UnitFormSpelregelsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormSpelregels : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TLabel *LabelQuit;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
private:	// User declarations
public:		// User declarations
        __fastcall TFormSpelregels(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSpelregels *FormSpelregels;
//---------------------------------------------------------------------------
#endif
