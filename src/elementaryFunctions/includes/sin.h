/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __SIN_H__
#define __SIN_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Sine for different types .
*/

/*
** \brief Float Sine function
** \param in : input value.
*/
float		ssins(float in);

/*
** \brief Double Sine function
** \param in : input value.
*/
double		dsins(double in);

/*
** \brief Float Complex Sine function
** \param in : input value.
*/
floatComplex	csins(floatComplex in);

/*
** \brief Double Complex Sine function
** \param in : input value.
*/
doubleComplex	zsins(doubleComplex in);

/*
** \brief Float Matrix Sine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ssina(float* in, int size, float* out);

/*
** \brief Double Matrix Sine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dsina(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Sine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		csina(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Sine function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zsina(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__SIN_H__ */

