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
  v1MeasurementSourcesGetWithCompletion( void (* handler)(SamiMeasurementSource*, SamiError*));
  
  void 
  v1MeasurementSourcesPostWithCompletion(SamiMeasurementSource* name, void(* handler)(SamiError*));
  
  SamiMeasurement* 
  v1MeasurementsGetWithCompletion(String* variableName, String* unit, String* startTime, String* endTime, Integer* groupingWidth, String* groupingTimezone, Integer* limit, Integer* offset, Integer* sort, void (* handler)(SamiMeasurement*, SamiError*));
  
  void 
  v1MeasurementsPostWithCompletion(SamiMeasurementSet* measurements, void(* handler)(SamiError*));
  
  SamiMeasurement* 
  v1MeasurementsDailyGetWithCompletion(String* variableName, String* abbreviatedUnitName, String* startTime, String* endTime, Integer* groupingWidth, String* groupingTimezone, Integer* limit, Integer* offset, Integer* sort, void (* handler)(SamiMeasurement*, SamiError*));
  
  SamiMeasurementRange* 
  v1MeasurementsRangeGetWithCompletion(String* sources, Integer* user, void (* handler)(SamiMeasurementRange*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMeasurementsApi_H_ */
