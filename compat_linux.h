#ifndef _COMPAT_LINUX_H
#define _COMPAT_LINUX_H

#if __GNUC__
# ifndef __unused
#  define __unused __attribute__ ((__unused__))
# endif
# define strlcpy(dst, src, n) do { *((char *) __builtin_mempcpy (dst, src, n)) = '\0'; } while(0)
#else
# ifndef __unused
#  define __unused
# endif
# define strlcpy(dst, src, n) do { *((char *) memcpy (dst, src, n) + n) = '\0'; } while(0)
#endif

#endif
