
/*
H5TurboPFor Copyright (c) 2021, The Regents of the University of California, through Lawrence Berkeley National Laboratory (subject to receipt of any required approvals from the U.S. Dept. of Energy). All rights reserved.

If you have questions about your rights to use or distribute this software, please contact Berkeley Lab's Intellectual Property Office at IPO@lbl.gov.

NOTICE. This Software was developed under funding from the U.S. Department of Energy and the U.S. Government consequently retains certain rights. As such, the U.S. Government has been granted for itself and others acting on its behalf a paid-up, nonexclusive, irrevocable, worldwide license in the Software to reproduce, distribute copies to the public, prepare derivative works, and perform publicly and display publicly, and to permit others to do so.
*/

    
#include "hdf5.h"

#if defined(_MSC_VER)
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C"
{
#endif

    DLL_EXPORT size_t turbopfor_filter(unsigned int flags, size_t cd_nelmts,
                                       const unsigned int cd_values[], size_t nbytes,
                                       size_t *buf_size, void **buf);

    DLL_EXPORT H5PL_type_t H5PLget_plugin_type(void);
    DLL_EXPORT const void *H5PLget_plugin_info(void);

#ifdef __cplusplus
}
#endif
