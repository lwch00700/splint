/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** signature.h
*/

# ifndef SIGNATURE_H
# define SIGNATURE_H

# include "code.h"

# ifndef OSD_H
# include "osd.h"
# endif

extern void PrintToken(ltoken p_tok);

# else
# error "Multiple include"
# endif