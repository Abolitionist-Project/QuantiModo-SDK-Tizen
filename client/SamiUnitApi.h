#ifndef SamiUnitApi_H_
#define SamiUnitApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiInline_response_200_17.h"
using Tizen::Base::String;
using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiInline_response_200_18.h"
#include "SamiUnit.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUnitApi {
public:
  SamiUnitApi();
  virtual ~SamiUnitApi();

  
  SamiInline_response_200_17* 
  unitsGetWithCompletion(String* clientId, String* name, String* abbreviatedName, Boolean* categoryId, Long* minimumValue, Long* maximumValue, Integer* updated, Long* multiply, Long* add, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_17*, SamiError*));
  
  SamiInline_response_200_18* 
  unitsPostWithCompletion(SamiUnit* body, void (* handler)(SamiInline_response_200_18*, SamiError*));
  
  SamiInline_response_200_18* 
  unitsIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_18*, SamiError*));
  
  SamiInline_response_200_2* 
  unitsIdPutWithCompletion(Integer* _id, SamiUnit* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  unitsIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUnitApi_H_ */
