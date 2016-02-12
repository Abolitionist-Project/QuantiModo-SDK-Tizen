#ifndef SamiUserVariableApi_H_
#define SamiUserVariableApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiInline_response_200_9.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
using Tizen::Base::Boolean;
#include "SamiInline_response_200_30.h"
#include "SamiUserVariable.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUserVariableApi {
public:
  SamiUserVariableApi();
  virtual ~SamiUserVariableApi();

  
  SamiInline_response_200_9* 
  userVariablesGetWithCompletion(String* accessToken, String* clientId, Integer* parentId, Integer* variableId, Integer* userId, Integer* defaultUnitId, Long* minimumAllowedValue, Long* maximumAllowedValue, Long* fillingValue, Integer* joinWith, Integer* onsetDelay, Integer* durationOfAction, Integer* variableCategoryId, Integer* updated, Integer* public, Boolean* causeOnly, String* fillingType, Integer* numberOfMeasurements, Integer* numberOfProcessedMeasurements, Integer* measurementsAtLastAnalysis, Integer* lastUnitId, Integer* lastOriginalUnitId, Integer* lastOriginalValue, Long* lastValue, Long* lastOriginalValue2, Integer* lastSourceId, Integer* numberOfCorrelations, String* status, String* errorMessage, String* lastSuccessfulUpdateTime, Long* standardDeviation, Long* variance, Long* minimumRecordedValue, Long* maximumRecordedValue, Long* mean, Long* median, Integer* mostCommonUnitId, Long* mostCommonValue, Long* numberOfUniqueDailyValues, Integer* numberOfChanges, Long* skewness, Long* kurtosis, Long* latitude, Long* longitude, String* location, String* createdAt, String* updatedAt, Boolean* outcome, String* sources, Integer* earliestSourceTime, Integer* latestSourceTime, Integer* earliestMeasurementTime, Integer* latestMeasurementTime, Integer* earliestFillingTime, Integer* latestFillingTime, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_9*, SamiError*));
  
  SamiInline_response_200_30* 
  userVariablesPostWithCompletion(String* accessToken, SamiUserVariable* body, void (* handler)(SamiInline_response_200_30*, SamiError*));
  
  SamiInline_response_200_30* 
  userVariablesIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_30*, SamiError*));
  
  SamiInline_response_200_2* 
  userVariablesIdPutWithCompletion(Integer* _id, String* accessToken, SamiUserVariable* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  userVariablesIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUserVariableApi_H_ */
