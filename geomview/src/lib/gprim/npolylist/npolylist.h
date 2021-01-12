/* Copyright (C) 1992-1998 The Geometry Center
 * Copyright (C) 1998-2000 Stuart Levy, Tamara Munzner, Mark Phillips
 *
 * This file is part of Geomview.
 * 
 * Geomview is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * Geomview is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with Geomview; see the file COPYING.  If not, write
 * to the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139,
 * USA, or visit http://www.gnu.org.
 */


/* Authors: Charlie Gunn, Stuart Levy, Tamara Munzner, Mark Phillips */

#ifndef	NPOLYLISTDEFS
#define	NPOLYLISTDEFS
/*
 * Public definitions for PolyList's
 */

#include "bbox.h"

typedef struct NPolyList NPolyList;

extern NPolyList *NPolyListDraw( NPolyList * );
extern BBox *NPolyListBound(NPolyList *np, Transform T, TransformN *TN);
extern NPolyList *NPolyListEvert( NPolyList * );
extern NPolyList *NPolyListLoad( char * );	/* Loads "off" files */
extern NPolyList *NPolyListFLoad( IOBFILE *, char *fname );
extern char    *NPolyListName( void );
extern NPolyList *NPolyListFSave( NPolyList *, FILE *, char * );

#endif/*NPOLYLISTDEFS*/
