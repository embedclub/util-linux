/*
 * smartcolsP.h - private library header file
 *
 * Copyright (C) 2014 Ondrej Oprala <ooprala@redhat.com>
 * Copyright (C) 2014 Karel Zak <kzak@redhat.com>
 *
 * This file may be redistributed under the terms of the
 * GNU Lesser General Public License.
 */

#ifndef _LIBSMARTCOLS_PRIVATE_H
#define _LIBSMARTCOLS_PRIVATE_H

#include "c.h"
#include "list.h"
#include "colors.h"
#include "libsmartcols.h"

#define CONFIG_LIBSMARTCOLS_ASSERT

#ifdef CONFIG_LIBSMARTCOLS_ASSERT
# include <assert.h>
#else
# define assert(x)
#endif

/*
 * Generic iterator
 */
struct libscols_iter {
	struct list_head        *p;		/* current position */
	struct list_head        *head;		/* start position */
	int			direction;	/* SCOLS_ITER_{FOR,BACK}WARD */
};

/*
 * Tree symbols
 */
struct libscols_symbols {
	char *branch;
	char *vert;
	char *right;
};

#endif /* _LIBSMARTCOLS_PRIVATE_H */