#include "SamiOauthApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiOauthApi::SamiOauthApi() {

}

SamiOauthApi::~SamiOauthApi() {

}

void
v1Oauth2AuthorizeGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiOauthApi::v1Oauth2AuthorizeGetWithCompletion(String* clientId, String* clientSecret, String* responseType, String* scope, String* redirectUri, String* state, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1Oauth2AuthorizeGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("client_id"), clientId);
  
  
    queryParams->Add(new String("client_secret"), clientSecret);
  
  
    queryParams->Add(new String("response_type"), responseType);
  
  
    queryParams->Add(new String("scope"), scope);
  
  
    queryParams->Add(new String("redirect_uri"), redirectUri);
  
  
    queryParams->Add(new String("state"), state);
  
  

  String* mBody = null;

  

  String url(L"/v1/oauth2/authorize");

  

  client->execute(SamiOauthApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v1Oauth2TokenGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiOauthApi::v1Oauth2TokenGetWithCompletion(String* clientId, String* clientSecret, String* grantType, String* responseType, String* scope, String* redirectUri, String* state, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1Oauth2TokenGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("client_id"), clientId);
  
  
    queryParams->Add(new String("client_secret"), clientSecret);
  
  
    queryParams->Add(new String("grant_type"), grantType);
  
  
    queryParams->Add(new String("response_type"), responseType);
  
  
    queryParams->Add(new String("scope"), scope);
  
  
    queryParams->Add(new String("redirect_uri"), redirectUri);
  
  
    queryParams->Add(new String("state"), state);
  
  

  String* mBody = null;

  

  String url(L"/v1/oauth2/token");

  

  client->execute(SamiOauthApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
