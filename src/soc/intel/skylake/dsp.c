/*
 * This file is part of the coreboot project.
 *
 * Copyright 2016 Google Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <device/device.h>
#include <device/pci.h>
#include <device/pci_ids.h>
#include <soc/ramstage.h>

static struct device_operations dsp_dev_ops = {
	.read_resources		= &pci_dev_read_resources,
	.set_resources		= &pci_dev_set_resources,
	.enable_resources	= &pci_dev_enable_resources,
	.scan_bus		= &scan_static_bus,
	.ops_pci		= &soc_pci_ops,
};

static const struct pci_driver skylake_dsp __pci_driver = {
	.ops	= &dsp_dev_ops,
	.vendor	= PCI_VENDOR_ID_INTEL,
	.device = 0x9d70
};
