#ifndef SamiUnitCategoryApi_H_
#define SamiUnitCategoryApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiInline_response_200_15.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_16.h"
#include "SamiUnitCategory.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUnitCategoryApi {
public:
  SamiUnitCategoryApi();
  virtual ~SamiUnitCategoryApi();

  
  SamiInline_response_200_15* 
  unitCategoriesGetWithCompletion(String* name, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_15*, SamiError*));
  
  SamiInline_response_200_16* 
  unitCategoriesPostWithCompletion(SamiUnitCategory* body, void (* handler)(SamiInline_response_200_16*, SamiError*));
  
  SamiInline_response_200_16* 
  unitCategoriesIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_16*, SamiError*));
  
  SamiInline_response_200_2* 
  unitCategoriesIdPutWithCompletion(Integer* _id, SamiUnitCategory* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  unitCategoriesIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUnitCategoryApi_H_ */
