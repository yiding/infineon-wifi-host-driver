/*
 * Copyright (c) 2019, Cypress Semiconductor Corporation, All Rights Reserved
 * SPDX-License-Identifier: LicenseRef-PBL
 *
 * This file and the related binary are licensed under the
 * Permissive Binary License, Version 1.0 (the "License");
 * you may not use these files except in compliance with the License.
 *
 * You may obtain a copy of the License here:
 * LICENSE-permissive-binary-license-1.0.txt and at
 * https://www.mbed.com/licenses/PBL-1.0
 *
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "wiced_resource.h"

#ifndef WLAN_MFG_FIRMWARE
#if defined(CY_STORAGE_WIFI_DATA)
CY_SECTION_WHD(CY_STORAGE_WIFI_DATA) __attribute__( (used) )
#endif
const unsigned char wifi_firmware_clm_blob_data[4752] =
{
    66, 76, 79, 66, 60, 0, 0, 0, 100, 249, 3, 17, 1, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 80, 18, 0, 0, 73, 54, 192, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 18, 0, 0, 4, 0, 0, 0, 160, 176, 229, 226, 0, 0, 0,
    0, 67, 76, 77, 32, 68, 65, 84, 65, 0, 0, 12, 0, 2, 0, 57, 46, 49, 48,
    46, 51, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 46, 50, 57, 46,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 67, 108, 109, 73, 109, 112,
    111, 114, 116, 58, 32, 49, 46, 51, 54, 46, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 114, 111, 97, 100, 99, 111, 109, 45, 48, 46, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 10, 1, 11, 1, 12, 1, 13, 1, 14,
    2, 2, 2, 10, 2, 11, 2, 12, 3, 9, 10, 10, 11, 11, 12, 12, 12, 13, 12,
    14, 13, 13, 14, 14, 81, 49, 0, 81, 50, 0, 0, 0, 208, 17, 0, 0, 44, 4,
    0, 0, 104, 0, 0, 0, 84, 1, 0, 0, 52, 4, 0, 0, 0, 0, 0, 0, 152, 2, 0,
    0, 0, 0, 0, 0, 221, 16, 0, 0, 0, 0, 0, 0, 76, 1, 0, 0, 72, 18, 0, 0,
    32, 18, 0, 0, 127, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 17, 0,
    0, 0, 0, 0, 0, 126, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 1, 0, 0, 59, 4, 0, 0, 1, 14, 1, 15, 69, 48, 0, 88, 65, 0,
    88, 85, 0, 65, 69, 1, 65, 82, 1, 65, 84, 1, 65, 85, 2, 66, 69, 1, 66,
    71, 1, 66, 78, 1, 67, 65, 2, 67, 72, 1, 67, 89, 1, 67, 90, 1, 68, 69,
    3, 68, 75, 1, 69, 69, 1, 69, 83, 1, 70, 73, 1, 70, 82, 1, 71, 66, 1,
    71, 82, 1, 72, 82, 1, 72, 85, 1, 73, 68, 5, 73, 69, 1, 73, 83, 1, 73,
    84, 1, 74, 80, 3, 75, 82, 4, 75, 87, 1, 76, 73, 1, 76, 84, 1, 76, 85,
    1, 76, 86, 1, 77, 65, 1, 77, 84, 1, 77, 88, 1, 78, 76, 1, 78, 79, 1,
    80, 76, 1, 80, 84, 1, 80, 89, 1, 82, 79, 1, 82, 85, 5, 83, 69, 1, 83,
    73, 1, 83, 75, 1, 84, 82, 7, 84, 87, 2, 85, 83, 26, 65, 69, 1, 65, 82,
    1, 65, 84, 1, 65, 85, 2, 66, 69, 1, 66, 71, 1, 66, 78, 1, 67, 65, 2,
    67, 72, 1, 67, 89, 1, 67, 90, 1, 68, 69, 3, 68, 75, 1, 69, 69, 1, 69,
    83, 1, 70, 73, 1, 70, 82, 1, 71, 66, 1, 71, 82, 1, 72, 82, 1, 72, 85,
    1, 73, 68, 5, 73, 69, 1, 73, 83, 1, 73, 84, 1, 74, 80, 3, 75, 82, 4,
    75, 87, 1, 76, 73, 1, 76, 84, 1, 76, 85, 1, 76, 86, 1, 77, 65, 1, 77,
    84, 1, 77, 88, 1, 78, 76, 1, 78, 79, 1, 80, 76, 1, 80, 84, 1, 80, 89,
    1, 82, 79, 1, 82, 85, 5, 83, 69, 1, 83, 73, 1, 83, 75, 1, 84, 87, 2,
    85, 83, 25, 50, 48, 50, 50, 45, 48, 55, 45, 50, 55, 32, 50, 49, 58,
    48, 50, 58, 53, 51, 0, 65, 85, 2, 74, 80, 1, 1, 0, 255, 1, 30, 2, 0,
    3, 76, 1, 3, 76, 2, 1, 66, 12, 3, 1, 0, 255, 1, 30, 2, 0, 7, 72, 0,
    1, 58, 0, 3, 68, 6, 3, 74, 8, 1, 74, 10, 3, 68, 11, 3, 66, 12, 3, 1,
    0, 255, 1, 30, 2, 0, 2, 64, 2, 1, 56, 2, 3, 1, 0, 255, 1, 30, 2, 0,
    5, 72, 0, 1, 76, 1, 3, 76, 7, 1, 72, 12, 1, 66, 12, 3, 1, 0, 255, 1,
    30, 2, 0, 4, 58, 0, 3, 68, 2, 1, 66, 7, 3, 58, 12, 3, 1, 0, 255, 1,
    30, 2, 0, 5, 92, 0, 1, 86, 0, 3, 126, 7, 0, 92, 12, 1, 86, 12, 3, 1,
    0, 255, 1, 30, 2, 0, 5, 70, 0, 3, 80, 1, 1, 80, 7, 3, 76, 12, 1, 72,
    12, 3, 2, 4, 255, 1, 20, 4, 2, 1, 76, 4, 0, 2, 0, 0, 1, 20, 4, 2, 1,
    76, 4, 1, 2, 0, 255, 1, 20, 4, 0, 1, 76, 4, 0, 3, 0, 1, 1, 20, 5, 2,
    5, 76, 1, 3, 76, 4, 1, 70, 12, 3, 76, 14, 3, 54, 17, 1, 3, 0, 1, 1,
    20, 5, 0, 6, 60, 0, 3, 68, 2, 1, 64, 8, 3, 48, 14, 1, 44, 14, 3, 64,
    17, 1, 3, 0, 1, 1, 20, 5, 0, 3, 64, 3, 3, 64, 5, 1, 46, 16, 3, 2, 0,
    0, 1, 20, 4, 0, 3, 64, 2, 0, 48, 14, 1, 44, 14, 3, 3, 0, 1, 1, 20, 5,
    0, 6, 62, 0, 3, 66, 4, 1, 66, 7, 3, 62, 12, 3, 66, 14, 3, 42, 17, 1,
    3, 0, 255, 1, 20, 5, 2, 2, 84, 4, 3, 78, 5, 1, 1, 0, 255, 1, 20, 2,
    0, 2, 69, 2, 1, 79, 2, 3, 3, 0, 255, 1, 30, 5, 0, 1, 120, 5, 0, 0, 0,
    255, 0, 0, 0, 2, 0, 255, 1, 23, 4, 2, 1, 92, 4, 0, 2, 0, 255, 1, 36,
    4, 2, 1, 100, 4, 0, 2, 4, 0, 1, 20, 4, 2, 1, 76, 4, 0, 1, 0, 255, 1,
    20, 2, 2, 1, 76, 2, 0, 2, 0, 255, 1, 20, 4, 4, 3, 56, 0, 3, 64, 9, 3,
    56, 16, 3, 2, 1, 76, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 1,
    4, 1, 5, 35, 97, 0, 17, 255, 19, 255, 204, 0, 35, 110, 0, 18, 255, 255,
    255, 252, 0, 35, 114, 0, 17, 255, 19, 255, 204, 0, 48, 65, 0, 7, 255,
    255, 255, 252, 16, 48, 66, 0, 0, 255, 0, 255, 204, 16, 48, 67, 0, 7,
    255, 13, 255, 204, 16, 65, 67, 0, 18, 255, 255, 255, 252, 16, 65, 68,
    0, 7, 255, 14, 255, 204, 48, 65, 69, 0, 7, 255, 6, 255, 204, 32, 65,
    69, 1, 7, 255, 6, 255, 204, 32, 65, 70, 0, 7, 255, 14, 255, 204, 48,
    65, 71, 0, 7, 255, 6, 255, 204, 32, 65, 73, 0, 6, 255, 5, 255, 204,
    16, 65, 76, 0, 7, 255, 6, 255, 204, 32, 65, 77, 0, 7, 255, 13, 255,
    204, 0, 65, 78, 0, 7, 255, 6, 255, 204, 32, 65, 79, 0, 7, 255, 255,
    255, 252, 16, 65, 81, 0, 18, 255, 255, 255, 252, 16, 65, 82, 0, 7, 255,
    6, 255, 204, 0, 65, 82, 1, 7, 255, 6, 255, 204, 0, 65, 83, 0, 6, 255,
    5, 255, 204, 16, 65, 84, 0, 7, 255, 6, 255, 204, 32, 65, 84, 1, 7, 255,
    6, 255, 204, 32, 65, 85, 0, 20, 255, 24, 255, 204, 0, 65, 85, 2, 20,
    255, 23, 255, 204, 0, 65, 87, 0, 7, 255, 6, 255, 204, 0, 65, 88, 0,
    18, 255, 255, 255, 252, 16, 65, 90, 0, 7, 255, 6, 255, 204, 32, 66,
    65, 0, 7, 255, 6, 255, 204, 32, 66, 66, 0, 7, 255, 13, 255, 204, 16,
    66, 68, 0, 7, 255, 6, 255, 204, 0, 66, 69, 0, 7, 255, 6, 255, 204, 32,
    66, 69, 1, 7, 255, 6, 255, 204, 32, 66, 70, 0, 7, 255, 14, 255, 204,
    16, 66, 71, 0, 7, 255, 6, 255, 204, 32, 66, 71, 1, 7, 255, 6, 255, 204,
    32, 66, 72, 0, 7, 255, 6, 255, 204, 0, 66, 73, 0, 7, 255, 14, 255, 204,
    16, 66, 74, 0, 7, 255, 14, 255, 204, 48, 66, 76, 0, 18, 255, 255, 255,
    252, 16, 66, 77, 0, 6, 255, 5, 255, 204, 16, 66, 78, 0, 7, 255, 255,
    255, 252, 0, 66, 78, 1, 19, 255, 22, 255, 204, 0, 66, 79, 0, 7, 255,
    13, 255, 204, 32, 66, 81, 0, 18, 255, 255, 255, 252, 16, 66, 82, 0,
    7, 255, 6, 255, 204, 32, 66, 83, 0, 20, 255, 23, 255, 204, 0, 66, 84,
    0, 7, 255, 13, 255, 204, 48, 66, 86, 0, 18, 255, 255, 255, 252, 16,
    66, 87, 0, 7, 255, 13, 255, 204, 48, 66, 89, 0, 7, 255, 255, 255, 252,
    0, 66, 90, 0, 7, 255, 13, 255, 204, 16, 67, 65, 0, 0, 255, 0, 255, 204,
    0, 67, 65, 2, 6, 255, 5, 255, 204, 16, 67, 67, 0, 18, 255, 255, 255,
    252, 16, 67, 68, 0, 7, 255, 14, 255, 204, 48, 67, 70, 0, 7, 255, 14,
    255, 204, 16, 67, 71, 0, 7, 255, 14, 255, 204, 48, 67, 72, 0, 7, 255,
    6, 255, 204, 32, 67, 72, 1, 7, 255, 6, 255, 204, 32, 67, 73, 0, 7, 255,
    14, 255, 204, 48, 67, 75, 0, 7, 255, 13, 255, 204, 16, 67, 76, 0, 7,
    255, 6, 255, 204, 0, 67, 77, 0, 7, 255, 14, 255, 204, 16, 67, 78, 0,
    23, 255, 26, 255, 204, 0, 67, 79, 0, 7, 255, 6, 255, 204, 32, 67, 80,
    0, 18, 255, 255, 255, 252, 16, 67, 82, 0, 7, 255, 6, 255, 204, 32, 67,
    85, 0, 7, 255, 14, 255, 204, 48, 67, 86, 0, 7, 255, 14, 255, 204, 16,
    67, 87, 0, 18, 255, 255, 255, 252, 16, 67, 88, 0, 20, 255, 23, 255,
    204, 16, 67, 89, 0, 7, 255, 6, 255, 204, 32, 67, 89, 1, 7, 255, 6, 255,
    204, 32, 67, 90, 0, 7, 255, 6, 255, 204, 32, 67, 90, 1, 7, 255, 6, 255,
    204, 32, 68, 69, 0, 7, 255, 6, 255, 204, 32, 68, 69, 3, 7, 255, 6, 255,
    204, 32, 68, 74, 0, 7, 255, 255, 255, 252, 16, 68, 75, 0, 7, 255, 6,
    255, 204, 32, 68, 75, 1, 7, 255, 6, 255, 204, 32, 68, 77, 0, 7, 255,
    13, 255, 204, 16, 68, 79, 0, 7, 255, 13, 255, 204, 16, 68, 90, 0, 7,
    255, 6, 255, 204, 32, 69, 48, 0, 7, 255, 6, 255, 204, 32, 69, 67, 0,
    7, 255, 6, 255, 204, 32, 69, 69, 0, 7, 255, 6, 255, 204, 32, 69, 69,
    1, 7, 255, 6, 255, 204, 32, 69, 71, 0, 7, 255, 21, 255, 204, 0, 69,
    72, 0, 7, 255, 13, 255, 204, 16, 69, 82, 0, 7, 255, 255, 255, 252, 16,
    69, 83, 0, 7, 255, 6, 255, 204, 32, 69, 83, 1, 7, 255, 6, 255, 204,
    32, 69, 84, 0, 7, 255, 6, 255, 204, 0, 70, 73, 0, 7, 255, 6, 255, 204,
    32, 70, 73, 1, 7, 255, 6, 255, 204, 32, 70, 74, 0, 7, 255, 13, 255,
    204, 16, 70, 75, 0, 7, 255, 14, 255, 204, 16, 70, 77, 0, 6, 255, 5,
    255, 204, 16, 70, 79, 0, 7, 255, 14, 255, 204, 48, 70, 82, 0, 7, 255,
    6, 255, 204, 32, 70, 82, 1, 7, 255, 6, 255, 204, 32, 71, 65, 0, 7, 255,
    14, 255, 204, 16, 71, 66, 0, 7, 255, 6, 255, 204, 32, 71, 66, 1, 7,
    255, 6, 255, 204, 32, 71, 68, 0, 7, 255, 6, 255, 204, 0, 71, 69, 0,
    7, 255, 14, 255, 204, 48, 71, 70, 0, 7, 255, 6, 255, 204, 0, 71, 71,
    0, 7, 255, 14, 255, 204, 16, 71, 72, 0, 7, 255, 14, 255, 204, 48, 71,
    73, 0, 7, 255, 14, 255, 204, 16, 71, 76, 0, 18, 255, 255, 255, 252,
    16, 71, 77, 0, 7, 255, 14, 255, 204, 16, 71, 78, 0, 7, 255, 14, 255,
    204, 48, 71, 80, 0, 7, 255, 6, 255, 204, 0, 71, 81, 0, 7, 255, 14, 255,
    204, 16, 71, 82, 0, 7, 255, 6, 255, 204, 32, 71, 82, 1, 7, 255, 6, 255,
    204, 32, 71, 83, 0, 18, 255, 255, 255, 252, 16, 71, 84, 0, 7, 255, 12,
    255, 204, 16, 71, 85, 0, 0, 255, 0, 255, 204, 0, 71, 87, 0, 7, 255,
    14, 255, 204, 16, 71, 89, 0, 7, 255, 13, 255, 204, 16, 72, 75, 0, 20,
    255, 24, 255, 204, 0, 72, 77, 0, 18, 255, 255, 255, 252, 16, 72, 78,
    0, 7, 255, 13, 255, 204, 0, 72, 82, 0, 7, 255, 6, 255, 204, 32, 72,
    82, 1, 7, 255, 6, 255, 204, 32, 72, 84, 0, 7, 255, 13, 255, 204, 0,
    72, 85, 0, 7, 255, 6, 255, 204, 32, 72, 85, 1, 7, 255, 6, 255, 204,
    32, 73, 68, 0, 7, 255, 6, 255, 204, 0, 73, 68, 5, 7, 255, 14, 255, 204,
    16, 73, 69, 0, 7, 255, 6, 255, 204, 32, 73, 69, 1, 7, 255, 6, 255, 204,
    32, 73, 76, 0, 7, 255, 6, 255, 204, 32, 73, 77, 0, 7, 255, 14, 255,
    204, 16, 73, 78, 0, 19, 255, 22, 255, 204, 32, 73, 79, 0, 7, 255, 14,
    255, 204, 16, 73, 81, 0, 7, 255, 14, 255, 204, 16, 73, 82, 0, 7, 255,
    14, 255, 204, 48, 73, 83, 0, 7, 255, 6, 255, 204, 32, 73, 83, 1, 7,
    255, 6, 255, 204, 32, 73, 84, 0, 7, 255, 6, 255, 204, 32, 73, 84, 1,
    7, 255, 6, 255, 204, 32, 74, 48, 0, 7, 255, 16, 255, 204, 0, 74, 49,
    0, 15, 255, 255, 255, 252, 0, 74, 50, 0, 15, 255, 255, 255, 252, 0,
    74, 51, 0, 15, 255, 255, 255, 252, 0, 74, 52, 0, 15, 255, 255, 255,
    252, 0, 74, 53, 0, 15, 255, 255, 255, 252, 0, 74, 54, 0, 15, 255, 255,
    255, 252, 0, 74, 55, 0, 15, 255, 255, 255, 252, 0, 74, 56, 0, 15, 255,
    255, 255, 252, 0, 74, 57, 0, 7, 255, 16, 255, 204, 0, 74, 69, 0, 7,
    255, 14, 255, 204, 16, 74, 77, 0, 7, 255, 14, 255, 204, 16, 74, 79,
    0, 7, 255, 6, 255, 204, 32, 74, 80, 0, 15, 255, 17, 255, 204, 0, 74,
    80, 1, 15, 255, 16, 255, 204, 0, 74, 80, 3, 15, 255, 16, 255, 204, 0,
    74, 80, 88, 16, 255, 18, 255, 204, 0, 75, 65, 0, 22, 255, 25, 255, 204,
    0, 75, 67, 0, 22, 255, 25, 255, 204, 0, 75, 68, 0, 7, 255, 6, 255, 204,
    0, 75, 69, 0, 7, 255, 6, 255, 204, 32, 75, 71, 0, 7, 255, 14, 255, 204,
    16, 75, 72, 0, 7, 255, 6, 255, 204, 0, 75, 73, 0, 20, 255, 23, 255,
    204, 16, 75, 75, 0, 22, 255, 25, 255, 204, 0, 75, 77, 0, 7, 255, 14,
    255, 204, 16, 75, 78, 0, 7, 255, 13, 255, 204, 16, 75, 80, 0, 18, 255,
    255, 255, 252, 16, 75, 82, 0, 18, 255, 20, 255, 204, 0, 75, 82, 4, 23,
    255, 26, 255, 204, 16, 75, 87, 0, 7, 255, 6, 255, 204, 32, 75, 87, 1,
    7, 255, 6, 255, 204, 32, 75, 88, 0, 7, 255, 6, 255, 204, 0, 75, 89,
    0, 8, 255, 8, 255, 204, 0, 75, 90, 0, 7, 255, 13, 255, 204, 0, 76, 65,
    0, 7, 255, 6, 255, 204, 0, 76, 66, 0, 7, 255, 6, 255, 204, 32, 76, 67,
    0, 7, 255, 13, 255, 204, 16, 76, 73, 0, 7, 255, 6, 255, 204, 0, 76,
    73, 1, 7, 255, 6, 255, 204, 0, 76, 75, 0, 19, 255, 22, 255, 204, 0,
    76, 82, 0, 7, 255, 21, 255, 204, 16, 76, 83, 0, 7, 255, 6, 255, 204,
    0, 76, 84, 0, 7, 255, 6, 255, 204, 32, 76, 84, 1, 7, 255, 6, 255, 204,
    32, 76, 85, 0, 7, 255, 6, 255, 204, 32, 76, 85, 1, 7, 255, 6, 255, 204,
    32, 76, 86, 0, 7, 255, 6, 255, 204, 32, 76, 86, 1, 7, 255, 6, 255, 204,
    32, 76, 89, 0, 7, 255, 15, 255, 204, 16, 77, 65, 0, 7, 255, 21, 255,
    204, 32, 77, 65, 1, 7, 255, 21, 255, 204, 32, 77, 67, 0, 7, 255, 6,
    255, 204, 0, 77, 68, 0, 7, 255, 6, 255, 204, 32, 77, 69, 0, 7, 255,
    6, 255, 204, 32, 77, 70, 0, 7, 255, 13, 255, 204, 16, 77, 71, 0, 7,
    255, 14, 255, 204, 48, 77, 72, 0, 18, 255, 255, 255, 252, 16, 77, 75,
    0, 7, 255, 6, 255, 204, 32, 77, 76, 0, 7, 255, 14, 255, 204, 16, 77,
    77, 0, 7, 255, 14, 255, 204, 16, 77, 78, 0, 7, 255, 12, 255, 204, 32,
    77, 79, 0, 7, 255, 6, 255, 204, 0, 77, 80, 0, 6, 255, 5, 255, 204, 16,
    77, 81, 0, 7, 255, 6, 255, 204, 0, 77, 82, 0, 7, 255, 6, 255, 204, 0,
    77, 83, 0, 7, 255, 14, 255, 204, 48, 77, 84, 0, 7, 255, 6, 255, 204,
    32, 77, 84, 1, 7, 255, 6, 255, 204, 32, 77, 85, 0, 7, 255, 6, 255, 204,
    32, 77, 86, 0, 7, 255, 6, 255, 204, 32, 77, 87, 0, 7, 255, 6, 255, 204,
    32, 77, 88, 0, 7, 255, 6, 255, 204, 0, 77, 88, 1, 7, 255, 6, 255, 204,
    0, 77, 89, 0, 19, 255, 22, 255, 204, 0, 77, 90, 0, 7, 255, 13, 255,
    204, 16, 78, 65, 0, 7, 255, 13, 255, 204, 16, 78, 67, 0, 7, 255, 14,
    255, 204, 16, 78, 69, 0, 7, 255, 14, 255, 204, 16, 78, 70, 0, 7, 255,
    12, 255, 204, 0, 78, 71, 0, 7, 255, 14, 255, 204, 48, 78, 73, 0, 7,
    255, 6, 255, 204, 32, 78, 76, 0, 7, 255, 6, 255, 204, 32, 78, 76, 1,
    7, 255, 6, 255, 204, 32, 78, 79, 0, 7, 255, 6, 255, 204, 32, 78, 79,
    1, 7, 255, 6, 255, 204, 32, 78, 80, 0, 19, 255, 22, 255, 204, 0, 78,
    82, 0, 7, 255, 14, 255, 204, 16, 78, 85, 0, 7, 255, 255, 255, 252, 16,
    78, 90, 0, 7, 255, 6, 255, 204, 32, 79, 77, 0, 7, 255, 6, 255, 204,
    32, 80, 65, 0, 19, 255, 22, 255, 204, 32, 80, 69, 0, 7, 255, 6, 255,
    204, 32, 80, 70, 0, 7, 255, 14, 255, 204, 16, 80, 71, 0, 7, 255, 6,
    255, 204, 0, 80, 72, 0, 7, 255, 6, 255, 204, 32, 80, 75, 0, 7, 255,
    12, 255, 204, 32, 80, 76, 0, 7, 255, 6, 255, 204, 32, 80, 76, 1, 7,
    255, 6, 255, 204, 32, 80, 77, 0, 7, 255, 14, 255, 204, 16, 80, 78, 0,
    18, 255, 255, 255, 252, 16, 80, 82, 0, 0, 255, 0, 255, 204, 0, 80, 83,
    0, 18, 255, 255, 255, 252, 0, 80, 84, 0, 7, 255, 6, 255, 204, 32, 80,
    84, 1, 7, 255, 6, 255, 204, 32, 80, 87, 0, 7, 255, 13, 255, 204, 16,
    80, 89, 0, 7, 255, 6, 255, 204, 0, 80, 89, 1, 7, 255, 6, 255, 204, 0,
    81, 49, 0, 2, 255, 2, 255, 204, 0, 81, 50, 0, 0, 255, 0, 255, 204, 0,
    81, 65, 0, 7, 255, 14, 255, 204, 48, 82, 69, 0, 7, 255, 6, 255, 204,
    0, 82, 79, 0, 7, 255, 6, 255, 204, 32, 82, 79, 1, 7, 255, 6, 255, 204,
    32, 82, 83, 0, 7, 255, 6, 255, 204, 32, 82, 85, 0, 7, 255, 255, 255,
    252, 0, 82, 85, 5, 7, 255, 12, 255, 204, 0, 82, 87, 0, 7, 255, 14, 255,
    204, 48, 83, 65, 0, 7, 255, 6, 255, 204, 32, 83, 66, 0, 7, 255, 255,
    255, 252, 16, 83, 67, 0, 7, 255, 13, 255, 204, 16, 83, 68, 0, 7, 255,
    14, 255, 204, 48, 83, 69, 0, 7, 255, 6, 255, 204, 32, 83, 69, 1, 7,
    255, 6, 255, 204, 32, 83, 71, 0, 19, 255, 22, 255, 204, 32, 83, 72,
    0, 18, 255, 255, 255, 252, 16, 83, 73, 0, 7, 255, 6, 255, 204, 32, 83,
    73, 1, 7, 255, 6, 255, 204, 32, 83, 74, 0, 18, 255, 255, 255, 252, 16,
    83, 75, 0, 7, 255, 6, 255, 204, 32, 83, 75, 1, 7, 255, 6, 255, 204,
    32, 83, 76, 0, 7, 255, 14, 255, 204, 16, 83, 77, 0, 7, 255, 14, 255,
    204, 16, 83, 78, 0, 7, 255, 6, 255, 204, 32, 83, 79, 0, 7, 255, 255,
    255, 252, 16, 83, 82, 0, 7, 255, 14, 255, 204, 16, 83, 84, 0, 7, 255,
    14, 255, 204, 16, 83, 86, 0, 7, 255, 12, 255, 204, 32, 83, 88, 0, 18,
    255, 255, 255, 252, 16, 83, 89, 0, 18, 255, 255, 255, 252, 16, 83, 90,
    0, 7, 255, 14, 255, 204, 16, 84, 65, 0, 18, 255, 255, 255, 252, 16,
    84, 67, 0, 7, 255, 14, 255, 204, 16, 84, 68, 0, 7, 255, 14, 255, 204,
    16, 84, 70, 0, 7, 255, 14, 255, 204, 16, 84, 71, 0, 7, 255, 14, 255,
    204, 16, 84, 72, 0, 7, 255, 6, 255, 204, 32, 84, 74, 0, 7, 255, 14,
    255, 204, 16, 84, 75, 0, 18, 255, 255, 255, 252, 16, 84, 76, 0, 7, 255,
    14, 255, 204, 48, 84, 77, 0, 7, 255, 14, 255, 204, 16, 84, 78, 0, 7,
    255, 6, 255, 204, 32, 84, 79, 0, 7, 255, 255, 255, 252, 16, 84, 82,
    0, 7, 255, 6, 255, 204, 32, 84, 82, 7, 7, 255, 14, 255, 204, 48, 84,
    84, 0, 7, 255, 6, 255, 204, 32, 84, 86, 0, 7, 255, 255, 255, 252, 16,
    84, 87, 0, 0, 255, 0, 255, 204, 0, 84, 87, 2, 0, 255, 0, 255, 204, 0,
    84, 90, 0, 7, 255, 14, 255, 204, 16, 85, 65, 0, 7, 255, 255, 255, 252,
    0, 85, 71, 0, 7, 255, 6, 255, 204, 32, 85, 77, 0, 0, 255, 0, 255, 204,
    0, 85, 83, 0, 5, 255, 4, 255, 204, 0, 85, 83, 25, 12, 255, 10, 255,
    204, 0, 85, 83, 26, 4, 255, 1, 255, 204, 0, 85, 89, 0, 20, 255, 23,
    255, 204, 0, 85, 90, 0, 7, 255, 14, 255, 204, 16, 86, 65, 0, 7, 255,
    6, 255, 204, 0, 86, 67, 0, 7, 255, 13, 255, 204, 16, 86, 69, 0, 7, 255,
    6, 255, 204, 0, 86, 71, 0, 7, 255, 6, 255, 204, 0, 86, 73, 0, 0, 255,
    0, 255, 204, 0, 86, 78, 0, 7, 255, 6, 255, 204, 0, 86, 85, 0, 7, 255,
    13, 255, 204, 16, 87, 70, 0, 7, 255, 13, 255, 204, 16, 87, 83, 0, 7,
    255, 12, 255, 204, 16, 88, 48, 0, 3, 255, 0, 255, 204, 0, 88, 49, 0,
    7, 255, 6, 255, 204, 0, 88, 50, 0, 21, 255, 6, 255, 204, 0, 88, 51,
    0, 7, 255, 6, 255, 204, 32, 88, 65, 0, 7, 255, 255, 255, 252, 0, 88,
    66, 0, 0, 255, 255, 255, 252, 0, 88, 82, 0, 1, 255, 3, 255, 204, 0,
    88, 83, 0, 13, 255, 11, 255, 204, 32, 88, 84, 0, 12, 255, 10, 255, 204,
    32, 88, 85, 0, 9, 255, 7, 255, 204, 32, 88, 86, 0, 11, 255, 9, 255,
    204, 32, 88, 87, 0, 22, 255, 25, 255, 204, 32, 88, 88, 0, 10, 255, 255,
    255, 252, 32, 88, 89, 0, 7, 255, 6, 255, 204, 32, 88, 90, 0, 14, 255,
    255, 255, 252, 32, 89, 49, 0, 0, 255, 255, 255, 252, 16, 89, 50, 0,
    0, 255, 255, 255, 252, 16, 89, 51, 0, 0, 255, 255, 255, 252, 16, 89,
    52, 0, 0, 255, 255, 255, 252, 16, 89, 53, 0, 0, 255, 255, 255, 252,
    16, 89, 54, 0, 0, 255, 255, 255, 252, 16, 89, 55, 0, 0, 255, 255, 255,
    252, 16, 89, 69, 0, 7, 255, 13, 255, 204, 16, 89, 84, 0, 7, 255, 6,
    255, 204, 0, 89, 89, 0, 18, 255, 255, 255, 252, 0, 90, 49, 0, 18, 255,
    255, 255, 252, 16, 90, 50, 0, 18, 255, 255, 255, 252, 16, 90, 51, 0,
    18, 255, 255, 255, 252, 16, 90, 52, 0, 18, 255, 255, 255, 252, 16, 90,
    53, 0, 18, 255, 255, 255, 252, 16, 90, 54, 0, 18, 255, 255, 255, 252,
    16, 90, 55, 0, 18, 255, 255, 255, 252, 16, 90, 56, 0, 18, 255, 255,
    255, 252, 16, 90, 57, 0, 18, 255, 255, 255, 252, 16, 90, 65, 0, 7, 255,
    6, 255, 204, 32, 90, 77, 0, 19, 255, 22, 255, 204, 0, 90, 87, 0, 7,
    255, 14, 255, 204, 48, 1, 14, 1, 0, 5, 76, 0, 2, 76, 6, 2, 76, 10, 2,
    76, 11, 2, 66, 12, 2, 0, 3, 58, 0, 2, 66, 7, 2, 58, 12, 2, 0, 1, 56,
    2, 2, 0, 5, 58, 0, 2, 68, 6, 2, 74, 10, 2, 68, 11, 2, 66, 12, 2, 0,
    3, 86, 0, 2, 126, 7, 2, 86, 12, 2, 0, 5, 70, 0, 2, 80, 6, 2, 80, 10,
    2, 80, 11, 2, 72, 12, 2, 0, 1, 64, 4, 2, 0, 1, 76, 4, 2, 0, 1, 64, 4,
    2, 0, 4, 60, 0, 2, 64, 8, 2, 44, 13, 2, 44, 16, 2, 0, 2, 64, 3, 2, 46,
    16, 2, 0, 2, 64, 2, 2, 44, 14, 2, 2, 1, 76, 4, 2, 2, 1, 76, 4, 2, 2,
    1, 76, 4, 2, 2, 1, 76, 4, 2, 0, 1, 64, 4, 2, 2, 1, 84, 4, 2, 0, 1, 79,
    2, 2, 0, 2, 120, 4, 2, 120, 17, 2, 0, 0, 0, 1, 64, 4, 2, 0, 1, 80, 4,
    2, 0, 1, 88, 4, 2, 2, 1, 100, 4, 2, 0, 1, 64, 2, 2, 0, 3, 56, 0, 2,
    64, 9, 2, 56, 16, 2, 0, 0, 0, 88, 65, 0, 0, 2, 0, 0, 0, 146, 2, 0, 0,
    88, 84, 0, 0, 47, 0, 0, 0, 241, 1, 0, 0, 88, 86, 0, 0, 48, 0, 0, 0,
    97, 1, 0, 0, 1, 0, 0, 0, 218, 16, 0, 0, 68, 69, 0, 0, 3, 0, 0, 0, 88,
    1, 0, 0, 74, 80, 0, 0, 10, 0, 0, 0, 40, 18, 0, 0, 85, 83, 0, 0, 2, 0,
    0, 0, 140, 0, 0, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 4, 0,
    1, 2, 3, 8, 12, 13, 14, 15, 16, 17, 18, 19, 8, 4, 5, 6, 7, 8, 9, 10,
    11, 3, 0, 0, 0, 172, 17, 0, 0, 74, 48, 0, 74, 49, 0, 74, 50, 0, 74,
    51, 0, 74, 52, 0, 74, 53, 0, 74, 54, 0, 74, 55, 0, 74, 56, 0, 74, 57,
    0, 0, 0, 3, 0, 0, 0, 216, 17, 0, 0, 175, 169, 0, 0
};
const resource_hnd_t wifi_firmware_clm_blob =
{ RESOURCE_IN_MEMORY, 4752, {.mem = { (const char *)wifi_firmware_clm_blob_data }}};
#endif /* !WLAN_MFG_FIRMWARE */

