/* Copyright (C) 2003 Datapark corp. All rights reserved.
   Copyright (C) 2000-2002 Lavtech.com corp. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA 
*/

#ifndef _DPS_CONTENTENCODING_H
#define _DPS_CONTENTENCODING_H

/*
#define DPS_ENCODING_IDENTITY 0
#define DPS_ENCODING_DEFLATE  1
#define DPS_ENCODING_GZIP     2
#define DPS_ENCODING_COMPRESS 4
#define DPS_ENCODING_UNKNOWN  7
*/

extern __C_LINK int __DPSCALL DpsUnGzip(DPS_AGENT *query, DPS_DOCUMENT *Doc);
extern __C_LINK int __DPSCALL DpsInflate(DPS_AGENT *query, DPS_DOCUMENT *Doc);
extern __C_LINK int __DPSCALL DpsUncompress(DPS_AGENT *query, DPS_DOCUMENT *Doc);

#endif
