#ifndef SamiUpdateApi_H_
#define SamiUpdateApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiInline_response_200_7.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
using Tizen::Base::Boolean;
#include "SamiInline_response_200_28.h"
#include "SamiUpdate.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUpdateApi {
public:
  SamiUpdateApi();
  virtual ~SamiUpdateApi();

  
  SamiInline_response_200_7* 
  updatesGetWithCompletion(String* accessToken, Integer* userId, Integer* connectorId, Integer* numberOfMeasurements, Boolean* success, String* message, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_7*, SamiError*));
  
  SamiInline_response_200_28* 
  updatesPostWithCompletion(String* accessToken, SamiUpdate* body, void (* handler)(SamiInline_response_200_28*, SamiError*));
  
  SamiInline_response_200_28* 
  updatesIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_28*, SamiError*));
  
  SamiInline_response_200_2* 
  updatesIdPutWithCompletion(Integer* _id, String* accessToken, SamiUpdate* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  updatesIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUpdateApi_H_ */
