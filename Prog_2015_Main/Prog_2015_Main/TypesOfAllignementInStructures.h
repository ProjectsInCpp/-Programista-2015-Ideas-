#pragma once

struct Good 
{ 
	int flags;				/*     0     4 */ 
	int counter;			/*     4     4 */ 
	long int array[7];		/*     8    56 */ 
	/* --- cacheline 1 boundary (64 bytes) --- */ /* size: 64, cachelines: 1, members: 3 */ 
}; 

struct Bad 
{ 
	int flags;			 /*     0     4 */ /* XXX 4 bytes hole, try to pack */ 
	long int a[7];       /*     8    56 */ 
						 /* --- cacheline 1 boundary (64 bytes) --- */ 
	int counter;		 /*    64     4 */ 
	/* size: 72, cachelines: 2, members: 3 */ 
	/* sum members: 64, holes: 1, sum holes: 4 */ /* padding: 4 */ 
	/* last cacheline: 8 bytes */ 
}; 

struct Ugly
{
	long int not_used;		/*     0     8 */ 
	long int array[7];		/*     8    56 */ /* --- cacheline 1 boundary (64 bytes) --- */ 
	int		 flags;			/*    64     4 */ 
	int          counter;   /*    68     4 */ 
							/* size: 72, cachelines: 2, members: 4 */ /* last cacheline: 8 bytes */
}; 

struct Pretty
{
	int          flags;      /*     0     4 */ 
	int          counter;    /*     4     4 */ 
	long int     array[7];   /*     8    56 */ 
	/* --- cacheline 1 boundary (64 bytes) --- */ 
	long int     not_used;   /*    64     8 */ 
							 /* size: 72, cachelines: 2, members: 4 */ /* last cacheline: 8 bytes */
};
