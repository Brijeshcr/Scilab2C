/*
**  -*- C -*-
**
** sacosha.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Jan  5 10:25:57 2007 jofret
** Last update Mon Oct 22 09:59:20 2007 bruno
**
** Copyright INRIA 2007
*/

#include "acosh.h"

void sacosha(float* x, int size, float* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = sacoshs(x[i]);
  }
}