#ifndef SamiOauthApi_H_
#define SamiOauthApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiOauthApi {
public:
  SamiOauthApi();
  virtual ~SamiOauthApi();

  
  void 
  oauth2AccesstokenGetWithCompletion(String* clientId, String* clientSecret, String* grantType, String* responseType, String* scope, String* redirectUri, String* state, String* realm, void(* handler)(SamiError*));
  
  void 
  oauth2AuthorizeGetWithCompletion(String* clientId, String* clientSecret, String* responseType, String* scope, String* redirectUri, String* state, String* realm, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiOauthApi_H_ */
