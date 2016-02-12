#ifndef SamiCommonVariableRelationshipApi_H_
#define SamiCommonVariableRelationshipApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiInline_response_200_12.h"
using Tizen::Base::Long;
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_13.h"
#include "SamiCommonVariableRelationship.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCommonVariableRelationshipApi {
public:
  SamiCommonVariableRelationshipApi();
  virtual ~SamiCommonVariableRelationshipApi();

  
  SamiInline_response_200_12* 
  commonVariableRelationshipsGetWithCompletion(String* accessToken, Integer* _id, String* confidenceLevel, Long* confidenceScore, String* direction, Integer* durationOfAction, String* errorMessage, Integer* onsetDelay, Integer* outcomeVariableId, Integer* predictorVariableId, Integer* predictorUnitId, Long* sinnRank, Long* strengthScore, String* strengthLevel, Integer* upVotes, Integer* downVotes, Long* valuePredictingHighOutcome, Long* valuePredictingLowOutcome, Integer* numberOfUsers, String* dataSource, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_12*, SamiError*));
  
  SamiInline_response_200_13* 
  commonVariableRelationshipsPostWithCompletion(String* accessToken, SamiCommonVariableRelationship* body, void (* handler)(SamiInline_response_200_13*, SamiError*));
  
  SamiInline_response_200_13* 
  commonVariableRelationshipsIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_13*, SamiError*));
  
  SamiInline_response_200_2* 
  commonVariableRelationshipsIdPutWithCompletion(Integer* _id, String* accessToken, SamiCommonVariableRelationship* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  commonVariableRelationshipsIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCommonVariableRelationshipApi_H_ */
