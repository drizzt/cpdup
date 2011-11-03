#ifndef _COMPAT_LINUX_H
#define _COMPAT_LINUX_H

#ifndef __unused
#ifndef GCC_VERSION                                                                                                                                                                                               
#define GCC_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)                                                                                                                                                            
#endif
#if (GCC_VERSION >= 2007)
#define __unused __attribute__ ((__unused__))
#else
#define __unused
#endif
#endif

extern size_t
strlcpy(char * __restrict dst, const char * __restrict src, size_t siz);

#endif
