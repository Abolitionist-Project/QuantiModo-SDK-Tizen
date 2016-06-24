#ifndef SamiAuthenticationApi_H_
#define SamiAuthenticationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAuthenticationApi {
public:
  SamiAuthenticationApi();
  virtual ~SamiAuthenticationApi();

  void 
  v2AuthSocialAuthorizeCodeGetWithCompletion(String* code, String* provider, void(* handler)(SamiError*));
  void 
  v2AuthSocialAuthorizeTokenGetWithCompletion(String* accessToken, String* provider, String* refreshToken, void(* handler)(SamiError*));
  void 
  v2AuthSocialLoginGetWithCompletion(String* redirectUrl, String* provider, void(* handler)(SamiError*));
  void 
  v2Oauth2AccessTokenGetWithCompletion(String* clientId, String* clientSecret, String* grantType, String* code, String* responseType, String* scope, String* redirectUri, String* state, void(* handler)(SamiError*));
  void 
  v2OauthAuthorizeGetWithCompletion(String* clientId, String* clientSecret, String* responseType, String* scope, String* redirectUri, String* state, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthenticationApi_H_ */
