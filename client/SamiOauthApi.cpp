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
SamiOauthApi::oauth2AuthorizeGetWithCompletion(String* response_type, String* redirect_uri, String* realm, String* client_id, String* scope, String* state, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&oauth2AuthorizeGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("response_type"), response_type);
  
  
    queryParams->Add(new String("redirect_uri"), redirect_uri);
  
  
    queryParams->Add(new String("realm"), realm);
  
  
    queryParams->Add(new String("client_id"), client_id);
  
  
    queryParams->Add(new String("scope"), scope);
  
  
    queryParams->Add(new String("state"), state);
  
  

  String* mBody = null;

  

  String url(L"/oauth2/authorize");

  

  client->execute(SamiOauthApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
