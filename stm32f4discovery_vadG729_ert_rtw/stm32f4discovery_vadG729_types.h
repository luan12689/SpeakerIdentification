/*
 * File: stm32f4discovery_vadG729_types.h
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

#ifndef RTW_HEADER_stm32f4discovery_vadG729_types_h_
#define RTW_HEADER_stm32f4discovery_vadG729_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "arm_math.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_FaXlYsc604JBN31kJDI5zF_
#define DEFINED_TYPEDEF_FOR_struct_FaXlYsc604JBN31kJDI5zF_

typedef struct {
  real32_T Fs;
  real32_T M;
  real32_T NP;
  real32_T No;
  real32_T Ni;
  real32_T INIT_COUNT;
  real32_T HPF_sos[6];
  real32_T L_WINDOW;
  real32_T L_NEXT;
  real32_T L_FRAME;
  real32_T hamwindow[240];
  real32_T lagwindow[13];
  real32_T lbf_corr[13];
} struct_FaXlYsc604JBN31kJDI5zF;

#endif

/* Custom Type definition for MATLAB Function: '<Root>/VAD_G729' */
#ifndef struct_mde5d13712c58e270b87a2948f9b8d8675
#define struct_mde5d13712c58e270b87a2948f9b8d8675

struct mde5d13712c58e270b87a2948f9b8d8675
{
  int32_T S0_isInitialized;
  real32_T W0_FILT_STATES[2];
  int32_T W1_PreviousNumChannels;
  arm_biquad_cascade_df2T_instance_f32 S;
  real32_T pState[4];
  real32_T coefficients[5];
};

#endif                             /*struct_mde5d13712c58e270b87a2948f9b8d8675*/

#ifndef typedef_dsp_BiquadFilter_0_stm32f4dis_T
#define typedef_dsp_BiquadFilter_0_stm32f4dis_T

typedef struct mde5d13712c58e270b87a2948f9b8d8675
  dsp_BiquadFilter_0_stm32f4dis_T;

#endif                               /*typedef_dsp_BiquadFilter_0_stm32f4dis_T*/

#ifndef struct_mdEpvuvRJce5QaXOWois1FFG
#define struct_mdEpvuvRJce5QaXOWois1FFG

struct mdEpvuvRJce5QaXOWois1FFG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_BiquadFilter_0_stm32f4dis_T cSFunObject;
};

#endif                                 /*struct_mdEpvuvRJce5QaXOWois1FFG*/

#ifndef typedef_dspcodegen_BiquadFilter_stm32_T
#define typedef_dspcodegen_BiquadFilter_stm32_T

typedef struct mdEpvuvRJce5QaXOWois1FFG dspcodegen_BiquadFilter_stm32_T;

#endif                               /*typedef_dspcodegen_BiquadFilter_stm32_T*/

#ifndef struct_mdb153587e499be8b1dfc3887045ead759
#define struct_mdb153587e499be8b1dfc3887045ead759

struct mdb153587e499be8b1dfc3887045ead759
{
  int32_T S0_isInitialized;
};

#endif                             /*struct_mdb153587e499be8b1dfc3887045ead759*/

#ifndef typedef_dsp_Autocorrelator_1_stm32f4d_T
#define typedef_dsp_Autocorrelator_1_stm32f4d_T

typedef struct mdb153587e499be8b1dfc3887045ead759
  dsp_Autocorrelator_1_stm32f4d_T;

#endif                               /*typedef_dsp_Autocorrelator_1_stm32f4d_T*/

#ifndef struct_mdsV88tuIA9ZiqwzShAC2sDH
#define struct_mdsV88tuIA9ZiqwzShAC2sDH

struct mdsV88tuIA9ZiqwzShAC2sDH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_Autocorrelator_1_stm32f4d_T cSFunObject;
};

#endif                                 /*struct_mdsV88tuIA9ZiqwzShAC2sDH*/

#ifndef typedef_dspcodegen_Autocorrelator_stm_T
#define typedef_dspcodegen_Autocorrelator_stm_T

typedef struct mdsV88tuIA9ZiqwzShAC2sDH dspcodegen_Autocorrelator_stm_T;

#endif                               /*typedef_dspcodegen_Autocorrelator_stm_T*/

#ifndef struct_md577013c63fd78a14c1716ff4dd8d0a9c
#define struct_md577013c63fd78a14c1716ff4dd8d0a9c

struct md577013c63fd78a14c1716ff4dd8d0a9c
{
  int32_T S0_isInitialized;
};

#endif                             /*struct_md577013c63fd78a14c1716ff4dd8d0a9c*/

#ifndef typedef_dsp_LevinsonSolver_2_stm32f4d_T
#define typedef_dsp_LevinsonSolver_2_stm32f4d_T

