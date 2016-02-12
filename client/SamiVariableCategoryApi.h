#ifndef SamiVariableCategoryApi_H_
#define SamiVariableCategoryApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
using Tizen::Base::String;
#include "SamiInline_response_200_31.h"
using Tizen::Base::Integer;
using Tizen::Base::Boolean;
#include "SamiVariableCategory.h"
#include "SamiInline_response_200_32.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVariableCategoryApi {
public:
  SamiVariableCategoryApi();
  virtual ~SamiVariableCategoryApi();

  
  SamiInline_response_200_31* 
  variableCategoriesGetWithCompletion(String* accessToken, String* name, Long* fillingValue, Long* maximumAllowedValue, Long* minimumAllowedValue, Integer* durationOfAction, Integer* onsetDelay, String* combinationOperation, Integer* updated, Boolean* causeOnly, Integer* public, Boolean* outcome, String* createdAt, String* updatedAt, String* imageUrl, Integer* defaultUnitId, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_31*, SamiError*));
  
  SamiInline_response_200_32* 
  variableCategoriesPostWithCompletion(String* accessToken, SamiVariableCategory* body, void (* handler)(SamiInline_response_200_32*, SamiError*));
  
  SamiInline_response_200_32* 
  variableCategoriesIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_32*, SamiError*));
  
  SamiInline_response_200_2* 
  variableCategoriesIdPutWithCompletion(Integer* _id, String* accessToken, SamiVariableCategory* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  variableCategoriesIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVariableCategoryApi_H_ */
