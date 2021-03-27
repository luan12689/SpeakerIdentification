/*
 * stm32f4discovery_vadG729_dt.h
 *
 * Code generation for model "stm32f4discovery_vadG729".
 *
 * Model version              : 1.75
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Thu Mar 25 10:25:07 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(struct_FaXlYsc604JBN31kJDI5zF),
  sizeof(dspcodegen_BiquadFilter_stm32_T),
  sizeof(dspcodegen_Autocorrelator_stm_T),
  sizeof(dspcodegen_LevinsonSolver_stm_T),
  sizeof(dspcodegen_LevinsonSolver_1_s_T),
  sizeof(dspcodegen_LPCToLSF_stm32f4di_T),
  sizeof(dspcodegen_ZeroCrossingDetect_T),
  sizeof(scTcduFdIyNjNuDru0wp8ZD_stm32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "struct_FaXlYsc604JBN31kJDI5zF",
  "dspcodegen_BiquadFilter_stm32_T",
  "dspcodegen_Autocorrelator_stm_T",
  "dspcodegen_LevinsonSolver_stm_T",
  "dspcodegen_LevinsonSolver_1_s_T",
  "dspcodegen_LPCToLSF_stm32f4di_T",
  "dspcodegen_ZeroCrossingDetect_T",
  "scTcduFdIyNjNuDru0wp8ZD_stm32_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&stm32f4discovery_vadG729_B.Speech[0]), 4, 0, 80 },

  { (char_T *)(&stm32f4discovery_vadG729_B.DataTypeConversion1), 8, 0, 1 }
  ,

  { (char_T *)(&stm32f4discovery_vadG729_DW.VAD_var_param), 21, 0, 1 },

  { (char_T *)(&stm32f4discovery_vadG729_DW.biquad), 15, 0, 1 },

  { (char_T *)(&stm32f4discovery_vadG729_DW.lpc2lsf), 19, 0, 1 },

  { (char_T *)(&stm32f4discovery_vadG729_DW.levSolver2), 18, 0, 1 },

  { (char_T *)(&stm32f4discovery_vadG729_DW.zerodet), 20, 0, 1 },

  { (char_T *)(&stm32f4discovery_vadG729_DW.autocorr), 16, 0, 1 },

  { (char_T *)(&stm32f4discovery_vadG729_DW.levSolver1), 17, 0, 1 },

  { (char_T *)(&stm32f4discovery_vadG729_DW.Scope_PWORK.LoggedData), 11, 0, 1 },

  { (char_T *)(&stm32f4discovery_vadG729_DW.biquad_not_empty), 8, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  11U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&stm32f4discovery_vadG729_P.Normalizingvoicesignalbetween10), 1,
    0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  1U,
  rtPTransitions
};

/* [EOF] stm32f4discovery_vadG729_dt.h */
