/*
 * Copyright (c) 1987, 1988, 1989, 1990, 1991 Stanford University
 * Copyright (c) 1991 Silicon Graphics, Inc.
 *
 * Permission to use, copy, modify, distribute, and sell this software and 
 * its documentation for any purpose is hereby granted without fee, provided
 * that (i) the above copyright notices and this permission notice appear in
 * all copies of the software and related documentation, and (ii) the names of
 * Stanford and Silicon Graphics may not be used in any advertising or
 * publicity relating to the software without the specific, prior written
 * permission of Stanford and Silicon Graphics.
 * 
 * THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY 
 * WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.  
 *
 * IN NO EVENT SHALL STANFORD OR SILICON GRAPHICS BE LIABLE FOR
 * ANY SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND,
 * OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
 * WHETHER OR NOT ADVISED OF THE POSSIBILITY OF DAMAGE, AND ON ANY THEORY OF 
 * LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE 
 * OF THIS SOFTWARE.
 */

#ifndef iv2_6_shape_h
#define iv2_6_shape_h

#include <InterViews/enter-scope.h>

/*
 * Constants for defining "infinite" stretchability or shrinkability.
 */

static const int hfil = 1000000;
static const int vfil = 1000000;

class Shape {
public:
    int width, height;		/* natural dimensions */
    int hstretch, vstretch;	/* stretchability */
    int hshrink, vshrink;	/* shrinkability */
    int aspect;			/* desired aspect ratio, 0 means don't care */
    int hunits, vunits;		/* allocate in multiples */

    Shape();
    ~Shape();

    void Square(int);
    void Rect(int w, int h);
    void Rigid(int hshr = 0, int hstr = 0, int vshr = 0, int vstr = 0);
    void SetUndefined();
    bool Defined();
    bool Undefined () { return !Defined(); }
};

#endif
