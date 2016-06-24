#ifndef SamiMeasurementsApi_H_
#define SamiMeasurementsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiMeasurementSource.h"
using Tizen::Base::String;
#include "SamiMeasurement.h"
using Tizen::Base::Integer;
#include "SamiCommonResponse.h"
#include "SamiMeasurementDelete.h"
#include "SamiMeasurementSet.h"
#include "SamiMeasurementRange.h"
#include "SamiFile.h"
#include "SamiInline_response_200_12.h"
#include "SamiInline_response_200_11.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMeasurementsApi {
public:
  SamiMeasurementsApi();
  virtual ~SamiMeasurementsApi();

  SamiMeasurementSource* 
  v1MeasurementSourcesGetWithCompletion( void (* handler)(SamiMeasurementSource*, SamiError*));
  void 
  v1MeasurementSourcesPostWithCompletion(SamiMeasurementSource* body, String* accessToken, void(* handler)(SamiError*));
  SamiMeasurement* 
  v1MeasurementsDailyGetWithCompletion(String* variableName, String* accessToken, String* abbreviatedUnitName, String* startTime, String* endTime, Integer* groupingWidth, String* groupingTimezone, Integer* limit, Integer* offset, Integer* sort, void (* handler)(SamiMeasurement*, SamiError*));
  SamiCommonResponse* 
  v1MeasurementsDeletePostWithCompletion(SamiMeasurementDelete* body, void (* handler)(SamiCommonResponse*, SamiError*));
  SamiMeasurement* 
  v1MeasurementsGetWithCompletion(String* accessToken, String* variableName, String* variableCategoryName, String* source, String* value, String* lastUpdated, String* unit, String* startTime, String* createdAt, String* updatedAt, String* endTime, Integer* groupingWidth, String* groupingTimezone, Integer* limit, Integer* offset, Integer* sort, void (* handler)(SamiMeasurement*, SamiError*));
  void 
  v1MeasurementsPostWithCompletion(SamiMeasurementSet* body, String* accessToken, void(* handler)(SamiError*));
  SamiMeasurementRange* 
  v1MeasurementsRangeGetWithCompletion(String* sources, Integer* user, void (* handler)(SamiMeasurementRange*, SamiError*));
  SamiFile* 
  v2MeasurementsCsvGetWithCompletion(String* accessToken, void (* handler)(SamiFile*, SamiError*));
  SamiInline_response_200_12* 
  v2MeasurementsIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_12*, SamiError*));
  SamiInline_response_200_11* 
  v2MeasurementsIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_11*, SamiError*));
  SamiInline_response_200_12* 
  v2MeasurementsIdPutWithCompletion(Integer* _id, String* accessToken, SamiMeasurement* body, void (* handler)(SamiInline_response_200_12*, SamiError*));
  Integer* 
  v2MeasurementsRequestCsvPostWithCompletion(String* accessToken, void (* handler)(Integer*, SamiError*));
  Integer* 
  v2MeasurementsRequestPdfPostWithCompletion(String* accessToken, void (* handler)(Integer*, SamiError*));
  Integer* 
  v2MeasurementsRequestXlsPostWithCompletion(String* accessToken, void (* handler)(Integer*, SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMeasurementsApi_H_ */
