/*
   NSWindow+Toolbar.h

   The window toolbar category

   Copyright (C) 2004 Free Software Foundation, Inc.

   Author:  Quentin Math� <qmathe@club-internet.fr>
   Date: January 2004

   This file is part of the GNUstep GUI Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; see the file COPYING.LIB.
   If not, write to the Free Software Foundation,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#ifndef _GNUstep_H_NSWindow_Toolbar
#define _GNUstep_H_NSWindow_Toolbar

#include "AppKit/NSWindow.h"

@class NSToolbar;

@interface NSWindow (Toolbar)
- (void) runToolbarCustomizationPalette: (id)sender;
- (void) toggleToolbarShown: (id)sender;
- (NSView *) contentViewWithoutToolbar;
- (NSToolbar *) toolbar;
- (void) setContentViewWithoutToolbar: (NSView *)contentViewWithoutToolbar;
- (void) setToolbar: (NSToolbar*)toolbar;
@end

#endif