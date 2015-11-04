#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiMeasurementValue.h"
#include "SamiMeasurementPost.h"
#include "SamiAggregatedCorrelation.h"
#include "SamiConnection.h"
#include "SamiConnector.h"
#include "SamiCorrelation.h"
#include "SamiCredential.h"
#include "SamiMeasurement.h"
#include "SamiMeasurementExport.h"
#include "SamiSource.h"
#include "SamiUnit.h"
#include "SamiUnitCategory.h"
#include "SamiUnitConversion.h"
#include "SamiUpdate.h"
#include "SamiUserVariable.h"
#include "SamiVariable.h"
#include "SamiVariableCategory.h"
#include "SamiVariableUserSource.h"
#include "SamiVote.h"
#include "SamiInline_response_200.h"
#include "SamiInline_response_200_1.h"
#include "SamiInline_response_200_2.h"
#include "SamiInline_response_200_3.h"
#include "SamiInline_response_200_4.h"
#include "SamiInline_response_200_5.h"
#include "SamiInline_response_200_6.h"
#include "SamiInline_response_200_7.h"
#include "SamiInline_response_200_8.h"
#include "SamiInline_response_200_9.h"
#include "SamiInline_response_200_10.h"
#include "SamiInline_response_200_11.h"
#include "SamiInline_response_200_12.h"
#include "SamiInline_response_200_13.h"
#include "SamiInline_response_200_14.h"
#include "SamiInline_response_200_15.h"
#include "SamiInline_response_200_16.h"
#include "SamiInline_response_200_17.h"
#include "SamiInline_response_200_18.h"
#include "SamiInline_response_200_19.h"
#include "SamiInline_response_200_20.h"
#include "SamiInline_response_200_21.h"
#include "SamiInline_response_200_22.h"
#include "SamiInline_response_200_23.h"
#include "SamiInline_response_200_24.h"
#include "SamiInline_response_200_25.h"
#include "SamiInline_response_200_26.h"
#include "SamiInline_response_200_27.h"
#include "SamiInline_response_200_28.h"
#include "SamiInline_response_200_29.h"
#include "SamiInline_response_200_30.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiMeasurementValue", true)) {
      return new SamiMeasurementValue();
    }
    if(type.Equals(L"SamiMeasurementPost", true)) {
      return new SamiMeasurementPost();
    }
    if(type.Equals(L"SamiAggregatedCorrelation", true)) {
      return new SamiAggregatedCorrelation();
    }
    if(type.Equals(L"SamiConnection", true)) {
      return new SamiConnection();
    }
    if(type.Equals(L"SamiConnector", true)) {
      return new SamiConnector();
    }
    if(type.Equals(L"SamiCorrelation", true)) {
      return new SamiCorrelation();
    }
    if(type.Equals(L"SamiCredential", true)) {
      return new SamiCredential();
    }
    if(type.Equals(L"SamiMeasurement", true)) {
      return new SamiMeasurement();
    }
    if(type.Equals(L"SamiMeasurementExport", true)) {
      return new SamiMeasurementExport();
    }
    if(type.Equals(L"SamiSource", true)) {
      return new SamiSource();
    }
    if(type.Equals(L"SamiUnit", true)) {
      return new SamiUnit();
    }
    if(type.Equals(L"SamiUnitCategory", true)) {
      return new SamiUnitCategory();
    }
    if(type.Equals(L"SamiUnitConversion", true)) {
      return new SamiUnitConversion();
    }
    if(type.Equals(L"SamiUpdate", true)) {
      return new SamiUpdate();
    }
    if(type.Equals(L"SamiUserVariable", true)) {
      return new SamiUserVariable();
    }
    if(type.Equals(L"SamiVariable", true)) {
      return new SamiVariable();
    }
    if(type.Equals(L"SamiVariableCategory", true)) {
      return new SamiVariableCategory();
    }
    if(type.Equals(L"SamiVariableUserSource", true)) {
      return new SamiVariableUserSource();
    }
    if(type.Equals(L"SamiVote", true)) {
      return new SamiVote();
    }
    if(type.Equals(L"SamiInline_response_200", true)) {
      return new SamiInline_response_200();
    }
    if(type.Equals(L"SamiInline_response_200_1", true)) {
      return new SamiInline_response_200_1();
    }
    if(type.Equals(L"SamiInline_response_200_2", true)) {
      return new SamiInline_response_200_2();
    }
    if(type.Equals(L"SamiInline_response_200_3", true)) {
      return new SamiInline_response_200_3();
    }
    if(type.Equals(L"SamiInline_response_200_4", true)) {
      return new SamiInline_response_200_4();
    }
    if(type.Equals(L"SamiInline_response_200_5", true)) {
      return new SamiInline_response_200_5();
    }
    if(type.Equals(L"SamiInline_response_200_6", true)) {
      return new SamiInline_response_200_6();
    }
    if(type.Equals(L"SamiInline_response_200_7", true)) {
      return new SamiInline_response_200_7();
    }
    if(type.Equals(L"SamiInline_response_200_8", true)) {
      return new SamiInline_response_200_8();
    }
    if(type.Equals(L"SamiInline_response_200_9", true)) {
      return new SamiInline_response_200_9();
    }
    if(type.Equals(L"SamiInline_response_200_10", true)) {
      return new SamiInline_response_200_10();
    }
    if(type.Equals(L"SamiInline_response_200_11", true)) {
      return new SamiInline_response_200_11();
    }
    if(type.Equals(L"SamiInline_response_200_12", true)) {
      return new SamiInline_response_200_12();
    }
    if(type.Equals(L"SamiInline_response_200_13", true)) {
      return new SamiInline_response_200_13();
    }
    if(type.Equals(L"SamiInline_response_200_14", true)) {
      return new SamiInline_response_200_14();
    }
    if(type.Equals(L"SamiInline_response_200_15", true)) {
      return new SamiInline_response_200_15();
    }
    if(type.Equals(L"SamiInline_response_200_16", true)) {
      return new SamiInline_response_200_16();
    }
    if(type.Equals(L"SamiInline_response_200_17", true)) {
      return new SamiInline_response_200_17();
    }
    if(type.Equals(L"SamiInline_response_200_18", true)) {
      return new SamiInline_response_200_18();
    }
    if(type.Equals(L"SamiInline_response_200_19", true)) {
      return new SamiInline_response_200_19();
    }
    if(type.Equals(L"SamiInline_response_200_20", true)) {
      return new SamiInline_response_200_20();
    }
    if(type.Equals(L"SamiInline_response_200_21", true)) {
      return new SamiInline_response_200_21();
    }
    if(type.Equals(L"SamiInline_response_200_22", true)) {
      return new SamiInline_response_200_22();
    }
    if(type.Equals(L"SamiInline_response_200_23", true)) {
      return new SamiInline_response_200_23();
    }
    if(type.Equals(L"SamiInline_response_200_24", true)) {
      return new SamiInline_response_200_24();
    }
    if(type.Equals(L"SamiInline_response_200_25", true)) {
      return new SamiInline_response_200_25();
    }
    if(type.Equals(L"SamiInline_response_200_26", true)) {
      return new SamiInline_response_200_26();
    }
    if(type.Equals(L"SamiInline_response_200_27", true)) {
      return new SamiInline_response_200_27();
    }
    if(type.Equals(L"SamiInline_response_200_28", true)) {
      return new SamiInline_response_200_28();
    }
    if(type.Equals(L"SamiInline_response_200_29", true)) {
      return new SamiInline_response_200_29();
    }
    if(type.Equals(L"SamiInline_response_200_30", true)) {
      return new SamiInline_response_200_30();
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
