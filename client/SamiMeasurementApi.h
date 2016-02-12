#ifndef SamiMeasurementApi_H_
#define SamiMeasurementApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
using Tizen::Base::String;
#include "SamiInline_response_200_5.h"
using Tizen::Base::Integer;
#include "SamiMeasurementPost.h"
#include "SamiFile.h"
#include "SamiInline_response_200_20.h"
#include "SamiMeasurement.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMeasurementApi {
public:
  SamiMeasurementApi();
  virtual ~SamiMeasurementApi();

  
  SamiInline_response_200_5* 
  measurementsGetWithCompletion(String* accessToken, Integer* userId, String* clientId, Integer* connectorId, Integer* variableId, Integer* sourceId, String* startTime, Long* value, Integer* unitId, Long* originalValue, Integer* originalUnitId, Integer* duration, String* note, Long* latitude, Long* longitude, String* location, String* createdAt, String* updatedAt, String* error, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_5*, SamiError*));
  
  SamiInline_response_200_5* 
  measurementsPostWithCompletion(String* accessToken, SamiMeasurementPost* body, void (* handler)(SamiInline_response_200_5*, SamiError*));
  
  SamiFile* 
  measurementsCsvGetWithCompletion(String* accessToken, void (* handler)(SamiFile*, SamiError*));
  
  Integer* 
  measurementsRequestCsvPostWithCompletion(String* accessToken, void (* handler)(Integer*, SamiError*));
  
  SamiInline_response_200_20* 
  measurementsIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_20*, SamiError*));
  
  SamiInline_response_200_2* 
  measurementsIdPutWithCompletion(Integer* _id, String* accessToken, SamiMeasurement* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  measurementsIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMeasurementApi_H_ */
