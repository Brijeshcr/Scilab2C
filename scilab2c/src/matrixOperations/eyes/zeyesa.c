/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "matrixEyes.h"



void zeyesa(doubleComplex *in, int _iRows, int _iCols)
{
    int i , j ;
    
    for ( i = 0 ; i < _iRows ; i++ )
        for ( j = 0 ; j <_iCols ; j++ )
                in[i + j * _iRows] = DoubleComplex ( (i==j)?1:0 , 0) ;
                

}
