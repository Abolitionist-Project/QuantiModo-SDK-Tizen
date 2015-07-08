#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiConnector.h"
#include "SamiConversionStep.h"
#include "SamiCorrelation.h"
#include "SamiJsonErrorResponse.h"
#include "SamiMeasurementSet.h"
#include "SamiMeasurement.h"
#include "SamiMeasurementRange.h"
#include "SamiMeasurementSource.h"
#include "SamiPairs.h"
#include "SamiPermission.h"
#include "SamiPostCorrelation.h"
#include "SamiUnit.h"
#include "SamiUnitCategory.h"
#include "SamiUser.h"
#include "SamiUserTokenRequest.h"
#include "SamiUserTokenSuccessfulResponse.h"
#include "SamiUserTokenFailedResponse.h"
#include "SamiUserTokenRequestInnerUserField.h"
#include "SamiUserTokenSuccessfulResponseInnerUserField.h"
#include "SamiValueObject.h"
#include "SamiVariable.h"
#include "SamiVariableCategory.h"
#include "SamiVariableUserSettings.h"
#include "SamiVariableNew.h"
#include "SamiVariablesNew.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiConnector", true)) {
      return new SamiConnector();
    }
    if(type.Equals(L"SamiConversionStep", true)) {
      return new SamiConversionStep();
    }
    if(type.Equals(L"SamiCorrelation", true)) {
      return new SamiCorrelation();
    }
    if(type.Equals(L"SamiJsonErrorResponse", true)) {
      return new SamiJsonErrorResponse();
    }
    if(type.Equals(L"SamiMeasurementSet", true)) {
      return new SamiMeasurementSet();
    }
    if(type.Equals(L"SamiMeasurement", true)) {
      return new SamiMeasurement();
    }
    if(type.Equals(L"SamiMeasurementRange", true)) {
      return new SamiMeasurementRange();
    }
    if(type.Equals(L"SamiMeasurementSource", true)) {
      return new SamiMeasurementSource();
    }
    if(type.Equals(L"SamiPairs", true)) {
      return new SamiPairs();
    }
    if(type.Equals(L"SamiPermission", true)) {
      return new SamiPermission();
    }
    if(type.Equals(L"SamiPostCorrelation", true)) {
      return new SamiPostCorrelation();
    }
    if(type.Equals(L"SamiUnit", true)) {
      return new SamiUnit();
    }
    if(type.Equals(L"SamiUnitCategory", true)) {
      return new SamiUnitCategory();
    }
    if(type.Equals(L"SamiUser", true)) {
      return new SamiUser();
    }
    if(type.Equals(L"SamiUserTokenRequest", true)) {
      return new SamiUserTokenRequest();
    }
    if(type.Equals(L"SamiUserTokenSuccessfulResponse", true)) {
      return new SamiUserTokenSuccessfulResponse();
    }
    if(type.Equals(L"SamiUserTokenFailedResponse", true)) {
      return new SamiUserTokenFailedResponse();
    }
    if(type.Equals(L"SamiUserTokenRequestInnerUserField", true)) {
      return new SamiUserTokenRequestInnerUserField();
    }
    if(type.Equals(L"SamiUserTokenSuccessfulResponseInnerUserField", true)) {
      return new SamiUserTokenSuccessfulResponseInnerUserField();
    }
    if(type.Equals(L"SamiValueObject", true)) {
      return new SamiValueObject();
    }
    if(type.Equals(L"SamiVariable", true)) {
      return new SamiVariable();
    }
    if(type.Equals(L"SamiVariableCategory", true)) {
      return new SamiVariableCategory();
    }
    if(type.Equals(L"SamiVariableUserSettings", true)) {
      return new SamiVariableUserSettings();
    }
    if(type.Equals(L"SamiVariableNew", true)) {
      return new SamiVariableNew();
    }
    if(type.Equals(L"SamiVariablesNew", true)) {
      return new SamiVariablesNew();
    }
    
    if(type.Equals(L"String", true)) {
      return new String();
    }
    if(type.Equals(L"Integer", true)) {
      return new Integer();
    }
    if(type.Equals(L"Long", true)) {
      return new Long();
    }
    if(type.Equals(L"DateTime", true)) {
      return new DateTime();
    }
    return null;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
