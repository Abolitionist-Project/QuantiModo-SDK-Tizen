#ifndef SamiApplicationEndpointsApi_H_
#define SamiApplicationEndpointsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiInline_response_200_3.h"
using Tizen::Base::Integer;
#include "SamiInline_response_200_4.h"
using Tizen::Base::Long;
#include "SamiInline_response_200_5.h"
#include "SamiInline_response_200_6.h"
#include "SamiInline_response_200_7.h"
using Tizen::Base::Boolean;
#include "SamiInline_response_200_8.h"
#include "SamiInline_response_200_9.h"
#include "SamiInline_response_200_10.h"
#include "SamiInline_response_200_11.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiApplicationEndpointsApi {
public:
  SamiApplicationEndpointsApi();
  virtual ~SamiApplicationEndpointsApi();

  
  SamiInline_response_200_3* 
  applicationConnectionsGetWithCompletion(String* accessToken, Integer* connectorId, String* connectStatus, String* connectError, String* updateRequestedAt, String* updateStatus, String* updateError, String* lastSuccessfulUpdatedAt, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_3*, SamiError*));
  
  SamiInline_response_200_4* 
  applicationCredentialsGetWithCompletion(String* accessToken, Integer* connectorId, String* attrKey, String* attrValue, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_4*, SamiError*));
  
  SamiInline_response_200_5* 
  applicationMeasurementsGetWithCompletion(String* accessToken, String* clientId, Integer* connectorId, Integer* variableId, Integer* sourceId, String* startTime, Long* value, Integer* unitId, Long* originalValue, Integer* originalUnitId, Integer* duration, String* note, Long* latitude, Long* longitude, String* location, String* createdAt, String* updatedAt, String* error, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_5*, SamiError*));
  
  SamiInline_response_200_6* 
  applicationTrackingRemindersGetWithCompletion(String* accessToken, String* clientId, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_6*, SamiError*));
  
  SamiInline_response_200_7* 
  applicationUpdatesGetWithCompletion(String* accessToken, Integer* connectorId, Integer* numberOfMeasurements, Boolean* success, String* message, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_7*, SamiError*));
  
  SamiInline_response_200_8* 
  applicationUserVariableRelationshipsGetWithCompletion(String* accessToken, Integer* _id, String* confidenceLevel, Long* confidenceScore, String* direction, Integer* durationOfAction, String* errorMessage, Integer* onsetDelay, Integer* outcomeVariableId, Integer* predictorVariableId, Integer* predictorUnitId, Long* sinnRank, String* strengthLevel, Long* strengthScore, String* vote, Long* valuePredictingHighOutcome, Long* valuePredictingLowOutcome, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_8*, SamiError*));
  
  SamiInline_response_200_9* 
  applicationUserVariablesGetWithCompletion(String* accessToken, String* clientId, Integer* parentId, Integer* variableId, Integer* defaultUnitId, Long* minimumAllowedValue, Long* maximumAllowedValue, Long* fillingValue, Integer* joinWith, Integer* onsetDelay, Integer* durationOfAction, Integer* variableCategoryId, Integer* updated, Integer* public, Boolean* causeOnly, String* fillingType, Integer* numberOfMeasurements, Integer* numberOfProcessedMeasurements, Integer* measurementsAtLastAnalysis, Integer* lastUnitId, Integer* lastOriginalUnitId, Integer* lastOriginalValue, Long* lastValue, Long* lastOriginalValue2, Integer* lastSourceId, Integer* numberOfCorrelations, String* status, String* errorMessage, String* lastSuccessfulUpdateTime, Long* standardDeviation, Long* variance, Long* minimumRecordedValue, Long* maximumRecordedValue, Long* mean, Long* median, Integer* mostCommonUnitId, Long* mostCommonValue, Long* numberOfUniqueDailyValues, Integer* numberOfChanges, Long* skewness, Long* kurtosis, Long* latitude, Long* longitude, String* location, String* createdAt, String* updatedAt, Boolean* outcome, String* sources, Integer* earliestSourceTime, Integer* latestSourceTime, Integer* earliestMeasurementTime, Integer* latestMeasurementTime, Integer* earliestFillingTime, Integer* latestFillingTime, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_9*, SamiError*));
  
  SamiInline_response_200_10* 
  applicationVariableUserSourcesGetWithCompletion(String* accessToken, Integer* variableId, Integer* timestamp, Integer* earliestMeasurementTime, Integer* latestMeasurementTime, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_10*, SamiError*));
  
  SamiInline_response_200_11* 
  applicationVotesGetWithCompletion(String* accessToken, String* clientId, Integer* causeId, Integer* effectId, Integer* value, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_11*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiApplicationEndpointsApi_H_ */
