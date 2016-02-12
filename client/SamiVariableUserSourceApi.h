#ifndef SamiVariableUserSourceApi_H_
#define SamiVariableUserSourceApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_10.h"
#include "SamiInline_response_200_33.h"
#include "SamiVariableUserSource.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVariableUserSourceApi {
public:
  SamiVariableUserSourceApi();
  virtual ~SamiVariableUserSourceApi();

  
  SamiInline_response_200_10* 
  variableUserSourcesGetWithCompletion(String* accessToken, Integer* variableId, Integer* userId, Integer* timestamp, Integer* earliestMeasurementTime, Integer* latestMeasurementTime, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_10*, SamiError*));
  
  SamiInline_response_200_33* 
  variableUserSourcesPostWithCompletion(String* accessToken, SamiVariableUserSource* body, void (* handler)(SamiInline_response_200_33*, SamiError*));
  
  SamiInline_response_200_33* 
  variableUserSourcesIdGetWithCompletion(Integer* _id, Integer* sourceId, String* accessToken, void (* handler)(SamiInline_response_200_33*, SamiError*));
  
  SamiInline_response_200_2* 
  variableUserSourcesIdPutWithCompletion(Integer* _id, Integer* sourceId, String* accessToken, SamiVariableUserSource* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  variableUserSourcesIdDeleteWithCompletion(Integer* _id, Integer* sourceId, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVariableUserSourceApi_H_ */
