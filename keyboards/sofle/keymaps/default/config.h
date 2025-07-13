// Copyright 2024 Santosh Kumar (@santosh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// fix encoder
#define ENCODER_DIRECTION_FLIP
#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 4

// fix unwork right segment
#define SPLIT_USB_DETECT

#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 4
