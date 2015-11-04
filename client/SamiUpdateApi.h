#ifndef SamiUpdateApi_H_
#define SamiUpdateApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiInline_response_200_19.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
using Tizen::Base::Boolean;
#include "SamiUpdate.h"
#include "SamiInline_response_200_20.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUpdateApi {
public:
  SamiUpdateApi();
  virtual ~SamiUpdateApi();

  
  SamiInline_response_200_19* 
  updatesGetWithCompletion(Integer* userId, Integer* connectorId, Integer* numberOfMeasurements, Boolean* success, String* message, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_19*, SamiError*));
  
  SamiInline_response_200_20* 
  updatesPostWithCompletion(SamiUpdate* body, void (* handler)(SamiInline_response_200_20*, SamiError*));
  
  SamiInline_response_200_20* 
  updatesIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_20*, SamiError*));
  
  SamiInline_response_200_2* 
  updatesIdPutWithCompletion(Integer* _id, SamiUpdate* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  updatesIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUpdateApi_H_ */
