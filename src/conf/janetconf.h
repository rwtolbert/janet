/* This will be generated by the build system if this file is not used */

#ifndef JANETCONF_H
#define JANETCONF_H

#define JANET_VERSION_MAJOR 1
#define JANET_VERSION_MINOR 16
#define JANET_VERSION_PATCH 0
#define JANET_VERSION_EXTRA "-dev"
#define JANET_VERSION "1.16.0-dev"

/* #define JANET_BUILD "local" */

/* These settings all affect linking, so use cautiously. */
/* #define JANET_SINGLE_THREADED */
/* #define JANET_NO_DYNAMIC_MODULES */
/* #define JANET_NO_NANBOX */
/* #define JANET_API __attribute__((visibility ("default"))) */

/* These settings should be specified before amalgamation is
 * built. Any build with these set should be considered non-standard, and
 * certain Janet libraries should be expected not to work. */
/* #define JANET_NO_DOCSTRINGS */
/* #define JANET_NO_SOURCEMAPS */
/* #define JANET_REDUCED_OS */
/* #define JANET_NO_PROCESSES */
/* #define JANET_NO_ASSEMBLER */
/* #define JANET_NO_PEG */
/* #define JANET_NO_NET */
/* #define JANET_NO_INT_TYPES */
/* #define JANET_NO_EV */
/* #define JANET_NO_REALPATH */
/* #define JANET_NO_SYMLINKS */
/* #define JANET_NO_UMASK */

/* Other settings */
/* #define JANET_DEBUG */
/* #define JANET_PRF */
/* #define JANET_NO_UTC_MKTIME */
/* #define JANET_OUT_OF_MEMORY do { printf("janet out of memory\n"); exit(1); } while (0) */
/* #define JANET_EXIT(msg) do { printf("C assert failed executing janet: %s\n", msg); exit(1); } while (0) */
/* #define JANET_TOP_LEVEL_SIGNAL(msg) call_my_function((msg), stderr) */
/* #define JANET_RECURSION_GUARD 1024 */
/* #define JANET_MAX_PROTO_DEPTH 200 */
/* #define JANET_MAX_MACRO_EXPAND 200 */
/* #define JANET_STACK_MAX 16384 */
/* #define JANET_OS_NAME my-custom-os */
/* #define JANET_ARCH_NAME pdp-8 */
/* #define JANET_EV_EPOLL */

/* Custom vm allocator support */
/* #include <mimalloc.h> */
/* #define janet_malloc(X) mi_malloc((X)) */
/* #define janet_realloc(X, Y) mi_realloc((X), (Y)) */
/* #define janet_calloc(X, Y) mi_calloc((X), (Y)) */
/* #define janet_free(X) mi_free((X)) */

/* Main client settings, does not affect library code */
/* #define JANET_SIMPLE_GETLINE */

#endif /* end of include guard: JANETCONF_H */
