/*
 * File: stm32f4discovery_vadG729.h
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

#ifndef RTW_HEADER_stm32f4discovery_vadG729_h_
#define RTW_HEADER_stm32f4discovery_vadG729_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef stm32f4discovery_vadG729_COMMON_INCLUDES_
# define stm32f4discovery_vadG729_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "stm32f4discovery_wrapper.h"
#endif                           /* stm32f4discovery_vadG729_COMMON_INCLUDES_ */

#include "stm32f4discovery_vadG729_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "arm_math.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real32_T speech_buf[240];
  real32_T c[240];
  real32_T fv[128];
  real32_T speech_hp[80];
  real32_T Normalizingvoicesignalbetwe[80];
                     /* '<Root>/Normalizing voice signal between -1.0 to 1.0' */
  int16_T Speech[80];                  /* '<Root>/Speech' */
  real32_T r[13];
  real32_T r_m[12];
  real32_T a[11];
  real32_T LSF[10];
  real32_T z1[10];
  real32_T rc[2];
  real32_T Ef;
  real32_T El;
  real32_T SD;
  real32_T ZC;
  real32_T Min;
  real32_T dSE;
  real32_T dSLE;
  real32_T dSZC;
  int32_T v_flag;
  uint32_T x;
  boolean_T DataTypeConversion1;       /* '<Root>/Data Type Conversion 1' */
} B_stm32f4discovery_vadG729_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  scTcduFdIyNjNuDru0wp8ZD_stm32_T VAD_var_param;/* '<Root>/VAD_G729' */
  dspcodegen_BiquadFilter_stm32_T biquad;/* '<Root>/VAD_G729' */
  dspcodegen_LPCToLSF_stm32f4di_T lpc2lsf;/* '<Root>/VAD_G729' */
  dspcodegen_LevinsonSolver_1_s_T levSolver2;/* '<Root>/VAD_G729' */
  dspcodegen_ZeroCrossingDetect_T zerodet;/* '<Root>/VAD_G729' */
  dspcodegen_Autocorrelator_stm_T autocorr;/* '<Root>/VAD_G729' */
  dspcodegen_LevinsonSolver_stm_T levSolver1;/* '<Root>/VAD_G729' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  boolean_T biquad_not_empty;          /* '<Root>/VAD_G729' */
} DW_stm32f4discovery_vadG729_T;

/* Parameters (default storage) */
struct P_stm32f4discovery_vadG729_T_ {
  real32_T Normalizingvoicesignalbetween10;
                          /* Computed Parameter: Normalizingvoicesignalbetween10
                           * Referenced by: '<Root>/Normalizing voice signal between -1.0 to 1.0'
                           */
};

/* Real-time Model Data Structure */
struct tag_RTM_stm32f4discovery_vadG_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_stm32f4discovery_vadG729_T stm32f4discovery_vadG729_P;

/* Block signals (default storage) */
extern B_stm32f4discovery_vadG729_T stm32f4discovery_vadG729_B;

/* Block states (default storage) */
extern DW_stm32f4discovery_vadG729_T stm32f4discovery_vadG729_DW;

/* Model entry point functions */
extern void stm32f4discovery_vadG729_initialize(void);
extern void stm32f4discovery_vadG729_step(void);
extern void stm32f4discovery_vadG729_terminate(void);

/* Real-time Model object */
extern RT_MODEL_stm32f4discovery_vad_T *const stm32f4discovery_vadG729_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'stm32f4discovery_vadG729'
 * '<S1>'   : 'stm32f4discovery_vadG729/VAD_G729'
 */
#endif                              /* RTW_HEADER_stm32f4discovery_vadG729_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
