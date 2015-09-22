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
  v1Oauth2AuthorizeGetWithCompletion(String* clientId, String* clientSecret, String* responseType, String* scope, String* redirectUri, String* state, void(* handler)(SamiError*));
  
  void 
  v1Oauth2TokenGetWithCompletion(String* clientId, String* clientSecret, String* grantType, String* responseType, String* scope, String* redirectUri, String* state, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiOauthApi_H_ */
