/*

 $Id: eintcalPrint.h,v 1.11 2007/04/30 23:53:50 garrett Exp $

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

#ifndef _EINTCALPRINT
#define _EINTCALPRINT

Real  eintcalPrint( NonbondParam * const nonbondlist,
                     const EnergyTables  *ad_energy_tables,
                     const Real tcoord[MAX_ATOMS][SPACE],
                     const int   Nnb,
                     const Boole B_calcIntElec,
                     const Boole B_include_1_4_interactions,
                     const Real scale_1_4,
                     const Real qsp_abs_charge[MAX_ATOMS],
                     const ParameterEntry parameterArray[MAX_MAPS],
                     const Boole B_use_non_bond_cutoff,
                     const Boole B_have_flexible_residues);  // if the receptor has flexibile residues, this will be set to TRUE

#endif

/* EOF */
