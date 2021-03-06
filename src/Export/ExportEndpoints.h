/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef EXPORT_ENDPOINTS_H
#define EXPORT_ENDPOINTS_H

#include <QString>

enum ExportEndpoints {
  EXPORT_ENDPOINTS_OMIT,
  EXPORT_ENDPOINTS_INCLUDE,
  EXPORT_ENDPOINTS_EXTRAPOLATE_PAST
};

extern QString exportEndpointsToString (ExportEndpoints exportEndpoints);

#endif // EXPORT_ENDPOINTS_H
