#ifndef SamiMeasurementsApi_H_
#define SamiMeasurementsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiMeasurementSource.h"
using Tizen::Base::Integer;
using Tizen::Base::String;
#include "SamiMeasurement.h"
#include "SamiMeasurementSet.h"
#include "SamiMeasurementRange.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMeasurementsApi {
public:
  SamiMeasurementsApi();
  virtual ~SamiMeasurementsApi();

  
  SamiMeasurementSource* 
  measurementSourcesGetWithCompletion( void (* handler)(SamiMeasurementSource*, SamiError*));
  
  void 
  measurementSourcesPostWithCompletion(SamiMeasurementSource* name, void(* handler)(SamiError*));
  
  SamiMeasurement* 
  measurementsGetWithCompletion(String* variableName, String* unit, String* startTime, String* endTime, Integer* groupingWidth, String* groupingTimezone, void (* handler)(SamiMeasurement*, SamiError*));
  
  void 
  measurementsV2PostWithCompletion(SamiMeasurementSet* measurements, void(* handler)(SamiError*));
  
  SamiMeasurementRange* 
  measurementsRangeGetWithCompletion(String* sources, Integer* user, void (* handler)(SamiMeasurementRange*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMeasurementsApi_H_ */
