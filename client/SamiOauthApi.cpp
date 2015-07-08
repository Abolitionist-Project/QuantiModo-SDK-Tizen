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
oauth2AccesstokenGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiOauthApi::oauth2AccesstokenGetWithCompletion(String* clientId, String* clientSecret, String* grantType, String* responseType, String* scope, String* redirectUri, String* state, String* realm, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&oauth2AccesstokenGetProcessor, (void(*)(void*, SamiError*))success);
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
  
  
    queryParams->Add(new String("realm"), realm);
  
  

  String* mBody = null;

  

  String url(L"/oauth2/accesstoken");

  

  client->execute(SamiOauthApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
oauth2AuthorizeGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiOauthApi::oauth2AuthorizeGetWithCompletion(String* clientId, String* clientSecret, String* responseType, String* scope, String* redirectUri, String* state, String* realm, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&oauth2AuthorizeGetProcessor, (void(*)(void*, SamiError*))success);
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
  
  
    queryParams->Add(new String("realm"), realm);
  
  

  String* mBody = null;

  

  String url(L"/oauth2/authorize");

  

  client->execute(SamiOauthApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
