#ifndef SamiVoteApi_H_
#define SamiVoteApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_11.h"
#include "SamiVote.h"
#include "SamiInline_response_200_36.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVoteApi {
public:
  SamiVoteApi();
  virtual ~SamiVoteApi();

  
  SamiInline_response_200_11* 
  votesGetWithCompletion(String* accessToken, String* clientId, Integer* userId, Integer* causeId, Integer* effectId, Integer* value, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_11*, SamiError*));
  
  SamiInline_response_200_36* 
  votesPostWithCompletion(String* accessToken, SamiVote* body, void (* handler)(SamiInline_response_200_36*, SamiError*));
  
  SamiInline_response_200_36* 
  votesIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_36*, SamiError*));
  
  SamiInline_response_200_2* 
  votesIdPutWithCompletion(Integer* _id, String* accessToken, SamiVote* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  votesIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVoteApi_H_ */
