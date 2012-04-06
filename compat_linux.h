#ifndef _COMPAT_LINUX_H
#define _COMPAT_LINUX_H

#if __GNUC__
# ifndef __unused
#  define __unused __attribute__ ((__unused__))
# endif
#else
# ifndef __unused
#  define __unused
# endif
#endif

#endif
