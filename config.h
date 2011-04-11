/* config.h.in.  Generated from configure.ac by autoheader.  */

/* modified bsd pce cd hardware support (old one) */
#define BSD_CD_HARDWARE_SUPPORT 1

/* for hugo developers working on the cd subsystem */
#undef CD_DEBUG

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
#undef CRAY_STACKSEG_END

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* defined if user wants netplay support */
/* #undef ENABLE_NETPLAY */

/* defined if user wants a 'clean' binary ( = not for hugo developpers) */
#define FINAL_RELEASE 1

/* for hugo developers working on the graphics subsystem */
/* #undef GFX_DEBUG */

/* defined if user have GTK2 installed */
/* #undef GTK */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the `atexit' function. */
#define HAVE_ATEXIT 1

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
#undef HAVE_DOPRNT

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `SDL' library (-lSDL). */
#define HAVE_LIBSDL 1

/* Define to 1 if you have the `SDL_mixer' library (-lSDL_mixer). */
#define HAVE_LIBSDL_MIXER 1

/* Define to 1 if you have the SDL_net library */
#undef HAVE_LIBSDL_NET

/* Define to 1 if you have the `vorbis' library (-lvorbis). */
#undef HAVE_LIBVORBIS

/* Define to 1 if you have the `vorbisfile' library (-lvorbisfile). */
#undef HAVE_LIBVORBISFILE

/* Define to 1 if you have the 'z' library (-lz) */
#undef HAVE_LIBZ

/* Define to 1 if you have the <limits.h> header file. */
#undef HAVE_LIMITS_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `memset' function. */
#undef HAVE_MEMSET

/* Define to 1 if you have the `mkdir' function. */
#undef HAVE_MKDIR

/* Define to 1 if you have the `select' function. */
#undef HAVE_SELECT

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the `strchr' function. */
#undef HAVE_STRCHR

/* Define to 1 if you have the `strdup' function. */
#undef HAVE_STRDUP

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the `strrchr' function. */
#undef HAVE_STRRCHR

/* Define to 1 if you have the `strstr' function. */
#undef HAVE_STRSTR

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/param.h> header file. */
#undef HAVE_SYS_PARAM_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the `vprintf' function. */
#undef HAVE_VPRINTF

/* defined if inlined accessors should be used */
#undef INLINED_ACCESSORS

/* for hugo developers working on the input subsystem */
#undef INPUT_DEBUG

/* for hugo developers working on hu6280 emulation */
#undef KERNEL_DEBUG

/* defined if user wants new kernel */
#define KERNEL_DS 1

/* for hugo developers working on netplay emulation */
#undef NETPLAY_DEBUG

/* defined if user wants ogg support in hcd */
#undef OGG_SUPPORT

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* directory in which data are located */
#undef PACKAGE_DATA_DIR

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* defined if user wants SDL as library */
#define SDL 1

/* defined if user wants SDL_mixer as library */
#undef SDL_mixer

/* defined if user wants open memory openness */
#undef SHARED_MEMORY

/* The size of a `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of a `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of a `long int', as computed by sizeof. */
#define SIZEOF_LONG_INT 4

/* The size of a `short int', as computed by sizeof. */
#define SIZEOF_SHORT_INT 2

/* for hugo developers working on the cd subsystem */
/* #undef SOUND_DEBUG */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
#undef STACK_DIRECTION

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* defined if rom are expected to be patched to run from bank 0x68 */
#undef TEST_ROM_RELOCATED

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "2.12"

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
#undef WORDS_BIGENDIAN

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#undef inline
#endif
