#ifndef SamiUserVariableApi_H_
#define SamiUserVariableApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
using Tizen::Base::String;
#include "SamiInline_response_200_21.h"
using Tizen::Base::Integer;
using Tizen::Base::Boolean;
#include "SamiUserVariable.h"
#include "SamiInline_response_200_22.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUserVariableApi {
public:
  SamiUserVariableApi();
  virtual ~SamiUserVariableApi();

  
  SamiInline_response_200_21* 
  userVariablesGetWithCompletion(String* clientId, Integer* variableId, Integer* defaultUnitId, Long* minimumAllowedValue, Long* maximumAllowedValue, Long* fillingValue, Integer* joinWith, Integer* onsetDelay, Integer* durationOfAction, Integer* variableCategoryId, Integer* updated, Integer* public, Boolean* causeOnly, String* fillingType, Integer* numberOfMeasurements, Integer* numberOfProcessedMeasurements, Integer* measurementsAtLastAnalysis, Integer* lastUnitId, Integer* lastOriginalUnitId, Integer* lastOriginalValue, Long* lastValue, Integer* lastSourceId, Integer* numberOfCorrelations, String* status, String* errorMessage, String* lastSuccessfulUpdateTime, Long* standardDeviation, Long* variance, Long* minimumRecordedDailyValue, Long* maximumRecordedDailyValue, Long* mean, Long* median, Integer* mostCommonUnitId, Long* mostCommonValue, Long* numberOfUniqueDailyValues, Integer* numberOfChanges, Long* skewness, Long* kurtosis, Long* latitude, Long* longitude, String* location, String* createdAt, String* updatedAt, Boolean* outcome, String* sources, Integer* earliestSourceTime, Integer* latestSourceTime, Integer* earliestMeasurementTime, Integer* latestMeasurementTime, Integer* earliestFillingTime, Integer* latestFillingTime, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_21*, SamiError*));
  
  SamiInline_response_200_22* 
  userVariablesPostWithCompletion(SamiUserVariable* body, void (* handler)(SamiInline_response_200_22*, SamiError*));
  
  SamiInline_response_200_22* 
  userVariablesIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_22*, SamiError*));
  
  SamiInline_response_200_2* 
  userVariablesIdPutWithCompletion(Integer* _id, SamiUserVariable* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  userVariablesIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUserVariableApi_H_ */
