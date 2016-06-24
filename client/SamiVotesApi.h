#ifndef SamiVotesApi_H_
#define SamiVotesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCommonResponse.h"
using Tizen::Base::String;
#include "SamiVoteDelete.h"
#include "SamiPostVote.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVotesApi {
public:
  SamiVotesApi();
  virtual ~SamiVotesApi();

  SamiCommonResponse* 
  v1VotesDeletePostWithCompletion(SamiVoteDelete* body, String* accessToken, void (* handler)(SamiCommonResponse*, SamiError*));
  SamiCommonResponse* 
  v1VotesPostWithCompletion(SamiPostVote* body, String* accessToken, void (* handler)(SamiCommonResponse*, SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVotesApi_H_ */
