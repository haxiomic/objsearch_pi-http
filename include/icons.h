#ifndef ICONS_H
#define ICONS_H 1

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

extern void initialize_images();

extern wxBitmap* _img_objsearch_pi;
extern wxBitmap* _img_objsearch;

#ifdef OBJSEARCH_USE_SVG
extern wxString _svg_objsearch;
extern wxString _svg_objsearch_rollover;
extern wxString _svg_objsearch_toggled;
#endif

#endif /* ICONS_H */
