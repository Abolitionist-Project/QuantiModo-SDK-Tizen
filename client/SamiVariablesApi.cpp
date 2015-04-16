#include "SamiVariablesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiVariablesApi::SamiVariablesApi() {

}

SamiVariablesApi::~SamiVariablesApi() {

}

void
publicVariablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::publicVariablesGetWithCompletion( void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&publicVariablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/public/variables");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
publicVariablesSearchSearchGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::publicVariablesSearchSearchGetWithCompletion(String* search, String* effectOrCause, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&publicVariablesSearchSearchGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("effectOrCause"), effectOrCause);
  
  

  String* mBody = null;

  

  String url(L"/public/variables/search/{search}");

  
  String s_search(L"{");
  s_search.Append(L"search");
  s_search.Append(L"}");
  url.Replace(s_search, stringify(search, L"String*"));
  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
variableCategoriesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::variableCategoriesGetWithCompletion( void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&variableCategoriesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/variableCategories");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
variableUserSettingsPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::variableUserSettingsPostWithCompletion(IList* sharingData, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&variableUserSettingsPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  if(sharingData != null) {
    mBody = new String("");
    int sz = sharingData->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)sharingData->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  
  

  String url(L"/variableUserSettings");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
variablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::variablesGetWithCompletion(Integer* userId, String* categoryName, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("userId"), userId);
  
  
    queryParams->Add(new String("categoryName"), categoryName);
  
  

  String* mBody = null;

  

  String url(L"/variables");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
variablesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::variablesPostWithCompletion(IList* variableName, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  if(variableName != null) {
    mBody = new String("");
    int sz = variableName->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)variableName->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  
  

  String url(L"/variables");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
variablesSearchSearchGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::variablesSearchSearchGetWithCompletion(String* search, String* categoryName, String* source, Integer* limit, Integer* offset, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesSearchSearchGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("categoryName"), categoryName);
  
  
    queryParams->Add(new String("source"), source);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  

  String* mBody = null;

  

  String url(L"/variables/search/{search}");

  
  String s_search(L"{");
  s_search.Append(L"search");
  s_search.Append(L"}");
  url.Replace(s_search, stringify(search, L"String*"));
  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
variablesVariableNameGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::variablesVariableNameGetWithCompletion(String* variableName, String* categoryName, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesVariableNameGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("categoryName"), categoryName);
  
  

  String* mBody = null;

  

  String url(L"/variables/{variableName}");

  
  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));
  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
