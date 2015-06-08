#ifndef SamiMeasurementsApi_H_
#define SamiMeasurementsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiMeasurementSource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;
#include "SamiMeasurement.h"
#include "SamiMeasurementRange.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMeasurementsApi {
public:
  SamiMeasurementsApi();
  virtual ~SamiMeasurementsApi();

  
  void 
  measurementSourcesGetWithCompletion( void(* handler)(SamiError*));
  
  void 
  measurementSourcesPostWithCompletion(IList* name, void(* handler)(SamiError*));
  
  void 
  measurementsGetWithCompletion(String* variableName, String* unit, String* startTime, String* endTime, Integer* groupingWidth, String* groupingTimezone, void(* handler)(SamiError*));
  
  void 
  measurementsV2PostWithCompletion(IList* measurements, void(* handler)(SamiError*));
  
  void 
  measurementsRangeGetWithCompletion(String* sources, Integer* user, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMeasurementsApi_H_ */
