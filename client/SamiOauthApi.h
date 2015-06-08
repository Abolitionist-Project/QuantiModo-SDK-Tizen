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
  oauth2AccesstokenGetWithCompletion(String* responseType, String* redirectUri, String* realm, String* clientId, String* scope, String* state, void(* handler)(SamiError*));
  
  void 
  oauth2AuthorizeGetWithCompletion(String* clientId, String* realm, String* redirectUri, String* responseType, String* scope, String* state, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiOauthApi_H_ */
