/* broadcast.h
 * header field declarations, value_string def and true_false_string
 * definitions for broadcast manager messages
 * Copyright 2007 Don Newton <dnewton@cypresscom.net>
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef UNISTIM_BROADCAST_H
#define UNISTIM_BROADCAST_H

static int hf_broadcast_year;
static int hf_broadcast_month;
static int hf_broadcast_day;
static int hf_broadcast_hour;
static int hf_broadcast_minute;
static int hf_broadcast_second;
static int hf_broadcast_icon_state;
static int hf_broadcast_icon_cadence;


static const value_string broadcast_switch_msgs[]={
 {0x00,"Accessory Sync Update"},
 {0x01,"Logical Icon Update"},
 {0x02,"Time and Date Download"},
 {0x03,"Set Default Character Table Config"},
 {0xff,"Reserved"},
 {0,NULL}
};
#if 0
static const value_string broadcast_phone_msgs[]={
 {0xff,"Reserved"},
 {0,NULL}
};
#endif

static const value_string bcast_icon_states[]={
 {0x00,"I-Idle"},
 {0x01,"U-Idle"},
 {0x02,"I-Ring"},
 {0x03,"U-Ring"},
 {0x04,"I-Active"},
 {0x05,"U-Active"},
 {0x06,"I-Hold"},
 {0x07,"U-Hold"},
 {0x08,"I-Group Listen"},
 {0x09,"U-Group Listen"},
 {0x0A,"Feature Active"},
 {0x0B,"Feature Inactive"},
 {0x0C,"I-Hold Ringing"},
 {0x0D,"U-Hold Ringing"},
 {0x0E,"Active Audio"},
 {0x0F,"Hold Audio"},
 {0x10,"Home"},
 {0x11,"Business"},
 {0x12,"Extension Number"},
 {0x13,"Pager"},
 {0x14,"Voice"},
 {0x15,"Fax"},
 {0x16,"Email"},
 {0x17,"Wireless"},
 {0x18,"Internet Address"},
 {0x19,"Set-to-Set command"},
 {0x1A,"Secured"},
 {0x1B,"Trash Can"},
 {0x1C,"In Box"},
 {0x1D,"Out box"},
 {0x1E,"Video"},
 {0x1F,"Other/Misc"},
 {0,NULL}
};

static const value_string bcast_icon_cadence[]={
 {0x00,"Cadence off, On continuously"},
 {0x01,"Cadence on, Off continuously"},
 {0x02,"Flash, [1Hz]/[1/2]"},
 {0x03,"Flicker, [0.5Hz]/[13/16]"},
 {0x04,"Wink, [2Hz]/[3/4]"},
 {0x07,"Downloaded Cadence"},
 {0,NULL}
};

#endif

