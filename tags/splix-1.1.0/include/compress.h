/*
 * 	compress.h		(C) 2006, Aurélien Croc (AP²C)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 * 
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the
 *  Free Software Foundation, Inc.,
 *  59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 *  $Id$
 *
 */
#ifndef COMPRESS_H_
#define COMPRESS_H_

struct BandArray {
    unsigned char *array;
    unsigned char *next;
    unsigned char *prev;
};

extern int compressBand(struct BandArray *bandArray, unsigned char *inputBand, 
    unsigned long bandWidth, unsigned long bandHeight);
extern int calcOccurs(unsigned char *band, unsigned long bandHeight, 
    unsigned long bandWidth, unsigned long number);

#endif 

/* vim: set expandtab tabstop=4 shiftwidth=4 smarttab tw=80 cin enc=utf8: */

