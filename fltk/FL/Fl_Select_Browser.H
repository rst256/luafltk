//
// "$Id: Fl_Select_Browser.H 6614 2009-01-01 16:11:32Z matt $"
//
// Select browser header file for the Fast Light Tool Kit (FLTK).
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
   Fl_Select_Browser widget . */

#ifndef Fl_Select_Browser_H
#define Fl_Select_Browser_H

#include "Fl_Browser.H"

/**
  The class is a subclass of Fl_Browser
  which lets the user select a single item, or no items by clicking on
  the empty space.  As long as the mouse button is held down on an
  unselected item it is highlighted. Normally the callback is done when the
  user presses the mouse, but you can change this with when().
  <P>See Fl_Browser for  methods to add and remove lines from the browser.
*/
class FL_EXPORT Fl_Select_Browser : public Fl_Browser {
public:
  /**
    Creates a new Fl_Select_Browser widget using the given
    position, size, and label string. The default boxtype is FL_DOWN_BOX.
    The constructor specializes Fl_Browser() by setting the type to FL_SELECT_BROWSER.
    The destructor destroys the widget and frees all memory that has been allocated.
  */
  Fl_Select_Browser(int X,int Y,int W,int H,const char *l=0)
	: Fl_Browser(X,Y,W,H,l) {type(FL_SELECT_BROWSER);}

DECLARE_CLASS_CHEAP_RTTI_2(Fl_Select_Browser, Fl_Browser)
};

#endif

//
// End of "$Id: Fl_Select_Browser.H 6614 2009-01-01 16:11:32Z matt $".
//
