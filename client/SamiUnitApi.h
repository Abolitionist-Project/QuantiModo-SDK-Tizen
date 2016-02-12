#ifndef SamiUnitApi_H_
#define SamiUnitApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiInline_response_200_26.h"
using Tizen::Base::Long;
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_27.h"
#include "SamiUnit.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUnitApi {
public:
  SamiUnitApi();
  virtual ~SamiUnitApi();

  
  SamiInline_response_200_26* 
  unitsGetWithCompletion(String* accessToken, String* clientId, String* name, String* abbreviatedName, Integer* categoryId, Long* minimumValue, Long* maximumValue, Integer* updated, Integer* defaultUnitId, Long* multiply, Long* add, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_26*, SamiError*));
  
  SamiInline_response_200_27* 
  unitsPostWithCompletion(String* accessToken, SamiUnit* body, void (* handler)(SamiInline_response_200_27*, SamiError*));
  
  SamiInline_response_200_27* 
  unitsIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_27*, SamiError*));
  
  SamiInline_response_200_2* 
  unitsIdPutWithCompletion(Integer* _id, String* accessToken, SamiUnit* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  unitsIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUnitApi_H_ */
