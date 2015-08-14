#ifndef SamiVotesApi_H_
#define SamiVotesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCommonResponse.h"
using Tizen::Base::String;
using Tizen::Base::Boolean;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVotesApi {
public:
  SamiVotesApi();
  virtual ~SamiVotesApi();

  
  SamiCommonResponse* 
  v1VotesPostWithCompletion(String* cause, String* effect, Boolean* vote, void (* handler)(SamiCommonResponse*, SamiError*));
  
  SamiCommonResponse* 
  v1VotesDeletePostWithCompletion(String* cause, String* effect, void (* handler)(SamiCommonResponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVotesApi_H_ */
