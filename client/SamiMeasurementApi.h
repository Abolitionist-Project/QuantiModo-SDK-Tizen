#ifndef SamiMeasurementApi_H_
#define SamiMeasurementApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_11.h"
#include "SamiMeasurementPost.h"
#include "SamiFile.h"
#include "SamiInline_response_200_12.h"
#include "SamiMeasurement.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMeasurementApi {
public:
  SamiMeasurementApi();
  virtual ~SamiMeasurementApi();

  
  SamiInline_response_200_11* 
  measurementsGetWithCompletion(Integer* userId, String* clientId, Integer* connectorId, Integer* variableId, Integer* startTime, Long* value, Long* originalValue, Integer* duration, String* note, Long* latitude, Long* longitude, String* location, String* createdAt, String* updatedAt, String* error, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_11*, SamiError*));
  
  SamiInline_response_200_11* 
  measurementsPostWithCompletion(SamiMeasurementPost* body, void (* handler)(SamiInline_response_200_11*, SamiError*));
  
  SamiFile* 
  measurementsCsvGetWithCompletion( void (* handler)(SamiFile*, SamiError*));
  
  Integer* 
  measurementsRequestCsvPostWithCompletion( void (* handler)(Integer*, SamiError*));
  
  SamiInline_response_200_12* 
  measurementsIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_12*, SamiError*));
  
  SamiInline_response_200_2* 
  measurementsIdPutWithCompletion(Integer* _id, SamiMeasurement* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  measurementsIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMeasurementApi_H_ */
