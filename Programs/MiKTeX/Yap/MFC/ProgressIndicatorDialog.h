/* ProgressIndicatorDialog.h:                           -*- C++ -*-

   Copyright (C) 1996-2018 Christian Schenk

   This file is part of Yap.

   Yap is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   Yap is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with Yap; if not, write to the Free Software Foundation, 59
   Temple Place - Suite 330, Boston, MA 02111-1307, USA. */

#pragma once

class ProgressIndicatorDialog :
  public CDialog
{
private:
  enum { IDD = IDD_PROGRESS_INDICATOR };

protected:
  DECLARE_MESSAGE_MAP();

public:
  ProgressIndicatorDialog(CWnd* pParent = nullptr);

public:
  CProgressCtrl progressBar;

protected:
  void DoDataExchange(CDataExchange* pDX) override;
};
