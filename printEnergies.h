/*

 $Id: printEnergies.h,v 1.8 2007/04/27 06:01:50 garrett Exp $

 AutoDock 

 Copyright (C) 1989-2007,  Garrett M. Morris, David S. Goodsell, Ruth Huey, Arthur J. Olson, 
 All Rights Reserved.

 AutoDock is a Trade Mark of The Scripps Research Institute.

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

 */

#ifndef PRINTENERGIES
#define PRINTENERGIES

#include "autocomm.h"
#include "constants.h"
#include "structs.h"

void printEnergies( EnergyBreakdown *eb,
                    char  *prefixString, 
                    int ligand_is_inhibitor,
                    Real emap_total,
                    Real elec_total,
                    Boole B_have_flexible_residues);

void printStateEnergies( EnergyBreakdown *eb,
			 char  *prefixString, 
			 int ligand_is_inhibitor);
#endif
