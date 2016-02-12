#ifndef SamiUserVariableRelationshipApi_H_
#define SamiUserVariableRelationshipApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiInline_response_200_8.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_29.h"
#include "SamiUserVariableRelationship.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUserVariableRelationshipApi {
public:
  SamiUserVariableRelationshipApi();
  virtual ~SamiUserVariableRelationshipApi();

  
  SamiInline_response_200_8* 
  userVariableRelationshipsGetWithCompletion(String* accessToken, Integer* _id, String* confidenceLevel, Long* confidenceScore, String* direction, Integer* durationOfAction, String* errorMessage, Integer* onsetDelay, Integer* outcomeVariableId, Integer* predictorVariableId, Integer* predictorUnitId, Long* sinnRank, String* strengthLevel, Long* strengthScore, Integer* userId, String* vote, Long* valuePredictingHighOutcome, Long* valuePredictingLowOutcome, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_8*, SamiError*));
  
  SamiInline_response_200_29* 
  userVariableRelationshipsPostWithCompletion(String* accessToken, SamiUserVariableRelationship* body, void (* handler)(SamiInline_response_200_29*, SamiError*));
  
  SamiInline_response_200_29* 
  userVariableRelationshipsIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_29*, SamiError*));
  
  SamiInline_response_200_2* 
  userVariableRelationshipsIdPutWithCompletion(Integer* _id, String* accessToken, SamiUserVariableRelationship* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  userVariableRelationshipsIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUserVariableRelationshipApi_H_ */
