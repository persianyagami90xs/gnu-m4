/* Ordered set data type implemented by an array.
   Copyright (C) 2006 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2006.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  */

#ifndef _GL_ARRAY_OSET_H
#define _GL_ARRAY_OSET_H

#include "gl_oset.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const struct gl_oset_implementation gl_array_oset_implementation;
#define GL_ARRAY_OSET &gl_array_oset_implementation

#ifdef __cplusplus
}
#endif

#endif /* _GL_ARRAY_OSET_H */
