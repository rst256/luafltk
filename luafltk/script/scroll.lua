-- scroll example by John Murga
-- 24 July, 2007
-- modified slightly (commented lines) for inclusion in this package

--window = fltk.Fl_Window(325, 90, "My first little app")

button1=fltk.Fl_Button:new(5, 5, 110, 80, "My First Button")

group = fltk.Fl_Scroll:new(120, 5, 200, 80, "")
group:box(fltk.FL_THIN_UP_BOX)

nothing=fltk.Fl_Box:new(120, 5, 180, 50, "Hello\nScroll down\nOr re-size ;-)")
button2=fltk.Fl_Button:new(120, 65, 180, 35, "Load a picture")
button3=fltk.Fl_Button:new(120, 105, 180, 35, "Quittin Time")

group:add(nothing)
group:add(button2)
group:add(button3)

fltk.Fl_End()
--fltk.Fl_End(group)
--window:resizable(group)

--window:show()
--Fl:run()
