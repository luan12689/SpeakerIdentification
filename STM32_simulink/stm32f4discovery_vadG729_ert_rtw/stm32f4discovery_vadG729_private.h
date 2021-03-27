/*
 * File: stm32f4discovery_vadG729_private.h
 *
 * Code generated for Simulink model 'stm32f4discovery_vadG729'.
 *
 * Model version                  : 1.75
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Thu Mar 25 10:25:07 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_stm32f4discovery_vadG729_private_h_
#define RTW_HEADER_stm32f4discovery_vadG729_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

extern void MWDSP_Poly2Lsp_compute_xXI1XkRD(real32_T G1[], real32_T G2[], const
  real32_T lpc[], int32_T orderLPC, int32_T M1);
extern real32_T MWDSP_Poly2Lsp_chebyso_5YbHyn0D(real32_T b[], real32_T x, const
  real32_T f[], int32_T N);
extern int32_T MWDSP_Poly2Lsp_S_l6LrihYj(real32_T lsp[], const real32_T G1[],
  const real32_T G2[], int32_T NSteps, int32_T NBisects, int32_T M1, int32_T M2,
  real32_T bptr[]);
extern int32_T MWDSP_Poly2Lsfr_S_Pj4Rfalb(real32_T lsp[], const real32_T G1[],
  const real32_T G2[], int32_T NSteps, int32_T NBisects, int32_T M1, int32_T M2,
  real32_T bptr[], int32_T P);

#endif                      /* RTW_HEADER_stm32f4discovery_vadG729_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
