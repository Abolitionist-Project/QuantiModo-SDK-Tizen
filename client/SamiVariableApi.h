#ifndef SamiVariableApi_H_
#define SamiVariableApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
using Tizen::Base::String;
#include "SamiInline_response_200_27.h"
using Tizen::Base::Integer;
using Tizen::Base::Boolean;
#include "SamiInline_response_200_28.h"
#include "SamiVariable.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVariableApi {
public:
  SamiVariableApi();
  virtual ~SamiVariableApi();

  
  SamiInline_response_200_27* 
  variablesGetWithCompletion(Integer* _id, String* clientId, Integer* parentId, String* name, Integer* variableCategoryId, Integer* defaultUnitId, String* combinationOperation, Long* fillingValue, Long* maximumAllowedValue, Long* minimumAllowedValue, Integer* onsetDelay, Integer* durationOfAction, Integer* public, Boolean* causeOnly, Long* mostCommonValue, Integer* mostCommonUnitId, Long* standardDeviation, Long* variance, Long* mean, Long* median, Long* numberOfMeasurements, Long* numberOfUniqueValues, Long* skewness, Long* kurtosis, Long* latitude, Long* longitude, String* location, String* status, String* errorMessage, String* lastSuccessfulUpdateTime, String* createdAt, String* updatedAt, String* productUrl, String* imageUrl, Long* price, Integer* numberOfUserVariables, Boolean* outcome, Long* minimumRecordedValue, Long* maximumRecordedValue, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_27*, SamiError*));
  
  SamiInline_response_200_28* 
  variablesPostWithCompletion(SamiVariable* body, void (* handler)(SamiInline_response_200_28*, SamiError*));
  
  SamiInline_response_200_28* 
  variablesIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_28*, SamiError*));
  
  SamiInline_response_200_2* 
  variablesIdPutWithCompletion(Integer* _id, SamiVariable* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  variablesIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVariableApi_H_ */
