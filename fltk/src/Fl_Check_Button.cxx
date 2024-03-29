//
// "$Id: Fl_Check_Button.cxx 6616 2009-01-01 21:28:26Z matt $"
//
// Check button widget for the Fast Light Tool Kit (FLTK).
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

#include <FL/Fl.H>
#include <FL/Fl_Check_Button.H>

// TODO Correct incorrect Fl_Check_Button comments.
// A subclass of Fl_Button that always draws as a diamond box.  This
// diamond is smaller than the widget size and can be surchecked by
// another box type, for compatibility with Forms.

/**
  Creates a new Fl_Check_Button widget using the given position, size and
  label string.
  \param[in] X, Y, W, H position and size of the widget
  \param[in] L widget label, default is no label
 */
Fl_Check_Button::Fl_Check_Button(int X, int Y, int W, int H, const char *L)
: Fl_Light_Button(X, Y, W, H, L) {
  box(FL_NO_BOX);
  down_box(FL_DOWN_BOX);
  selection_color(FL_FOREGROUND_COLOR);
}
