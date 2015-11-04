#ifndef SamiAggregatedCorrelationApi_H_
#define SamiAggregatedCorrelationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
using Tizen::Base::String;
#include "SamiInline_response_200.h"
using Tizen::Base::Integer;
#include "SamiAggregatedCorrelation.h"
#include "SamiInline_response_200_1.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAggregatedCorrelationApi {
public:
  SamiAggregatedCorrelationApi();
  virtual ~SamiAggregatedCorrelationApi();

  
  SamiInline_response_200* 
  aggregatedCorrelationsGetWithCompletion(Long* correlation, Integer* causeId, Integer* effectId, Integer* onsetDelay, Integer* durationOfAction, Integer* numberOfPairs, Long* valuePredictingHighOutcome, Long* valuePredictingLowOutcome, Long* optimalPearsonProduct, Long* vote, Integer* numberOfUsers, Integer* numberOfCorrelations, Long* statisticalSignificance, String* causeUnit, Integer* causeUnitId, Integer* causeChanges, Integer* effectChanges, Long* aggregateQmScore, String* createdAt, String* updatedAt, String* status, String* errorMessage, String* lastSuccessfulUpdateTime, Long* reversePearsonCorrelationCoefficient, Long* predictivePearsonCorrelationCoefficient, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200*, SamiError*));
  
  SamiInline_response_200_1* 
  aggregatedCorrelationsPostWithCompletion(SamiAggregatedCorrelation* body, void (* handler)(SamiInline_response_200_1*, SamiError*));
  
  SamiInline_response_200_1* 
  aggregatedCorrelationsIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_1*, SamiError*));
  
  SamiInline_response_200_2* 
  aggregatedCorrelationsIdPutWithCompletion(Integer* _id, SamiAggregatedCorrelation* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  aggregatedCorrelationsIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAggregatedCorrelationApi_H_ */
