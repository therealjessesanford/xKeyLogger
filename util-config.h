/* src/include/util-config.h.  Generated by configure.  */
/* util-config.h.in */

#ifndef _UTIL_CONFIG_H_
#define _UTIL_CONFIG_H_

/* Compiling for X.org */
/* #undef WCM_XORG */

/* Compiling for XFree86 */
/* #undef WCM_XFREE86 */

/* ncurses header files available */
/*#define WCM_ENABLE_NCURSES 1*/

/* Enable the Linux Input subsystem */
#define WCM_ENABLE_LINUXINPUT 

/* Some X.org versions require that the events are scaled to screen size */
/* #undef WCM_XORG_TABLET_SCALING */

/* IsXExtensionPointer is only defined in later X.org releases */
/* #undef WCM_ISXEXTENSIONPOINTER */

/* xf86config lib is only included in some Xorg systems */
#define WCM_XF86CONFIG 0

#endif /* _UTIL_CONFIG_H_ */