typedef struct md577013c63fd78a14c1716ff4dd8d0a9c
  dsp_LevinsonSolver_2_stm32f4d_T;

#endif                               /*typedef_dsp_LevinsonSolver_2_stm32f4d_T*/

#ifndef struct_mdbqo9XXBkAqcCeZDbeFrfaH
#define struct_mdbqo9XXBkAqcCeZDbeFrfaH

struct mdbqo9XXBkAqcCeZDbeFrfaH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_LevinsonSolver_2_stm32f4d_T cSFunObject;
};

#endif                                 /*struct_mdbqo9XXBkAqcCeZDbeFrfaH*/

#ifndef typedef_dspcodegen_LevinsonSolver_stm_T
#define typedef_dspcodegen_LevinsonSolver_stm_T

typedef struct mdbqo9XXBkAqcCeZDbeFrfaH dspcodegen_LevinsonSolver_stm_T;

#endif                               /*typedef_dspcodegen_LevinsonSolver_stm_T*/

#ifndef struct_mdc9ead091ab2fefb24c40d728465d2bb1
#define struct_mdc9ead091ab2fefb24c40d728465d2bb1

struct mdc9ead091ab2fefb24c40d728465d2bb1
{
  int32_T S0_isInitialized;
  real32_T W0_ACOEF_DWORK_IDX[3];
};

#endif                             /*struct_mdc9ead091ab2fefb24c40d728465d2bb1*/

#ifndef typedef_dsp_LevinsonSolver_3_stm32f4d_T
#define typedef_dsp_LevinsonSolver_3_stm32f4d_T

typedef struct mdc9ead091ab2fefb24c40d728465d2bb1
  dsp_LevinsonSolver_3_stm32f4d_T;

#endif                               /*typedef_dsp_LevinsonSolver_3_stm32f4d_T*/

#ifndef struct_mdZRCqJ0QZwTsksff8DRpyDD
#define struct_mdZRCqJ0QZwTsksff8DRpyDD

struct mdZRCqJ0QZwTsksff8DRpyDD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_LevinsonSolver_3_stm32f4d_T cSFunObject;
};

#endif                                 /*struct_mdZRCqJ0QZwTsksff8DRpyDD*/

#ifndef typedef_dspcodegen_LevinsonSolver_1_s_T
#define typedef_dspcodegen_LevinsonSolver_1_s_T

typedef struct mdZRCqJ0QZwTsksff8DRpyDD dspcodegen_LevinsonSolver_1_s_T;

#endif                               /*typedef_dspcodegen_LevinsonSolver_1_s_T*/

#ifndef struct_mdfa9dda2f570c2eb5502f8dab61cee4d5
#define struct_mdfa9dda2f570c2eb5502f8dab61cee4d5

struct mdfa9dda2f570c2eb5502f8dab61cee4d5
{
  int32_T S0_isInitialized;
  real32_T W0_G1[6];
  real32_T W1_G2[6];
  real32_T W2_Cheby[6];
  int32_T P0_NSteps;
  int32_T P1_NBisects;
};

#endif                             /*struct_mdfa9dda2f570c2eb5502f8dab61cee4d5*/

#ifndef typedef_dsp_LPCToLSF_4_stm32f4discove_T
#define typedef_dsp_LPCToLSF_4_stm32f4discove_T

typedef struct mdfa9dda2f570c2eb5502f8dab61cee4d5
  dsp_LPCToLSF_4_stm32f4discove_T;

#endif                               /*typedef_dsp_LPCToLSF_4_stm32f4discove_T*/

#ifndef struct_mdJDFqDwYLxbJwGSrSuMs4rB
#define struct_mdJDFqDwYLxbJwGSrSuMs4rB

struct mdJDFqDwYLxbJwGSrSuMs4rB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_LPCToLSF_4_stm32f4discove_T cSFunObject;
};

#endif                                 /*struct_mdJDFqDwYLxbJwGSrSuMs4rB*/

#ifndef typedef_dspcodegen_LPCToLSF_stm32f4di_T
#define typedef_dspcodegen_LPCToLSF_stm32f4di_T

typedef struct mdJDFqDwYLxbJwGSrSuMs4rB dspcodegen_LPCToLSF_stm32f4di_T;

#endif                               /*typedef_dspcodegen_LPCToLSF_stm32f4di_T*/

#ifndef struct_mdda50ef7e4bdc37c42ae218a7213ce9d0
#define struct_mdda50ef7e4bdc37c42ae218a7213ce9d0

struct mdda50ef7e4bdc37c42ae218a7213ce9d0
{
  int32_T S0_isInitialized;
  real32_T W0_InputBuffer;
};

#endif                             /*struct_mdda50ef7e4bdc37c42ae218a7213ce9d0*/

