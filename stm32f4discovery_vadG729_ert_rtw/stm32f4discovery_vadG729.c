/*
 * File: stm32f4discovery_vadG729.c
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

#include "stm32f4discovery_vadG729.h"
#include "stm32f4discovery_vadG729_private.h"
#include "stm32f4discovery_vadG729_dt.h"

/* Block signals (default storage) */
B_stm32f4discovery_vadG729_T stm32f4discovery_vadG729_B;

/* Block states (default storage) */
DW_stm32f4discovery_vadG729_T stm32f4discovery_vadG729_DW;

/* Real-time model */
RT_MODEL_stm32f4discovery_vad_T stm32f4discovery_vadG729_M_;
RT_MODEL_stm32f4discovery_vad_T *const stm32f4discovery_vadG729_M =
  &stm32f4discovery_vadG729_M_;

/* Forward declaration for local functions */
static dspcodegen_BiquadFilter_stm32_T *stm32_BiquadFilter_BiquadFilter
  (dspcodegen_BiquadFilter_stm32_T *obj);
static dspcodegen_LPCToLSF_stm32f4di_T *stm32f4discov_LPCToLSF_LPCToLSF
  (dspcodegen_LPCToLSF_stm32f4di_T *obj);
static dspcodegen_ZeroCrossingDetect_T *ZeroCrossingDetector_ZeroCrossi
  (dspcodegen_ZeroCrossingDetect_T *obj);
static void stm32_SystemCore_parenReference(const real32_T varargin_1[240],
  real32_T varargout_1[13]);
static void stm_SystemCore_parenReference_h(const real32_T varargin_1[11],
  real32_T varargout_1[11]);
static void st_SystemCore_parenReference_h0(dspcodegen_LPCToLSF_stm32f4di_T *obj,
  const real32_T varargin_1[11], real32_T varargout_1[10]);
static void s_SystemCore_parenReference_h0a(dspcodegen_LevinsonSolver_1_s_T *obj,
  const real32_T varargin_1[3], real32_T varargout_1[2]);
static real32_T stm32f4discovery_vadG729_sum(const real32_T x[12]);
static real32_T stm32f4discovery_vadG729_sum_k(const real32_T x[10]);
static uint32_T SystemCore_parenReference_h0aq(dspcodegen_ZeroCrossingDetect_T
  *obj, const real32_T varargin_1[81]);
