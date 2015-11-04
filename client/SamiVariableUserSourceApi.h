#ifndef SamiVariableUserSourceApi_H_
#define SamiVariableUserSourceApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiInline_response_200_25.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_26.h"
#include "SamiVariableUserSource.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVariableUserSourceApi {
public:
  SamiVariableUserSourceApi();
  virtual ~SamiVariableUserSourceApi();

  
  SamiInline_response_200_25* 
  variableUserSourcesGetWithCompletion(Integer* variableId, Integer* userId, Integer* timestamp, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_25*, SamiError*));
  
  SamiInline_response_200_26* 
  variableUserSourcesPostWithCompletion(SamiVariableUserSource* body, void (* handler)(SamiInline_response_200_26*, SamiError*));
  
  SamiInline_response_200_26* 
  variableUserSourcesIdGetWithCompletion(Integer* _id, Integer* sourceId, void (* handler)(SamiInline_response_200_26*, SamiError*));
  
  SamiInline_response_200_2* 
  variableUserSourcesIdPutWithCompletion(Integer* _id, Integer* sourceId, SamiVariableUserSource* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  variableUserSourcesIdDeleteWithCompletion(Integer* _id, Integer* sourceId, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVariableUserSourceApi_H_ */
