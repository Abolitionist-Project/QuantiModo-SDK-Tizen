#ifndef SamiCorrelationApi_H_
#define SamiCorrelationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiInline_response_200_7.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_8.h"
#include "SamiCorrelation.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCorrelationApi {
public:
  SamiCorrelationApi();
  virtual ~SamiCorrelationApi();

  
  SamiInline_response_200_7* 
  correlationsGetWithCompletion(Integer* timestamp, Integer* userId, Long* correlation, Integer* causeId, Integer* effectId, Integer* onsetDelay, Integer* durationOfAction, Integer* numberOfPairs, Long* valuePredictingHighOutcome, Long* valuePredictingLowOutcome, Long* optimalPearsonProduct, Long* vote, Long* statisticalSignificance, String* causeUnit, Integer* causeUnitId, Integer* causeChanges, Integer* effectChanges, Long* qmScore, String* error, String* createdAt, String* updatedAt, Long* reversePearsonCorrelationCoefficient, Long* predictivePearsonCorrelationCoefficient, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_7*, SamiError*));
  
  SamiInline_response_200_8* 
  correlationsPostWithCompletion(SamiCorrelation* body, void (* handler)(SamiInline_response_200_8*, SamiError*));
  
  SamiInline_response_200_8* 
  correlationsIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_8*, SamiError*));
  
  SamiInline_response_200_2* 
  correlationsIdPutWithCompletion(Integer* _id, SamiCorrelation* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  correlationsIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCorrelationApi_H_ */
