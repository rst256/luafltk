//
// "$Id: Fl_Float_Input.H 6614 2009-01-01 16:11:32Z matt $"
//
// Floating point input header file for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2009 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

/* \file
   Fl_Float_Input widget . */


#ifndef Fl_Float_Input_H
#define Fl_Float_Input_H

#include "Fl_Input.H"

/**
  The Fl_Float_Input class is a subclass of Fl_Input
  that only allows the user to type floating point numbers (sign,
  digits, decimal point, more digits, 'E' or 'e', sign, digits).
*/
class FL_EXPORT Fl_Float_Input : public Fl_Input {
public:
  /**
      Creates a new Fl_Float_Input widget using the given position,
    size, and label string. The default boxtype is FL_DOWN_BOX.
  <P> Inherited destructor destroys the widget and any value associated with it
  */
  Fl_Float_Input(int X,int Y,int W,int H,const char *l = 0)
    : Fl_Input(X,Y,W,H,l) {type(FL_FLOAT_INPUT);}
};

#endif

//
// End of "$Id: Fl_Float_Input.H 6614 2009-01-01 16:11:32Z matt $".
//
