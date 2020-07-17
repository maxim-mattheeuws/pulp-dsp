/* =====================================================================
 * Project:      PULP DSP Library
 * Title:        plp_mat_fill_I_stride_i32.c
 * Description:  16-bit integer strided identity matrix creation glue code
 *
 * $Date:        17. July 2020
 * $Revision:    V0
 *
 * Target Processor: PULP cores
 * ===================================================================== */
/*
 * Copyright (C) 2020 ETH Zurich and Ubiversity of Bologna. All rights reserved.
 *
 * Author: Tibor Schneider, ETH Zurich
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "plp_math.h"

/**
  @ingroup groupMatrixStride
 */

/**
  @addtogroup MatFillIStride
  @{
 */

/**
  @brief      Glue code for creating a strided 32-bit integers identity matrix
  @param[in]  N      Width and height of the matrix
  @param[in]  stride Stride of the matrix (elements between each row)
  @param[out] pDst   Points to the output matrix
  @return     none
 */

void plp_mat_fill_I_stride_i32(uint32_t N, uint32_t stride, int32_t *__restrict__ pDst) {

    if (rt_cluster_id() == ARCHI_FC_CID) {
        plp_mat_fill_I_stride_i32s_rv32im(N, stride, pDst);
    } else {
        plp_mat_fill_I_stride_i32s_xpulpv2(N, stride, pDst);
    }
}

/**
  @} end of MatFillIStride group
 */
