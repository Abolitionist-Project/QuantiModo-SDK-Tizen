#include "SamiSharingApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiSharingApi::SamiSharingApi() {

}

SamiSharingApi::~SamiSharingApi() {

}

void
sharingPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiSharingApi::sharingPostWithCompletion(IList* sharingData, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&sharingPostProcessor, (void(*)(void*, SamiError*))success);
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
  
  
  

  String url(L"/sharing");

  

  client->execute(SamiSharingApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
sharingDeleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiSharingApi::sharingDeleteWithCompletion(IList* sharingData, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&sharingDeleteProcessor, (void(*)(void*, SamiError*))success);
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
  
  
  

  String url(L"/sharing");

  

  client->execute(SamiSharingApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
sharingVariableNameGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiSharingApi::sharingVariableNameGetWithCompletion(String* variableName, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&sharingVariableNameGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/sharing/{variableName}");

  
  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));
  

  client->execute(SamiSharingApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
