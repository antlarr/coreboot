#
# This file is part of the coreboot project.
#
# Copyright (C) 2015 Advanced Micro Devices, Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; version 2 of the License.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#

romstage-y += BiosCallOuts.c
romstage-y += OemCustomize.c

ramstage-y += BiosCallOuts.c
ramstage-y += OemCustomize.c
ramstage-$(CONFIG_HUDSON_IMC_FWM) += fchec.c
