// -*- coding:unix; mode:c++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-
/* GTK Unikey Vietnamese Input Method
 * Copyright (C) 2004 Pham Kim Long
 * Contact:
 *   longcz@yahoo.com
 *   UniKey project: http://unikey.sf.net
 * Contributor(s): Nguyen Thai Ngoc Duy (pclouds)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __UNIKEY_SYNC_H
#define __UNIKEY_SYNC_H

#include <X11/Xlib.h>

void UkInitSync(Display *dpy, Window root);

int UnikeyToSyncCharset(int uk);
int SyncToUnikeyCharset(int sync);
int UnikeyToSyncMethod(int uk);
int SyncToUnikeyMethod(int sync);

void UkSetPropValue(Atom atom, long value);
long UkGetPropValue(Atom atom, long defValue);

#endif
