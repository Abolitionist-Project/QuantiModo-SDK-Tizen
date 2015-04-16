#include "SamiAdministrationApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiAdministrationApi::SamiAdministrationApi() {

}

SamiAdministrationApi::~SamiAdministrationApi() {

}

void
administrationCacheClearGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAdministrationApi::administrationCacheClearGetWithCompletion( void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&administrationCacheClearGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/administration/cache/clear");

  

  client->execute(SamiAdministrationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
administrationCorrelationsUpdateGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAdministrationApi::administrationCorrelationsUpdateGetWithCompletion(String* modifiedVariable, Integer* userId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&administrationCorrelationsUpdateGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("modifiedVariable"), modifiedVariable);
  
  
    queryParams->Add(new String("userId"), userId);
  
  

  String* mBody = null;

  

  String url(L"/administration/correlations/update");

  

  client->execute(SamiAdministrationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
administrationCorrelationsUpdateAllUsersGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAdministrationApi::administrationCorrelationsUpdateAllUsersGetWithCompletion( void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&administrationCorrelationsUpdateAllUsersGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/administration/correlations/updateAllUsers");

  

  client->execute(SamiAdministrationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
administrationCorrelationsUpdateAllVariablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAdministrationApi::administrationCorrelationsUpdateAllVariablesGetWithCompletion(Integer* userId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&administrationCorrelationsUpdateAllVariablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("userId"), userId);
  
  

  String* mBody = null;

  

  String url(L"/administration/correlations/updateAllVariables");

  

  client->execute(SamiAdministrationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
