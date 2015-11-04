#ifndef SamiVariableCategoryApi_H_
#define SamiVariableCategoryApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiInline_response_200_23.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
using Tizen::Base::Boolean;
#include "SamiVariableCategory.h"
#include "SamiInline_response_200_24.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVariableCategoryApi {
public:
  SamiVariableCategoryApi();
  virtual ~SamiVariableCategoryApi();

  
  SamiInline_response_200_23* 
  variableCategoriesGetWithCompletion(String* name, Long* fillingValue, Long* maximumAllowedValue, Long* minimumAllowedValue, Integer* durationOfAction, Integer* onsetDelay, String* combinationOperation, Integer* updated, Boolean* causeOnly, Integer* public, Boolean* outcome, String* createdAt, String* updatedAt, String* imageUrl, Integer* defaultUnitId, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_23*, SamiError*));
  
  SamiInline_response_200_24* 
  variableCategoriesPostWithCompletion(SamiVariableCategory* body, void (* handler)(SamiInline_response_200_24*, SamiError*));
  
  SamiInline_response_200_24* 
  variableCategoriesIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_24*, SamiError*));
  
  SamiInline_response_200_2* 
  variableCategoriesIdPutWithCompletion(Integer* _id, SamiVariableCategory* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  variableCategoriesIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVariableCategoryApi_H_ */
