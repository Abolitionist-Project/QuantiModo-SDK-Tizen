#include "SamiAuthenticationApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiAuthenticationApi::SamiAuthenticationApi() {

}

SamiAuthenticationApi::~SamiAuthenticationApi() {

}

void
v2AuthSocialAuthorizeCodeGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthenticationApi::v2AuthSocialAuthorizeCodeGetWithCompletion(String* code, String* provider, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2AuthSocialAuthorizeCodeGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("code"), code);

    queryParams->Add(new String("provider"), provider);

  String* mBody = null;


  String url(L"/v2/auth/social/authorizeCode");


  client->execute(SamiAuthenticationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v2AuthSocialAuthorizeTokenGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthenticationApi::v2AuthSocialAuthorizeTokenGetWithCompletion(String* accessToken, String* provider, String* refreshToken, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2AuthSocialAuthorizeTokenGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("refreshToken"), refreshToken);

    queryParams->Add(new String("accessToken"), accessToken);

    queryParams->Add(new String("provider"), provider);

  String* mBody = null;


  String url(L"/v2/auth/social/authorizeToken");


  client->execute(SamiAuthenticationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v2AuthSocialLoginGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthenticationApi::v2AuthSocialLoginGetWithCompletion(String* redirectUrl, String* provider, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2AuthSocialLoginGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("redirectUrl"), redirectUrl);

    queryParams->Add(new String("provider"), provider);

  String* mBody = null;


  String url(L"/v2/auth/social/login");


  client->execute(SamiAuthenticationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v2Oauth2AccessTokenGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthenticationApi::v2Oauth2AccessTokenGetWithCompletion(String* clientId, String* clientSecret, String* grantType, String* code, String* responseType, String* scope, String* redirectUri, String* state, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2Oauth2AccessTokenGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("clientId"), clientId);

    queryParams->Add(new String("client_secret"), clientSecret);

    queryParams->Add(new String("grant_type"), grantType);

    queryParams->Add(new String("code"), code);

    queryParams->Add(new String("response_type"), responseType);

    queryParams->Add(new String("scope"), scope);

    queryParams->Add(new String("redirect_uri"), redirectUri);

    queryParams->Add(new String("state"), state);

  String* mBody = null;


  String url(L"/v2/oauth2/access_token");


  client->execute(SamiAuthenticationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v2OauthAuthorizeGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthenticationApi::v2OauthAuthorizeGetWithCompletion(String* clientId, String* clientSecret, String* responseType, String* scope, String* redirectUri, String* state, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2OauthAuthorizeGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("clientId"), clientId);

    queryParams->Add(new String("client_secret"), clientSecret);

    queryParams->Add(new String("response_type"), responseType);

    queryParams->Add(new String("scope"), scope);

    queryParams->Add(new String("redirect_uri"), redirectUri);

    queryParams->Add(new String("state"), state);

  String* mBody = null;


  String url(L"/v2/oauth/authorize");


  client->execute(SamiAuthenticationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
