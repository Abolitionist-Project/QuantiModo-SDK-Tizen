#ifndef SamiVoteApi_H_
#define SamiVoteApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiInline_response_200_29.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiVote.h"
#include "SamiInline_response_200_30.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVoteApi {
public:
  SamiVoteApi();
  virtual ~SamiVoteApi();

  
  SamiInline_response_200_29* 
  votesGetWithCompletion(String* clientId, Integer* userId, Integer* causeId, Integer* effectId, Integer* value, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_29*, SamiError*));
  
  SamiInline_response_200_30* 
  votesPostWithCompletion(SamiVote* body, void (* handler)(SamiInline_response_200_30*, SamiError*));
  
  SamiInline_response_200_30* 
  votesIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_30*, SamiError*));
  
  SamiInline_response_200_2* 
  votesIdPutWithCompletion(Integer* _id, SamiVote* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  votesIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVoteApi_H_ */