static real32_T stm32f4discovery_vadG729_mod(real32_T x);

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static dspcodegen_BiquadFilter_stm32_T *stm32_BiquadFilter_BiquadFilter
  (dspcodegen_BiquadFilter_stm32_T *obj)
{
  dspcodegen_BiquadFilter_stm32_T *b_obj;
  int32_T i;
  static const real32_T b[5] = { 0.927274346F, -1.85449409F, 0.927274346F,
    1.90594649F, -0.911402404F };

  b_obj = obj;
  obj->isInitialized = 0;

  /* System object Constructor function: dsp.BiquadFilter */
  obj->matlabCodegenIsDeleted = false;

  /* System object Initialization function: dsp.BiquadFilter */
  for (i = 0; i < 5; i++) {
    obj->cSFunObject.coefficients[i] = b[i];
  }

  arm_biquad_cascade_df2T_init_f32(&obj->cSFunObject.S, 1U,
    &obj->cSFunObject.coefficients[0], &obj->cSFunObject.pState[0]);
  return b_obj;
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static dspcodegen_LPCToLSF_stm32f4di_T *stm32f4discov_LPCToLSF_LPCToLSF
  (dspcodegen_LPCToLSF_stm32f4di_T *obj)
{
  dspcodegen_LPCToLSF_stm32f4di_T *b_obj;
  b_obj = obj;
  obj->isInitialized = 0;

  /* System object Constructor function: dsp.LPCToLSF */
  obj->cSFunObject.P0_NSteps = 64;
  obj->cSFunObject.P1_NBisects = 4;
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static dspcodegen_ZeroCrossingDetect_T *ZeroCrossingDetector_ZeroCrossi
  (dspcodegen_ZeroCrossingDetect_T *obj)
{
  dspcodegen_ZeroCrossingDetect_T *b_obj;
  b_obj = obj;
  obj->isInitialized = 0;

  /* System object Constructor function: dsp.ZeroCrossingDetector */
  obj->matlabCodegenIsDeleted = false;

  /* System object Initialization function: dsp.ZeroCrossingDetector */
  obj->cSFunObject.W0_InputBuffer = 0.0F;
  return b_obj;
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static void stm32_SystemCore_parenReference(const real32_T varargin_1[240],
  real32_T varargout_1[13])
{
  int32_T i;
  int32_T k;
  int32_T idx1;
  int32_T idx2;
  int32_T idxout;
  real32_T accTmp;

  /* System object Outputs function: dsp.Autocorrelator */
  idxout = 0;
  for (i = 0; i < 13; i++) {
    accTmp = 0.0F;
    idx1 = 0;
    idx2 = i;
    for (k = 0; k < 240 - i; k++) {
      accTmp += varargin_1[idx1] * varargin_1[idx2];
      idx1++;
      idx2++;
    }

    varargout_1[idxout] = accTmp;
    idxout++;
  }
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static void stm_SystemCore_parenReference_h(const real32_T varargin_1[11],
  real32_T varargout_1[11])
{
  boolean_T isIEven;
  real32_T rTmpP;
  int32_T b_i;
  real32_T acc;
  int32_T upLim;
  int32_T offset1;
  int32_T offset2;
  int32_T j;
  real32_T rTmpA;

  /* System object Outputs function: dsp.LevinsonSolver */
  if (varargin_1[0] == 0.0F) {
    varargout_1[0] = 1.0F;
    b_i = 1;
    for (offset1 = 0; offset1 < 10; offset1++) {
      varargout_1[b_i] = 0.0F;
      b_i++;
    }
  } else {
    isIEven = false;
    rTmpP = varargin_1[0];
    for (b_i = 0; b_i < 10; b_i++) {
      acc = varargin_1[b_i + 1];
      offset1 = 1;
      offset2 = b_i;
      for (j = 1; j < b_i + 1; j++) {
        acc += varargout_1[offset1] * varargin_1[offset2];
        offset1++;
        offset2--;
      }

      acc *= -(1.0F / rTmpP);
      rTmpP *= 1.0F - acc * acc;
      upLim = b_i >> 1;
      offset1 = 1;
      offset2 = b_i;
      for (j = 1; j <= upLim; j++) {
        rTmpA = varargout_1[offset1];
        varargout_1[offset1] += acc * varargout_1[offset2];
        varargout_1[offset2] += acc * rTmpA;
        offset1++;
        offset2--;
      }

      if (isIEven) {
        offset1 = (b_i + 1) >> 1;
        varargout_1[offset1] += acc * varargout_1[offset1];
      }

      isIEven = !isIEven;
      varargout_1[b_i + 1] = acc;
    }

    varargout_1[0] = 1.0F;
  }
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
void MWDSP_Poly2Lsp_compute_xXI1XkRD(real32_T G1[], real32_T G2[], const
  real32_T lpc[], int32_T orderLPC, int32_T M1)
{
  int32_T i;
  int32_T tmp;

  /* Formulate G1 and G2 polynomials, and deconvolve known roots: */
  /* lpc[0]=1 */
  G1[0U] = 1.0F;
  G2[0U] = 1.0F;
  for (i = 1; i <= M1; i++) {
    tmp = (orderLPC - i) + 1;
    G1[i] = (-G1[i - 1] + lpc[i]) + lpc[tmp];
    G2[i] = (G2[i - 1] + lpc[i]) - lpc[tmp];
  }
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
real32_T MWDSP_Poly2Lsp_chebyso_5YbHyn0D(real32_T b[], real32_T x, const
  real32_T f[], int32_T N)
{
  int32_T k;
  b[N] = 0.0F;
  b[N - 1] = 1.0F;
  for (k = N - 2; k >= 0; k--) {
    b[k] = (2.0F * x * b[k + 1] - b[k + 2]) + f[(N - k) - 1];
  }

  return (x * b[0U] - b[1U]) + f[N] / 2.0F;
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
int32_T MWDSP_Poly2Lsp_S_l6LrihYj(real32_T lsp[], const real32_T G1[], const
  real32_T G2[], int32_T NSteps, int32_T NBisects, int32_T M1, int32_T M2,
  real32_T bptr[])
{
  int32_T nf;
  boolean_T ip;
  int32_T indx;
  real32_T j;
  real32_T delta;
  real32_T xlow;
  real32_T ylow;
  real32_T xhigh;
  real32_T yhigh;
  int32_T i;
  real32_T xmid;
  real32_T ymid;

  /* number of found frequencies */
  nf = 0;

  /* indicator for f1 or f2 */
  ip = false;
  indx = 0;
  j = 1.0F;
  delta = 2.0F / (real32_T)NSteps;
  xlow = 1.0F;
  ylow = MWDSP_Poly2Lsp_chebyso_5YbHyn0D(&bptr[0U], 1.0F, &G1[0U], M1);
  while ((nf < (M1 << 1)) && (indx < NSteps)) {
    j -= delta;
    indx++;
    xhigh = xlow;
    yhigh = ylow;
    xlow = j;
    if (!ip) {
      ylow = MWDSP_Poly2Lsp_chebyso_5YbHyn0D(&bptr[0U], j, &G1[0U], M1);
    } else {
      ylow = MWDSP_Poly2Lsp_chebyso_5YbHyn0D(&bptr[0U], j, &G2[0U], M2);
    }

    if (ylow * yhigh < 0.0F) {
      /* this indicates that there exists a root between xlow and xhigh
         sub-divide this interval further and find out exact root */
      for (i = 0; i < NBisects; i++) {
        xmid = (xlow + xhigh) / 2.0F;
        if (!ip) {
          ymid = MWDSP_Poly2Lsp_chebyso_5YbHyn0D(&bptr[0U], xmid, &G1[0U], M1);
        } else {
          ymid = MWDSP_Poly2Lsp_chebyso_5YbHyn0D(&bptr[0U], xmid, &G2[0U], M2);
        }

        if (ylow * ymid <= 0.0F) {
          yhigh = ymid;
          xhigh = xmid;
        } else {
          ylow = ymid;
          xlow = xmid;
        }
      }

      /* Linear interpolation
         xint = xlow - ylow*(xhigh-xlow)/(yhigh-ylow); */
      yhigh -= ylow;
      if (!(yhigh == 0.0F)) {
        xlow -= (xhigh - xlow) / yhigh * ylow;
      }

      lsp[nf] = xlow;
      nf++;
      ip = !ip;
      if (!ip) {
        ylow = MWDSP_Poly2Lsp_chebyso_5YbHyn0D(&bptr[0U], xlow, &G1[0U], M1);
      } else {
        ylow = MWDSP_Poly2Lsp_chebyso_5YbHyn0D(&bptr[0U], xlow, &G2[0U], M2);
      }
    }
  }

  return nf;
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
int32_T MWDSP_Poly2Lsfr_S_Pj4Rfalb(real32_T lsp[], const real32_T G1[], const
  real32_T G2[], int32_T NSteps, int32_T NBisects, int32_T M1, int32_T M2,
  real32_T bptr[], int32_T P)
{
  int32_T nf;
  int32_T i;
  nf = MWDSP_Poly2Lsp_S_l6LrihYj(&lsp[0], &G1[0U], &G2[0U], NSteps, NBisects, M1,
    M2, &bptr[0U]);
  for (i = 0; i < P; i++) {
    lsp[i] = (real32_T)acos(lsp[i]);
  }

  return nf;
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static void st_SystemCore_parenReference_h0(dspcodegen_LPCToLSF_stm32f4di_T *obj,
  const real32_T varargin_1[11], real32_T varargout_1[10])
{
  int32_T i;
  int32_T nf;

  /* System object Outputs function: dsp.LPCToLSF */
  MWDSP_Poly2Lsp_compute_xXI1XkRD(&obj->cSFunObject.W0_G1[0U],
    &obj->cSFunObject.W1_G2[0U], &varargin_1[0], 10, 5);

  /* Compute LSP vectors */
  nf = MWDSP_Poly2Lsfr_S_Pj4Rfalb(&varargout_1[0], &obj->cSFunObject.W0_G1[0U],
    &obj->cSFunObject.W1_G2[0U], 64, 4, 5, 5, &obj->cSFunObject.W2_Cheby[0U], 10);

  /* Output is LSP */
  for (i = nf; i < 10; i++) {
    varargout_1[nf] = 3.14159274F;
    nf++;
  }
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static void s_SystemCore_parenReference_h0a(dspcodegen_LevinsonSolver_1_s_T *obj,
  const real32_T varargin_1[3], real32_T varargout_1[2])
{
  real32_T rTmpP;
  real32_T rTmpK;
  real32_T rTmpA1;

  /* System object Outputs function: dsp.LevinsonSolver */
  if (varargin_1[0] == 0.0F) {
    varargout_1[0] = 0.0F;
    varargout_1[1] = 0.0F;
  } else {
    rTmpK = -(1.0F / varargin_1[0]) * varargin_1[1];
    rTmpP = (1.0F - rTmpK * rTmpK) * varargin_1[0];
    obj->cSFunObject.W0_ACOEF_DWORK_IDX[1] = rTmpK;
    varargout_1[0] = rTmpK;
    rTmpK = obj->cSFunObject.W0_ACOEF_DWORK_IDX[1] * varargin_1[1];
    rTmpK = (varargin_1[2] + rTmpK) * -(1.0F / rTmpP);
    rTmpP = obj->cSFunObject.W0_ACOEF_DWORK_IDX[1];
    rTmpA1 = obj->cSFunObject.W0_ACOEF_DWORK_IDX[1];
    obj->cSFunObject.W0_ACOEF_DWORK_IDX[1] = rTmpK * rTmpA1 + rTmpP;
    obj->cSFunObject.W0_ACOEF_DWORK_IDX[2] = rTmpK;
    varargout_1[1] = rTmpK;
    obj->cSFunObject.W0_ACOEF_DWORK_IDX[0] = 1.0F;
  }
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static real32_T stm32f4discovery_vadG729_sum(const real32_T x[12])
{
  real32_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 11; k++) {
    y += x[k + 1];
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static real32_T stm32f4discovery_vadG729_sum_k(const real32_T x[10])
{
  real32_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 9; k++) {
    y += x[k + 1];
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static uint32_T SystemCore_parenReference_h0aq(dspcodegen_ZeroCrossingDetect_T
  *obj, const real32_T varargin_1[81])
{
  uint32_T varargout_1;
  dsp_ZeroCrossingDetector_5_st_T *b_obj;
  int32_T idx_this_samp;
  int32_T i;
  b_obj = &obj->cSFunObject;

  /* System object Outputs function: dsp.ZeroCrossingDetector */
  idx_this_samp = 0;
  varargout_1 = 0U;
  for (i = 0; i < 81; i++) {
    if (((b_obj->W0_InputBuffer < 0.0F) && (varargin_1[idx_this_samp] > 0.0F)) ||
        ((b_obj->W0_InputBuffer > 0.0F) && (varargin_1[idx_this_samp] < 0.0F)))
    {
      varargout_1++;
    }

    if (varargin_1[idx_this_samp] != 0.0F) {
      b_obj->W0_InputBuffer = varargin_1[idx_this_samp];
    }

    idx_this_samp++;
  }

  return varargout_1;
}

/* Function for MATLAB Function: '<Root>/VAD_G729' */
static real32_T stm32f4discovery_vadG729_mod(real32_T x)
{
  real32_T r;
  if (rtIsNaNF(x) || rtIsInfF(x)) {
    r = (rtNaNF);
  } else if (x == 0.0F) {
    r = 0.0F;
  } else {
    r = (real32_T)fmod(x, 8.0);
    if (r == 0.0F) {
      r = 0.0F;
    } else {
      if (x < 0.0F) {
        r += 8.0F;
      }
    }
  }

  return r;
}

/* Model step function */
void stm32f4discovery_vadG729_step(void)
{
  int32_T i;
  static const real32_T c[240] = { 0.0799999908F, 0.0800570324F, 0.0802281275F,
    0.0805132166F, 0.0809122697F, 0.0814251378F, 0.0820517316F, 0.0827918723F,
    0.0836454108F, 0.0846121088F, 0.0856917277F, 0.086884F, 0.0881886557F,
    0.0896053091F, 0.0911336616F, 0.0927733555F, 0.0945238844F, 0.0963849202F,
    0.0983559564F, 0.100436516F, 0.102626063F, 0.10492406F, 0.107329972F,
    0.109843142F, 0.112463005F, 0.115188874F, 0.118020095F, 0.120955922F,
    0.123995699F, 0.12713863F, 0.130383924F, 0.133730814F, 0.137178436F,
    0.140725955F, 0.144372448F, 0.14811708F, 0.151958868F, 0.155896887F,
    0.159930184F, 0.164057687F, 0.168278441F, 0.172591344F, 0.176995352F,
    0.181489423F, 0.186072335F, 0.190743074F, 0.195500359F, 0.200343147F,
    0.205270067F, 0.210280046F, 0.215371802F, 0.220544F, 0.225795463F,
    0.231124833F, 0.236530766F, 0.242011979F, 0.247567073F, 0.25319469F,
    0.2588934F, 0.264661878F, 0.270498574F, 0.276402116F, 0.282371044F,
    0.288403809F, 0.294499069F, 0.300655067F, 0.30687049F, 0.31314376F,
    0.319473237F, 0.325857371F, 0.332294643F, 0.338783443F, 0.345322102F,
    0.351909041F, 0.358542621F, 0.365221173F, 0.371943146F, 0.378706723F,
    0.385510325F, 0.392352223F, 0.399230719F, 0.406144172F, 0.413090795F,
    0.42006886F, 0.427076608F, 0.434112489F, 0.441174626F, 0.448261201F,
    0.455370456F, 0.46250084F, 0.469650418F, 0.47681734F, 0.483999968F,
    0.491196573F, 0.498405248F, 0.505624175F, 0.512851596F, 0.520085871F,
    0.527325F, 0.534567297F, 0.54181093F, 0.549054146F, 0.556295037F, 0.563532F,
    0.570763052F, 0.577986479F, 0.585200489F, 0.592403352F, 0.599593103F,
    0.606768191F, 0.613926709F, 0.621066868F, 0.628186882F, 0.635285079F,
    0.642359614F, 0.649408817F, 0.65643084F, 0.663424075F, 0.670386612F,
    0.677316785F, 0.684213F, 0.691073477F, 0.697896361F, 0.704680145F,
    0.711423159F, 0.718123674F, 0.724779904F, 0.731390357F, 0.737953424F,
    0.744467258F, 0.750930488F, 0.757341444F, 0.763698399F, 0.770000041F,
    0.776244521F, 0.78243047F, 0.788556278F, 0.794620454F, 0.80062145F,
    0.806557894F, 0.812428176F, 0.818231046F, 0.823964775F, 0.82962811F,
    0.835219622F, 0.840738F, 0.846181691F, 0.851549506F, 0.856840074F,
    0.862052143F, 0.867184222F, 0.872235298F, 0.877203882F, 0.88208884F,
    0.88688904F, 0.891603231F, 0.896230161F, 0.900768816F, 0.905218F,
    0.909576654F, 0.913843513F, 0.918017805F, 0.922098339F, 0.926084042F,
    0.929974139F, 0.933767438F, 0.937463105F, 0.941060245F, 0.944557846F,
    0.94795531F, 0.951251447F, 0.95444566F, 0.957537174F, 0.960525036F,
    0.963408649F, 0.966187239F, 0.968860209F, 0.971426845F, 0.97388643F,
    0.976238489F, 0.978482306F, 0.980617464F, 0.982643306F, 0.984559357F,
    0.986365199F, 0.988060415F, 0.989644468F, 0.991117F, 0.992477715F,
    0.993726194F, 0.994862199F, 0.995885372F, 0.996795535F, 0.99759239F,
    0.998275816F, 0.998845518F, 0.999301493F, 0.999643564F, 0.999871671F,
    0.999985754F, 1.0F, 0.999219298F, 0.996878445F, 0.992981076F, 0.987533331F,
    0.980543613F, 0.972022891F, 0.961984515F, 0.950444102F, 0.937419653F,
    0.922931552F, 0.907002449F, 0.88965708F, 0.870922685F, 0.850828409F,
    0.829405665F, 0.806687951F, 0.782710671F, 0.757511258F, 0.73112911F,
    0.703605354F, 0.674983F, 0.645306766F, 0.614622951F, 0.5829795F,
    0.550425708F, 0.517012596F, 0.482792258F, 0.447818F, 0.412144542F,
    0.375827551F, 0.338923752F, 0.301490873F, 0.263587236F, 0.225271955F,
    0.186604932F, 0.147646546F, 0.108457617F, 0.069099471F, 0.0296334308F };

  static const real32_T b[13] = { 1.0001F, 0.998890281F, 0.995568514F,
    0.990056813F, 0.982391596F, 0.972623467F, 0.960816443F, 0.947047353F,
    0.931404948F, 0.913988948F, 0.894909143F, 0.874284F, 0.852239609F };

  static const real32_T d[12] = { 0.21398823F, 0.14767693F, 0.07018812F,
    0.00980856456F, -0.020159347F, -0.0238827F, -0.0148007618F, -0.00503292168F,
    0.000121413665F, 0.0011935425F, 0.000659087207F, 0.000150157823F };

  boolean_T exitg1;

  /* Gain: '<Root>/Normalizing voice signal between -1.0 to 1.0' */
  for (i = 0; i < 80; i++) {
    stm32f4discovery_vadG729_B.Normalizingvoicesignalbetwe[i] =
      stm32f4discovery_vadG729_P.Normalizingvoicesignalbetween10 * (real32_T)
      stm32f4discovery_vadG729_B.Speech[i];
  }

  /* End of Gain: '<Root>/Normalizing voice signal between -1.0 to 1.0' */

  /* MATLAB Function: '<Root>/VAD_G729' */
  /* MATLAB Function 'VAD_G729': '<S1>:1' */
  /* '<S1>:1:5' vad_flag = vadG729(speech, VAD_cst_param); */
  /* 'vadG729:15' if isempty(biquad) */
  if (!stm32f4discovery_vadG729_DW.biquad_not_empty) {
    /* 'vadG729:17' biquad = dsp.BiquadFilter('SOSMatrix', VAD_cst_param.HPF_sos); */
    stm32_BiquadFilter_BiquadFilter(&stm32f4discovery_vadG729_DW.biquad);
    stm32f4discovery_vadG729_DW.biquad_not_empty = true;

    /* 'vadG729:21' autocorr = dsp.Autocorrelator('MaximumLagSource', 'Property', ... */
    /* 'vadG729:22'                             'MaximumLag', VAD_cst_param.NP); */
    stm32f4discovery_vadG729_DW.autocorr.isInitialized = 0;

    /* System object Constructor function: dsp.Autocorrelator */
    stm32f4discovery_vadG729_DW.autocorr.matlabCodegenIsDeleted = false;

    /* 'vadG729:28' levSolver1 = dsp.LevinsonSolver('AOutputPort', true, ... */
    /* 'vadG729:29'                              'KOutputPort', false); */
    stm32f4discovery_vadG729_DW.levSolver1.isInitialized = 0;

    /* System object Constructor function: dsp.LevinsonSolver */
    stm32f4discovery_vadG729_DW.levSolver1.matlabCodegenIsDeleted = false;

    /* 'vadG729:31' levSolver2 = dsp.LevinsonSolver('AOutputPort', false, ... */
    /* 'vadG729:32'                               'KOutputPort', true); */
    stm32f4discovery_vadG729_DW.levSolver2.isInitialized = 0;

    /* System object Constructor function: dsp.LevinsonSolver */
    stm32f4discovery_vadG729_DW.levSolver2.matlabCodegenIsDeleted = false;

    /* 'vadG729:36' lpc2lsf = dsp.LPCToLSF; */
    stm32f4discov_LPCToLSF_LPCToLSF(&stm32f4discovery_vadG729_DW.lpc2lsf);

    /* 'vadG729:39' zerodet = dsp.ZeroCrossingDetector; */
    ZeroCrossingDetector_ZeroCrossi(&stm32f4discovery_vadG729_DW.zerodet);

    /* 'vadG729:42' VAD_var_param.window_buffer = single(zeros(VAD_cst_param.L_WINDOW - VAD_cst_param.L_FRAME, 1)); */
    memset(&stm32f4discovery_vadG729_DW.VAD_var_param.window_buffer[0], 0, 160U *
           sizeof(real32_T));

    /* 'vadG729:43' VAD_var_param.frm_count = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.frm_count = 0.0F;

    /* 'vadG729:44' VAD_var_param.MeanLSF = single(zeros(VAD_cst_param.M, 1)); */
    for (i = 0; i < 10; i++) {
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanLSF[i] = 0.0F;
    }

    /* 'vadG729:45' VAD_var_param.MeanSE = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE = 0.0F;

    /* 'vadG729:46' VAD_var_param.MeanSLE = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.MeanSLE = 0.0F;

    /* 'vadG729:47' VAD_var_param.MeanE = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.MeanE = 0.0F;

    /* 'vadG729:48' VAD_var_param.MeanSZC = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.MeanSZC = 0.0F;

    /* 'vadG729:49' VAD_var_param.count_sil = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.count_sil = 0.0F;

    /* 'vadG729:50' VAD_var_param.count_update = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.count_update = 0.0F;

    /* 'vadG729:51' VAD_var_param.count_ext = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.count_ext = 0.0F;

    /* 'vadG729:52' VAD_var_param.less_count = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.less_count = 0.0F;

    /* 'vadG729:53' VAD_var_param.flag = single(1); */
    stm32f4discovery_vadG729_DW.VAD_var_param.flag = 1.0F;

    /* 'vadG729:54' VAD_var_param.prev_markers = single([1, 1]); */
    stm32f4discovery_vadG729_DW.VAD_var_param.prev_markers[0] = 1.0F;
    stm32f4discovery_vadG729_DW.VAD_var_param.prev_markers[1] = 1.0F;

    /* 'vadG729:55' VAD_var_param.prev_energy = single(0); */
    stm32f4discovery_vadG729_DW.VAD_var_param.prev_energy = 0.0F;

    /* 'vadG729:56' VAD_var_param.Prev_Min = single(Inf); */
    stm32f4discovery_vadG729_DW.VAD_var_param.Prev_Min = (rtInfF);

    /* 'vadG729:57' VAD_var_param.Next_Min = single(Inf); */
    stm32f4discovery_vadG729_DW.VAD_var_param.Next_Min = (rtInfF);

    /* 'vadG729:58' VAD_var_param.Min_buffer = single(Inf * ones(1, VAD_cst_param.No)); */
    for (stm32f4discovery_vadG729_B.v_flag = 0;
         stm32f4discovery_vadG729_B.v_flag < 128;
         stm32f4discovery_vadG729_B.v_flag++) {
      stm32f4discovery_vadG729_DW.VAD_var_param.Min_buffer[stm32f4discovery_vadG729_B.v_flag]
        = (rtInfF);
    }
  }

  /* 'vadG729:62' NOISE = single(0); */
  /* 'vadG729:63' VOICE = single(1); */
  /* 'vadG729:64' v_flag = single(0); */
  /* 'vadG729:65' VAD_var_param.frm_count = single(VAD_var_param.frm_count + 1); */
  stm32f4discovery_vadG729_DW.VAD_var_param.frm_count++;

  /* 'vadG729:70' speech_hp = biquad(32768*speech); */
  for (stm32f4discovery_vadG729_B.v_flag = 0; stm32f4discovery_vadG729_B.v_flag <
       80; stm32f4discovery_vadG729_B.v_flag++) {
    stm32f4discovery_vadG729_B.Normalizingvoicesignalbetwe[stm32f4discovery_vadG729_B.v_flag]
      *= 32768.0F;
  }

  /* System object Outputs function: dsp.BiquadFilter */
  arm_biquad_cascade_df2T_f32(&stm32f4discovery_vadG729_DW.biquad.cSFunObject.S,
    &stm32f4discovery_vadG729_B.Normalizingvoicesignalbetwe[0],
    &stm32f4discovery_vadG729_B.speech_hp[0], 80U);

  /* 'vadG729:73' speech_buf = [VAD_var_param.window_buffer; speech_hp]; */
  memcpy(&stm32f4discovery_vadG729_B.speech_buf[0],
         &stm32f4discovery_vadG729_DW.VAD_var_param.window_buffer[0], 160U *
         sizeof(real32_T));
  memcpy(&stm32f4discovery_vadG729_B.speech_buf[160],
         &stm32f4discovery_vadG729_B.speech_hp[0], 80U * sizeof(real32_T));

  /* 'vadG729:78' speech_win = VAD_cst_param.hamwindow .* speech_buf; */
  /* 'vadG729:81' r = autocorr(speech_win) .* VAD_cst_param.lagwindow; */
  for (stm32f4discovery_vadG729_B.v_flag = 0; stm32f4discovery_vadG729_B.v_flag <
       240; stm32f4discovery_vadG729_B.v_flag++) {
    stm32f4discovery_vadG729_B.c[stm32f4discovery_vadG729_B.v_flag] =
      c[stm32f4discovery_vadG729_B.v_flag] *
      stm32f4discovery_vadG729_B.speech_buf[stm32f4discovery_vadG729_B.v_flag];
  }

  stm32_SystemCore_parenReference(stm32f4discovery_vadG729_B.c,
    stm32f4discovery_vadG729_B.r);
  for (stm32f4discovery_vadG729_B.v_flag = 0; stm32f4discovery_vadG729_B.v_flag <
       13; stm32f4discovery_vadG729_B.v_flag++) {
    stm32f4discovery_vadG729_B.r[stm32f4discovery_vadG729_B.v_flag] *=
      b[stm32f4discovery_vadG729_B.v_flag];
  }

  /* 'vadG729:84' a = levSolver1(r(1:VAD_cst_param.M+1)); */
  stm_SystemCore_parenReference_h(&stm32f4discovery_vadG729_B.r[0],
    stm32f4discovery_vadG729_B.a);

  /* 'vadG729:88' LSF = lpc2lsf(a) / (2 * pi); */
  st_SystemCore_parenReference_h0(&stm32f4discovery_vadG729_DW.lpc2lsf,
    stm32f4discovery_vadG729_B.a, stm32f4discovery_vadG729_B.LSF);
  for (stm32f4discovery_vadG729_B.v_flag = 0; stm32f4discovery_vadG729_B.v_flag <
       10; stm32f4discovery_vadG729_B.v_flag++) {
    stm32f4discovery_vadG729_B.LSF[stm32f4discovery_vadG729_B.v_flag] /=
      6.28318548F;
  }

  /* 'vadG729:91' rc = levSolver2(r(1:3)); */
  s_SystemCore_parenReference_h0a(&stm32f4discovery_vadG729_DW.levSolver2,
    &stm32f4discovery_vadG729_B.r[0], stm32f4discovery_vadG729_B.rc);

  /* 'vadG729:98' Ef = 10 * log10(r(1) / VAD_cst_param.L_WINDOW); */
  stm32f4discovery_vadG729_B.Ef = (real32_T)log10(stm32f4discovery_vadG729_B.r[0]
    / 240.0F) * 10.0F;

  /* 'vadG729:101' El = r(1) * VAD_cst_param.lbf_corr(1) + 2 * sum(r(2:end) .* VAD_cst_param.lbf_corr(2:end)); */
  /* 'vadG729:102' El = 10 * log10(El / VAD_cst_param.L_WINDOW); */
  for (stm32f4discovery_vadG729_B.v_flag = 0; stm32f4discovery_vadG729_B.v_flag <
       12; stm32f4discovery_vadG729_B.v_flag++) {
    stm32f4discovery_vadG729_B.r_m[stm32f4discovery_vadG729_B.v_flag] =
      stm32f4discovery_vadG729_B.r[stm32f4discovery_vadG729_B.v_flag + 1] *
      d[stm32f4discovery_vadG729_B.v_flag];
  }

  stm32f4discovery_vadG729_B.El = (real32_T)log10((stm32f4discovery_vadG729_B.r
    [0] * 0.24017939F + 2.0F * stm32f4discovery_vadG729_sum
    (stm32f4discovery_vadG729_B.r_m)) / 240.0F) * 10.0F;

  /* 'vadG729:105' SD = sum((LSF-VAD_var_param.MeanLSF).^2); */
  for (i = 0; i < 10; i++) {
    stm32f4discovery_vadG729_B.SD = stm32f4discovery_vadG729_B.LSF[i] -
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanLSF[i];
    stm32f4discovery_vadG729_B.z1[i] = stm32f4discovery_vadG729_B.SD *
      stm32f4discovery_vadG729_B.SD;
  }

  stm32f4discovery_vadG729_B.SD = stm32f4discovery_vadG729_sum_k
    (stm32f4discovery_vadG729_B.z1);

  /* 'vadG729:108' idx = VAD_cst_param.L_WINDOW - VAD_cst_param.L_NEXT - VAD_cst_param.L_FRAME + 1; */
  /* 'vadG729:109' ZC = double(zerodet(speech_buf(idx:idx+VAD_cst_param.L_FRAME)))/VAD_cst_param.L_FRAME; */
  stm32f4discovery_vadG729_B.x = SystemCore_parenReference_h0aq
    (&stm32f4discovery_vadG729_DW.zerodet,
     &stm32f4discovery_vadG729_B.speech_buf[120]);
  stm32f4discovery_vadG729_B.ZC = (real32_T)stm32f4discovery_vadG729_B.x / 80.0F;

  /* 'vadG729:112' VAD_var_param.Next_Min = min(Ef, VAD_var_param.Next_Min); */
  if ((stm32f4discovery_vadG729_B.Ef <
       stm32f4discovery_vadG729_DW.VAD_var_param.Next_Min) || rtIsNaNF
      (stm32f4discovery_vadG729_DW.VAD_var_param.Next_Min)) {
    stm32f4discovery_vadG729_DW.VAD_var_param.Next_Min =
      stm32f4discovery_vadG729_B.Ef;
  }

  /* 'vadG729:113' Min = min(VAD_var_param.Prev_Min, VAD_var_param.Next_Min); */
  if ((stm32f4discovery_vadG729_DW.VAD_var_param.Prev_Min <
       stm32f4discovery_vadG729_DW.VAD_var_param.Next_Min) || rtIsNaNF
      (stm32f4discovery_vadG729_DW.VAD_var_param.Next_Min)) {
    stm32f4discovery_vadG729_B.Min =
      stm32f4discovery_vadG729_DW.VAD_var_param.Prev_Min;
  } else {
    stm32f4discovery_vadG729_B.Min =
      stm32f4discovery_vadG729_DW.VAD_var_param.Next_Min;
  }

  /* 'vadG729:114' if (mod(VAD_var_param.frm_count, single(8)) == 0) */
  if (stm32f4discovery_vadG729_mod
      (stm32f4discovery_vadG729_DW.VAD_var_param.frm_count) == 0.0F) {
    /* 'vadG729:115' VAD_var_param.Min_buffer = [VAD_var_param.Min_buffer(2:end), VAD_var_param.Next_Min]; */
    memcpy(&stm32f4discovery_vadG729_B.fv[0],
           &stm32f4discovery_vadG729_DW.VAD_var_param.Min_buffer[1], 127U *
           sizeof(real32_T));
    stm32f4discovery_vadG729_B.fv[127] =
      stm32f4discovery_vadG729_DW.VAD_var_param.Next_Min;
    memcpy(&stm32f4discovery_vadG729_DW.VAD_var_param.Min_buffer[0],
           &stm32f4discovery_vadG729_B.fv[0], sizeof(real32_T) << 7U);

    /* 'vadG729:116' VAD_var_param.Prev_Min = min(VAD_var_param.Min_buffer); */
    if (!rtIsNaNF(stm32f4discovery_vadG729_DW.VAD_var_param.Min_buffer[0])) {
      i = 1;
    } else {
      i = 0;
      stm32f4discovery_vadG729_B.v_flag = 2;
      exitg1 = false;
      while ((!exitg1) && (stm32f4discovery_vadG729_B.v_flag < 129)) {
        if (!rtIsNaNF
            (stm32f4discovery_vadG729_DW.VAD_var_param.Min_buffer[stm32f4discovery_vadG729_B.v_flag
             - 1])) {
          i = stm32f4discovery_vadG729_B.v_flag;
          exitg1 = true;
        } else {
          stm32f4discovery_vadG729_B.v_flag++;
        }
      }
    }

    if (i == 0) {
      stm32f4discovery_vadG729_B.dSE =
        stm32f4discovery_vadG729_DW.VAD_var_param.Min_buffer[0];
    } else {
      stm32f4discovery_vadG729_B.dSE =
        stm32f4discovery_vadG729_DW.VAD_var_param.Min_buffer[i - 1];
      while (i + 1 <= 128) {
        if (stm32f4discovery_vadG729_B.dSE >
            stm32f4discovery_vadG729_DW.VAD_var_param.Min_buffer[i]) {
          stm32f4discovery_vadG729_B.dSE =
            stm32f4discovery_vadG729_DW.VAD_var_param.Min_buffer[i];
        }

        i++;
      }
    }

    stm32f4discovery_vadG729_DW.VAD_var_param.Prev_Min =
      stm32f4discovery_vadG729_B.dSE;

    /* 'vadG729:117' VAD_var_param.Next_Min = single(Inf); */
    stm32f4discovery_vadG729_DW.VAD_var_param.Next_Min = (rtInfF);
  }

  /* 'vadG729:120' if (VAD_var_param.frm_count < VAD_cst_param.Ni) */
  if (stm32f4discovery_vadG729_DW.VAD_var_param.frm_count < 32.0F) {
    /* 'vadG729:122' if (Ef < 21) */
    if (stm32f4discovery_vadG729_B.Ef < 21.0F) {
      /* 'vadG729:123' VAD_var_param.less_count = VAD_var_param.less_count + 1; */
      stm32f4discovery_vadG729_DW.VAD_var_param.less_count++;

      /* 'vadG729:124' marker = NOISE; */
      i = 0;
    } else {
      /* 'vadG729:125' else */
      /* 'vadG729:127' marker = VOICE; */
      i = 1;

      /* 'vadG729:128' NE = (VAD_var_param.frm_count - 1) - VAD_var_param.less_count; */
      stm32f4discovery_vadG729_B.El =
        (stm32f4discovery_vadG729_DW.VAD_var_param.frm_count - 1.0F) -
        stm32f4discovery_vadG729_DW.VAD_var_param.less_count;

      /* 'vadG729:130' VAD_var_param.MeanE = (VAD_var_param.MeanE * NE + Ef) / (NE+1); */
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanE =
        (stm32f4discovery_vadG729_DW.VAD_var_param.MeanE *
         stm32f4discovery_vadG729_B.El + stm32f4discovery_vadG729_B.Ef) /
        (stm32f4discovery_vadG729_B.El + 1.0F);

      /* 'vadG729:131' VAD_var_param.MeanSZC = (VAD_var_param.MeanSZC * NE + ZC) / (NE+1); */
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSZC =
        (stm32f4discovery_vadG729_DW.VAD_var_param.MeanSZC *
         stm32f4discovery_vadG729_B.El + stm32f4discovery_vadG729_B.ZC) /
        (stm32f4discovery_vadG729_B.El + 1.0F);

      /* 'vadG729:132' VAD_var_param.MeanLSF = (VAD_var_param.MeanLSF * NE + LSF) / (NE+1); */
      for (stm32f4discovery_vadG729_B.v_flag = 0;
           stm32f4discovery_vadG729_B.v_flag < 10;
           stm32f4discovery_vadG729_B.v_flag++) {
        stm32f4discovery_vadG729_DW.VAD_var_param.MeanLSF[stm32f4discovery_vadG729_B.v_flag]
          =
          (stm32f4discovery_vadG729_DW.VAD_var_param.MeanLSF[stm32f4discovery_vadG729_B.v_flag]
           * stm32f4discovery_vadG729_B.El +
           stm32f4discovery_vadG729_B.LSF[stm32f4discovery_vadG729_B.v_flag]) /
          (stm32f4discovery_vadG729_B.El + 1.0F);
      }
    }
  } else {
    /* 'vadG729:135' else */
    /* 'vadG729:137' if (VAD_var_param.frm_count == VAD_cst_param.Ni) */
    if (stm32f4discovery_vadG729_DW.VAD_var_param.frm_count == 32.0F) {
      /* 'vadG729:138' VAD_var_param.MeanSE = VAD_var_param.MeanE - 10; */
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE =
        stm32f4discovery_vadG729_DW.VAD_var_param.MeanE - 10.0F;

      /* 'vadG729:139' VAD_var_param.MeanSLE = VAD_var_param.MeanE - 12; */
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSLE =
        stm32f4discovery_vadG729_DW.VAD_var_param.MeanE - 12.0F;
    }

    /* 'vadG729:144' dSE = VAD_var_param.MeanSE - Ef; */
    stm32f4discovery_vadG729_B.dSE =
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE -
      stm32f4discovery_vadG729_B.Ef;

    /* 'vadG729:145' dSLE = VAD_var_param.MeanSLE - El; */
    stm32f4discovery_vadG729_B.dSLE =
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSLE -
      stm32f4discovery_vadG729_B.El;

    /* 'vadG729:146' dSZC = VAD_var_param.MeanSZC - ZC; */
    stm32f4discovery_vadG729_B.dSZC =
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSZC -
      stm32f4discovery_vadG729_B.ZC;

    /* 'vadG729:149' if (Ef < 21) */
    if (stm32f4discovery_vadG729_B.Ef < 21.0F) {
      /* 'vadG729:150' marker = NOISE; */
      i = 0;
    } else {
      /* 'vadG729:151' else */
      /* 'vadG729:152' marker = vad_decision(dSLE, dSE, SD, dSZC); */
      /* 'vadG729:270' a = single([0.00175, -0.004545455, -25, 20, 0, ... */
      /* 'vadG729:271'      8800, 0, 25, -29.09091, 0, ... */
      /* 'vadG729:272'      14000, 0.928571, -1.5, 0.714285]); */
      /* 'vadG729:274' b = single([0.00085, 0.001159091, -5, -6, -4.7, ... */
      /* 'vadG729:275'      -12.2, 0.0009, -7.0, -4.8182, -5.3, ... */
      /* 'vadG729:276'      -15.5, 1.14285, -9, -2.1428571]); */
      /* 'vadG729:278' dec = single(0); */
      i = 0;

      /* 'vadG729:280' if SD > a(1)*dSZC+b(1) */
      if (stm32f4discovery_vadG729_B.SD > 0.00175F *
          stm32f4discovery_vadG729_B.dSZC + 0.00085F) {
        /* 'vadG729:281' dec = single(1); */
        i = 1;
      } else {
        /* 'vadG729:285' if SD > a(2)*dSZC+b(2) */
        if (stm32f4discovery_vadG729_B.SD > -0.00454545487F *
            stm32f4discovery_vadG729_B.dSZC + 0.00115909101F) {
          /* 'vadG729:286' dec = single(1); */
          i = 1;
        } else {
          /* 'vadG729:290' if dSE < a(3)*dSZC+b(3) */
          if (stm32f4discovery_vadG729_B.dSE < -25.0F *
              stm32f4discovery_vadG729_B.dSZC + -5.0F) {
            /* 'vadG729:291' dec = single(1); */
            i = 1;
          } else {
            /* 'vadG729:295' if dSE < a(4)*dSZC+b(4) */
            if (stm32f4discovery_vadG729_B.dSE < 20.0F *
                stm32f4discovery_vadG729_B.dSZC + -6.0F) {
              /* 'vadG729:296' dec = single(1); */
              i = 1;
            } else {
              /* 'vadG729:300' if dSE < b(5) */
              if (stm32f4discovery_vadG729_B.dSE < -4.7F) {
                /* 'vadG729:301' dec = single(1); */
                i = 1;
              } else {
                /* 'vadG729:305' if dSE < a(6)*SD+b(6) */
                if (stm32f4discovery_vadG729_B.dSE < 8800.0F *
                    stm32f4discovery_vadG729_B.SD + -12.2F) {
                  /* 'vadG729:306' dec = single(1); */
                  i = 1;
                } else {
                  /* 'vadG729:310' if SD > b(7) */
                  if (stm32f4discovery_vadG729_B.SD > 0.0009F) {
                    /* 'vadG729:311' dec = single(1); */
                    i = 1;
                  } else {
                    /* 'vadG729:315' if dSLE < a(8)*dSZC+b(8) */
                    if (stm32f4discovery_vadG729_B.dSLE < 25.0F *
                        stm32f4discovery_vadG729_B.dSZC + -7.0F) {
                      /* 'vadG729:316' dec = single(1); */
                      i = 1;
                    } else {
                      /* 'vadG729:320' if dSLE < a(9)*dSZC+b(9) */
                      if (stm32f4discovery_vadG729_B.dSLE < -29.09091F *
                          stm32f4discovery_vadG729_B.dSZC + -4.8182F) {
                        /* 'vadG729:321' dec = single(1); */
                        i = 1;
                      } else {
                        /* 'vadG729:325' if dSLE < b(10) */
                        if (stm32f4discovery_vadG729_B.dSLE < -5.3F) {
                          /* 'vadG729:326' dec = single(1); */
                          i = 1;
                        } else {
                          /* 'vadG729:330' if dSLE < a(11)*SD+b(11) */
                          if (stm32f4discovery_vadG729_B.dSLE < 14000.0F *
                              stm32f4discovery_vadG729_B.SD + -15.5F) {
                            /* 'vadG729:331' dec = single(1); */
                            i = 1;
                          } else {
                            /* 'vadG729:335' if dSLE > a(12)*dSE+b(12) */
                            if (stm32f4discovery_vadG729_B.dSLE > 0.928571F *
                                stm32f4discovery_vadG729_B.dSE + 1.14285F) {
                              /* 'vadG729:336' dec = single(1); */
                              i = 1;
                            } else {
                              /* 'vadG729:340' if dSLE < a(13)*dSE+b(13) */
                              if (stm32f4discovery_vadG729_B.dSLE < -1.5F *
                                  stm32f4discovery_vadG729_B.dSE + -9.0F) {
                                /* 'vadG729:341' dec = single(1); */
                                i = 1;
                              } else {
                                /* 'vadG729:345' if dSLE < a(14)*dSE+b(14) */
                                if (stm32f4discovery_vadG729_B.dSLE < 0.714285F *
                                    stm32f4discovery_vadG729_B.dSE +
                                    -2.14285707F) {
                                  /* 'vadG729:346' dec = single(1); */
                                  i = 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    /* 'vadG729:155' v_flag = single(0); */
    stm32f4discovery_vadG729_B.v_flag = 0;

    /* 'vadG729:161' if ((VAD_var_param.prev_markers(1) == VOICE) && (marker == NOISE) ... */
    /* 'vadG729:162'         && (Ef > VAD_var_param.MeanSE + 2) && (Ef > 21)) */
    if ((stm32f4discovery_vadG729_DW.VAD_var_param.prev_markers[0] == 1.0F) &&
        ((i == 0) && (stm32f4discovery_vadG729_B.Ef >
                      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE + 2.0F) &&
         (stm32f4discovery_vadG729_B.Ef > 21.0F))) {
      /* 'vadG729:163' marker = VOICE; */
      i = 1;

      /* 'vadG729:164' v_flag = single(1); */
      stm32f4discovery_vadG729_B.v_flag = 1;
    }

    /* 'vadG729:168' if (VAD_var_param.flag == 1) */
    if (stm32f4discovery_vadG729_DW.VAD_var_param.flag == 1.0F) {
      /* 'vadG729:169' if ((VAD_var_param.prev_markers(2) == VOICE) ... */
      /* 'vadG729:170'             && (VAD_var_param.prev_markers(1) == VOICE) ... */
      /* 'vadG729:171'             && (marker == NOISE) ... */
      /* 'vadG729:172'             && (abs(Ef - VAD_var_param.prev_energy) <= 3)) */
      if ((stm32f4discovery_vadG729_DW.VAD_var_param.prev_markers[1] == 1.0F) &&
          (stm32f4discovery_vadG729_DW.VAD_var_param.prev_markers[0] == 1.0F) &&
          (i == 0) && ((real32_T)fabs(stm32f4discovery_vadG729_B.Ef -
            stm32f4discovery_vadG729_DW.VAD_var_param.prev_energy) <= 3.0F)) {
        /* 'vadG729:174' VAD_var_param.count_ext = VAD_var_param.count_ext + 1; */
        stm32f4discovery_vadG729_DW.VAD_var_param.count_ext++;

        /* 'vadG729:175' marker = VOICE; */
        i = 1;

        /* 'vadG729:176' v_flag = single(1); */
        stm32f4discovery_vadG729_B.v_flag = 1;

        /* 'vadG729:178' if (VAD_var_param.count_ext <= 4) */
        if (stm32f4discovery_vadG729_DW.VAD_var_param.count_ext <= 4.0F) {
          /* 'vadG729:179' VAD_var_param.flag = single(1); */
          stm32f4discovery_vadG729_DW.VAD_var_param.flag = 1.0F;
        } else {
          /* 'vadG729:180' else */
          /* 'vadG729:181' VAD_var_param.count_ext = single(0); */
          stm32f4discovery_vadG729_DW.VAD_var_param.count_ext = 0.0F;

          /* 'vadG729:182' VAD_var_param.flag = single(0); */
          stm32f4discovery_vadG729_DW.VAD_var_param.flag = 0.0F;
        }
      }
    } else {
      /* 'vadG729:185' else */
      /* 'vadG729:186' VAD_var_param.flag = single(1); */
      stm32f4discovery_vadG729_DW.VAD_var_param.flag = 1.0F;
    }

    /* 'vadG729:189' if (marker == NOISE) */
    if (i == 0) {
      /* 'vadG729:190' VAD_var_param.count_sil = VAD_var_param.count_sil + 1; */
      stm32f4discovery_vadG729_DW.VAD_var_param.count_sil++;
    }

    /* 'vadG729:194' if ((marker == VOICE) && (VAD_var_param.count_sil > 10) ... */
    /* 'vadG729:195'         && (Ef - VAD_var_param.prev_energy <= 3)) */
    if ((i == 1) && (stm32f4discovery_vadG729_DW.VAD_var_param.count_sil > 10.0F)
        && (stm32f4discovery_vadG729_B.Ef -
            stm32f4discovery_vadG729_DW.VAD_var_param.prev_energy <= 3.0F)) {
      /* 'vadG729:196' marker = NOISE; */
      i = 0;

      /* 'vadG729:197' VAD_var_param.count_sil = single(0); */
      stm32f4discovery_vadG729_DW.VAD_var_param.count_sil = 0.0F;
    }

    /* 'vadG729:200' if (marker == VOICE) */
    if (i == 1) {
      /* 'vadG729:201' VAD_var_param.count_sil = single(0); */
      stm32f4discovery_vadG729_DW.VAD_var_param.count_sil = 0.0F;
    }

    /* 'vadG729:205' if ((Ef < VAD_var_param.MeanSE + 3) && (VAD_var_param.frm_count > VAD_cst_param.No) ... */
    /* 'vadG729:206'         && (v_flag == 0) && (rc(2) < 0.6)) */
    if ((stm32f4discovery_vadG729_B.Ef <
         stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE + 3.0F) &&
        (stm32f4discovery_vadG729_DW.VAD_var_param.frm_count > 128.0F) &&
        (stm32f4discovery_vadG729_B.v_flag == 0) &&
        (stm32f4discovery_vadG729_B.rc[1] < 0.6)) {
      /* 'vadG729:207' marker = NOISE; */
      i = 0;
    }

    /* 'vadG729:212' if ((Ef < VAD_var_param.MeanSE + 3) && (rc(2) < 0.75) && (SD < 0.002532959)) */
    if ((stm32f4discovery_vadG729_B.Ef <
         stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE + 3.0F) &&
        (stm32f4discovery_vadG729_B.rc[1] < 0.75F) &&
        (stm32f4discovery_vadG729_B.SD < 0.002532959)) {
      /* 'vadG729:213' VAD_var_param.count_update = VAD_var_param.count_update + 1; */
      stm32f4discovery_vadG729_DW.VAD_var_param.count_update++;

      /* 'vadG729:215' if (VAD_var_param.count_update < VAD_cst_param.INIT_COUNT) */
      if (stm32f4discovery_vadG729_DW.VAD_var_param.count_update < 20.0F) {
        /* 'vadG729:216' COEF = single(0.75); */
        stm32f4discovery_vadG729_B.dSE = 0.75F;

        /* 'vadG729:217' COEFZC = single(0.8); */
        stm32f4discovery_vadG729_B.dSLE = 0.8F;

        /* 'vadG729:218' COEFSD = single(0.6); */
        stm32f4discovery_vadG729_B.dSZC = 0.6F;
      } else if (stm32f4discovery_vadG729_DW.VAD_var_param.count_update < 30.0F)
      {
        /* 'vadG729:219' elseif (VAD_var_param.count_update < VAD_cst_param.INIT_COUNT + 10) */
        /* 'vadG729:220' COEF = single(0.95); */
        stm32f4discovery_vadG729_B.dSE = 0.95F;

        /* 'vadG729:221' COEFZC = single(0.92); */
        stm32f4discovery_vadG729_B.dSLE = 0.92F;

        /* 'vadG729:222' COEFSD = single(0.65); */
        stm32f4discovery_vadG729_B.dSZC = 0.65F;
      } else if (stm32f4discovery_vadG729_DW.VAD_var_param.count_update < 40.0F)
      {
        /* 'vadG729:223' elseif (VAD_var_param.count_update < VAD_cst_param.INIT_COUNT + 20) */
        /* 'vadG729:224' COEF = single(0.97); */
        stm32f4discovery_vadG729_B.dSE = 0.97F;

        /* 'vadG729:225' COEFZC = single(0.94); */
        stm32f4discovery_vadG729_B.dSLE = 0.94F;

        /* 'vadG729:226' COEFSD = single(0.70); */
        stm32f4discovery_vadG729_B.dSZC = 0.7F;
      } else if (stm32f4discovery_vadG729_DW.VAD_var_param.count_update < 50.0F)
      {
        /* 'vadG729:227' elseif (VAD_var_param.count_update < VAD_cst_param.INIT_COUNT + 30) */
        /* 'vadG729:228' COEF = single(0.99); */
        stm32f4discovery_vadG729_B.dSE = 0.99F;

        /* 'vadG729:229' COEFZC = single(0.96); */
        stm32f4discovery_vadG729_B.dSLE = 0.96F;

        /* 'vadG729:230' COEFSD = single(0.75); */
        stm32f4discovery_vadG729_B.dSZC = 0.75F;
      } else if (stm32f4discovery_vadG729_DW.VAD_var_param.count_update < 60.0F)
      {
        /* 'vadG729:231' elseif (VAD_var_param.count_update < VAD_cst_param.INIT_COUNT + 40) */
        /* 'vadG729:232' COEF = single(0.995); */
        stm32f4discovery_vadG729_B.dSE = 0.995F;

        /* 'vadG729:233' COEFZC = single(0.99); */
        stm32f4discovery_vadG729_B.dSLE = 0.99F;

        /* 'vadG729:234' COEFSD = single(0.75); */
        stm32f4discovery_vadG729_B.dSZC = 0.75F;
      } else {
        /* 'vadG729:235' else */
        /* 'vadG729:236' COEF = single(0.995); */
        stm32f4discovery_vadG729_B.dSE = 0.995F;

        /* 'vadG729:237' COEFZC = single(0.998); */
        stm32f4discovery_vadG729_B.dSLE = 0.998F;

        /* 'vadG729:238' COEFSD = single(0.75); */
        stm32f4discovery_vadG729_B.dSZC = 0.75F;
      }

      /* 'vadG729:242' VAD_var_param.MeanSE = COEF * VAD_var_param.MeanSE + (1-COEF) * Ef; */
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE = (1.0F -
        stm32f4discovery_vadG729_B.dSE) * stm32f4discovery_vadG729_B.Ef +
        stm32f4discovery_vadG729_B.dSE *
        stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE;

      /* 'vadG729:243' VAD_var_param.MeanSLE = COEF * VAD_var_param.MeanSLE + (1-COEF) * El; */
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSLE = (1.0F -
        stm32f4discovery_vadG729_B.dSE) * stm32f4discovery_vadG729_B.El +
        stm32f4discovery_vadG729_B.dSE *
        stm32f4discovery_vadG729_DW.VAD_var_param.MeanSLE;

      /* 'vadG729:244' VAD_var_param.MeanSZC = COEFZC * VAD_var_param.MeanSZC + (1-COEFZC) * ZC; */
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSZC = (1.0F -
        stm32f4discovery_vadG729_B.dSLE) * stm32f4discovery_vadG729_B.ZC +
        stm32f4discovery_vadG729_B.dSLE *
        stm32f4discovery_vadG729_DW.VAD_var_param.MeanSZC;

      /* 'vadG729:245' VAD_var_param.MeanLSF = COEFSD * VAD_var_param.MeanLSF + (1-COEFSD) * LSF; */
      for (stm32f4discovery_vadG729_B.v_flag = 0;
           stm32f4discovery_vadG729_B.v_flag < 10;
           stm32f4discovery_vadG729_B.v_flag++) {
        stm32f4discovery_vadG729_DW.VAD_var_param.MeanLSF[stm32f4discovery_vadG729_B.v_flag]
          = (1.0F - stm32f4discovery_vadG729_B.dSZC) *
          stm32f4discovery_vadG729_B.LSF[stm32f4discovery_vadG729_B.v_flag] +
          stm32f4discovery_vadG729_B.dSZC *
          stm32f4discovery_vadG729_DW.VAD_var_param.MeanLSF[stm32f4discovery_vadG729_B.v_flag];
      }
    }

    /* 'vadG729:248' if ((VAD_var_param.frm_count > VAD_cst_param.No) && ((VAD_var_param.MeanSE < Min) &&  (SD < 0.002532959)) || (VAD_var_param.MeanSE > Min + 10 )) */
    if (((stm32f4discovery_vadG729_DW.VAD_var_param.frm_count > 128.0F) &&
         (stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE <
          stm32f4discovery_vadG729_B.Min) && (stm32f4discovery_vadG729_B.SD <
          0.002532959)) || (stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE >
                            stm32f4discovery_vadG729_B.Min + 10.0F)) {
      /* 'vadG729:249' VAD_var_param.MeanSE = Min; */
      stm32f4discovery_vadG729_DW.VAD_var_param.MeanSE =
        stm32f4discovery_vadG729_B.Min;

      /* 'vadG729:250' VAD_var_param.count_update = single(0); */
      stm32f4discovery_vadG729_DW.VAD_var_param.count_update = 0.0F;
    }
  }

  /* 'vadG729:255' VAD_var_param.prev_energy = Ef; */
  stm32f4discovery_vadG729_DW.VAD_var_param.prev_energy =
    stm32f4discovery_vadG729_B.Ef;

  /* 'vadG729:256' VAD_var_param.prev_markers = [marker, VAD_var_param.prev_markers(1)]; */
  stm32f4discovery_vadG729_DW.VAD_var_param.prev_markers[1] =
    stm32f4discovery_vadG729_DW.VAD_var_param.prev_markers[0];
  stm32f4discovery_vadG729_DW.VAD_var_param.prev_markers[0] = (real32_T)i;

  /* 'vadG729:258' idx = VAD_cst_param.L_FRAME + 1; */
  /* 'vadG729:259' VAD_var_param.window_buffer = speech_buf(idx:end); */
  memcpy(&stm32f4discovery_vadG729_DW.VAD_var_param.window_buffer[0],
         &stm32f4discovery_vadG729_B.speech_buf[80], 160U * sizeof(real32_T));

  /* DataTypeConversion: '<Root>/Data Type Conversion 1' incorporates:
   *  MATLAB Function: '<Root>/VAD_G729'
   */
  /* 'vadG729:262' vad_flag = marker; */
  stm32f4discovery_vadG729_B.DataTypeConversion1 = (i != 0);

  /* S-Function (stm32f4_do_write): '<Root>/LED 6' */
  MW_GPIO_WriteBit(3U, 15U, stm32f4discovery_vadG729_B.DataTypeConversion1);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.01s, 0.0s] */
    rtExtModeUpload(0, (real_T)stm32f4discovery_vadG729_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(stm32f4discovery_vadG729_M)!=-1) &&
        !((rtmGetTFinal(stm32f4discovery_vadG729_M)-
           stm32f4discovery_vadG729_M->Timing.taskTime0) >
          stm32f4discovery_vadG729_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(stm32f4discovery_vadG729_M, "Simulation finished");
    }

    if (rtmGetStopRequested(stm32f4discovery_vadG729_M)) {
      rtmSetErrorStatus(stm32f4discovery_vadG729_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  stm32f4discovery_vadG729_M->Timing.taskTime0 =
    (++stm32f4discovery_vadG729_M->Timing.clockTick0) *
    stm32f4discovery_vadG729_M->Timing.stepSize0;
}

/* Model initialize function */
void stm32f4discovery_vadG729_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)stm32f4discovery_vadG729_M, 0,
                sizeof(RT_MODEL_stm32f4discovery_vad_T));
  rtmSetTFinal(stm32f4discovery_vadG729_M, -1);
  stm32f4discovery_vadG729_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  stm32f4discovery_vadG729_M->Sizes.checksums[0] = (1560476015U);
  stm32f4discovery_vadG729_M->Sizes.checksums[1] = (3313759924U);
  stm32f4discovery_vadG729_M->Sizes.checksums[2] = (3200278889U);
  stm32f4discovery_vadG729_M->Sizes.checksums[3] = (77390448U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    stm32f4discovery_vadG729_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(stm32f4discovery_vadG729_M->extModeInfo,
      &stm32f4discovery_vadG729_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(stm32f4discovery_vadG729_M->extModeInfo,
                        stm32f4discovery_vadG729_M->Sizes.checksums);
    rteiSetTPtr(stm32f4discovery_vadG729_M->extModeInfo, rtmGetTPtr
                (stm32f4discovery_vadG729_M));
  }

  /* block I/O */
  (void) memset(((void *) &stm32f4discovery_vadG729_B), 0,
                sizeof(B_stm32f4discovery_vadG729_T));

  /* states (dwork) */
  (void) memset((void *)&stm32f4discovery_vadG729_DW, 0,
                sizeof(DW_stm32f4discovery_vadG729_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    stm32f4discovery_vadG729_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 22;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (stm32f4_discovery_mic_in): '<Root>/Speech' */
  stm32f4_mems_mic_init(8000U, 4000U, 10U, 1U, stm32f4discovery_vadG729_B.Speech);

  /* Start for S-Function (stm32f4_do_write): '<Root>/LED 6' */
  MW_GpioInit(3U, 32768U, 1U, 3U, 0U, 0U);

  /* SystemInitialize for MATLAB Function: '<Root>/VAD_G729' */
  stm32f4discovery_vadG729_DW.biquad_not_empty = false;
  stm32f4discovery_vadG729_DW.biquad.matlabCodegenIsDeleted = true;
  stm32f4discovery_vadG729_DW.levSolver1.matlabCodegenIsDeleted = true;
  stm32f4discovery_vadG729_DW.autocorr.matlabCodegenIsDeleted = true;
  stm32f4discovery_vadG729_DW.levSolver2.matlabCodegenIsDeleted = true;
  stm32f4discovery_vadG729_DW.zerodet.matlabCodegenIsDeleted = true;
  stm32f4discovery_vadG729_DW.lpc2lsf.matlabCodegenIsDeleted = true;
}

/* Model terminate function */
void stm32f4discovery_vadG729_terminate(void)
{
  /* Terminate for MATLAB Function: '<Root>/VAD_G729' */
  if (!stm32f4discovery_vadG729_DW.lpc2lsf.matlabCodegenIsDeleted) {
    stm32f4discovery_vadG729_DW.lpc2lsf.matlabCodegenIsDeleted = true;
    if (stm32f4discovery_vadG729_DW.lpc2lsf.isInitialized == 1) {
      stm32f4discovery_vadG729_DW.lpc2lsf.isInitialized = 2;
    }
  }

  if (!stm32f4discovery_vadG729_DW.zerodet.matlabCodegenIsDeleted) {
    stm32f4discovery_vadG729_DW.zerodet.matlabCodegenIsDeleted = true;
    if (stm32f4discovery_vadG729_DW.zerodet.isInitialized == 1) {
      stm32f4discovery_vadG729_DW.zerodet.isInitialized = 2;
    }
  }

  if (!stm32f4discovery_vadG729_DW.levSolver2.matlabCodegenIsDeleted) {
    stm32f4discovery_vadG729_DW.levSolver2.matlabCodegenIsDeleted = true;
    if (stm32f4discovery_vadG729_DW.levSolver2.isInitialized == 1) {
      stm32f4discovery_vadG729_DW.levSolver2.isInitialized = 2;
    }
  }

  if (!stm32f4discovery_vadG729_DW.autocorr.matlabCodegenIsDeleted) {
    stm32f4discovery_vadG729_DW.autocorr.matlabCodegenIsDeleted = true;
    if (stm32f4discovery_vadG729_DW.autocorr.isInitialized == 1) {
      stm32f4discovery_vadG729_DW.autocorr.isInitialized = 2;
    }
  }

  if (!stm32f4discovery_vadG729_DW.levSolver1.matlabCodegenIsDeleted) {
    stm32f4discovery_vadG729_DW.levSolver1.matlabCodegenIsDeleted = true;
    if (stm32f4discovery_vadG729_DW.levSolver1.isInitialized == 1) {
      stm32f4discovery_vadG729_DW.levSolver1.isInitialized = 2;
    }
  }

  if (!stm32f4discovery_vadG729_DW.biquad.matlabCodegenIsDeleted) {
    stm32f4discovery_vadG729_DW.biquad.matlabCodegenIsDeleted = true;
    if (stm32f4discovery_vadG729_DW.biquad.isInitialized == 1) {
      stm32f4discovery_vadG729_DW.biquad.isInitialized = 2;
    }
  }

  /* End of Terminate for MATLAB Function: '<Root>/VAD_G729' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