#ifndef typedef_dsp_ZeroCrossingDetector_5_st_T
#define typedef_dsp_ZeroCrossingDetector_5_st_T

typedef struct mdda50ef7e4bdc37c42ae218a7213ce9d0
  dsp_ZeroCrossingDetector_5_st_T;

#endif                               /*typedef_dsp_ZeroCrossingDetector_5_st_T*/

#ifndef struct_mdKu5krA8sm995rtK1Qc5llD
#define struct_mdKu5krA8sm995rtK1Qc5llD

struct mdKu5krA8sm995rtK1Qc5llD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_ZeroCrossingDetector_5_st_T cSFunObject;
};

#endif                                 /*struct_mdKu5krA8sm995rtK1Qc5llD*/

#ifndef typedef_dspcodegen_ZeroCrossingDetect_T
#define typedef_dspcodegen_ZeroCrossingDetect_T

typedef struct mdKu5krA8sm995rtK1Qc5llD dspcodegen_ZeroCrossingDetect_T;

#endif                               /*typedef_dspcodegen_ZeroCrossingDetect_T*/

#ifndef struct_tag_sxH269Zr8EIFac5eaV6QdqB
#define struct_tag_sxH269Zr8EIFac5eaV6QdqB

struct tag_sxH269Zr8EIFac5eaV6QdqB
{
  real32_T Fs;
  real32_T M;
  real32_T NP;
  real32_T No;
  real32_T Ni;
  real32_T INIT_COUNT;
  real32_T HPF_sos[6];
  real32_T L_WINDOW;
  real32_T L_NEXT;
  real32_T L_FRAME;
  real32_T hamwindow[240];
  real32_T lagwindow[13];
  real32_T lbf_corr[13];
};

#endif                                 /*struct_tag_sxH269Zr8EIFac5eaV6QdqB*/

#ifndef typedef_sxH269Zr8EIFac5eaV6QdqB_stm32_T
#define typedef_sxH269Zr8EIFac5eaV6QdqB_stm32_T

typedef struct tag_sxH269Zr8EIFac5eaV6QdqB sxH269Zr8EIFac5eaV6QdqB_stm32_T;

#endif                               /*typedef_sxH269Zr8EIFac5eaV6QdqB_stm32_T*/

#ifndef struct_tag_scTcduFdIyNjNuDru0wp8ZD
#define struct_tag_scTcduFdIyNjNuDru0wp8ZD

struct tag_scTcduFdIyNjNuDru0wp8ZD
{
  real32_T window_buffer[160];
  real32_T frm_count;
  real32_T MeanLSF[10];
  real32_T MeanSE;
  real32_T MeanSLE;
  real32_T MeanE;
  real32_T MeanSZC;
  real32_T count_sil;
  real32_T count_update;
  real32_T count_ext;
  real32_T less_count;
  real32_T flag;
  real32_T prev_markers[2];
  real32_T prev_energy;
  real32_T Prev_Min;
  real32_T Next_Min;
  real32_T Min_buffer[128];
};

#endif                                 /*struct_tag_scTcduFdIyNjNuDru0wp8ZD*/

#ifndef typedef_scTcduFdIyNjNuDru0wp8ZD_stm32_T
#define typedef_scTcduFdIyNjNuDru0wp8ZD_stm32_T

typedef struct tag_scTcduFdIyNjNuDru0wp8ZD scTcduFdIyNjNuDru0wp8ZD_stm32_T;

#endif                               /*typedef_scTcduFdIyNjNuDru0wp8ZD_stm32_T*/

#ifndef struct_tag_sDeZb06DMz81j0sEKK37nCD
#define struct_tag_sDeZb06DMz81j0sEKK37nCD

struct tag_sDeZb06DMz81j0sEKK37nCD
{
  real_T NumCoarseGridPoints;
  real_T NumBisects;
  char_T FirstOutputValuesSource[4];
  char_T NonUnityFirstCoefficientAction[14];
  boolean_T ExceptionOutputPort;
  boolean_T OverwriteInvalidOutput;
};

#endif                                 /*struct_tag_sDeZb06DMz81j0sEKK37nCD*/

#ifndef typedef_sDeZb06DMz81j0sEKK37nCD_stm32_T
#define typedef_sDeZb06DMz81j0sEKK37nCD_stm32_T

typedef struct tag_sDeZb06DMz81j0sEKK37nCD sDeZb06DMz81j0sEKK37nCD_stm32_T;

#endif                               /*typedef_sDeZb06DMz81j0sEKK37nCD_stm32_T*/

/* Parameters (default storage) */
typedef struct P_stm32f4discovery_vadG729_T_ P_stm32f4discovery_vadG729_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_stm32f4discovery_vadG_T RT_MODEL_stm32f4discovery_vad_T;

#endif                        /* RTW_HEADER_stm32f4discovery_vadG729_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
