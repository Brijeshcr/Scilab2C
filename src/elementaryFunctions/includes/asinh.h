/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __ASINH_H__
#define __ASINH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Hyperbolic ArcSine for different types .
*/

/*
** \brief Float Hyperbolic ArcSine function
** \param in : input value.
*/
float		sasinhs(float in);

/*
** \brief Double Hyperbolic ArcSine function
** \param in : input value.
*/
double		dasinhs(double in);

/*
** \brief Float Complex Hyperbolic ArcSine function
** \param in : input value.
*/
floatComplex	casinhs(floatComplex in);

/*
** \brief Double Complex Hyperbolic ArcSine function
** \param in : input value.
*/
doubleComplex	zasinhs(doubleComplex in);

/*
** \brief Float Matrix Hyperbolic ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		sasinha(float* in, int size, float* out);

/*
** \brief Double Matrix Hyperbolic ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dasinha(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Hyperbolic ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		casinha(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Hyperbolic ArcSine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zasinha(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__ASINH_H__ */
