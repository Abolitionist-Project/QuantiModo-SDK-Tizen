#include "SamiVotesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiVotesApi::SamiVotesApi() {

}

SamiVotesApi::~SamiVotesApi() {

}

void
v1VotesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCommonResponse* out = new SamiCommonResponse();
    jsonToValue(out, pJson, L"SamiCommonResponse*", L"SamiCommonResponse");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiCommonResponse* 
SamiVotesApi::v1VotesPostWithCompletion(String* cause, String* effect, Long* correlation, Boolean* vote, void (* success)(SamiCommonResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VotesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("cause"), cause);
  
  
    queryParams->Add(new String("effect"), effect);
  
  
    queryParams->Add(new String("correlation"), correlation);
  
  
    queryParams->Add(new String("vote"), vote);
  
  

  String* mBody = null;

  

  String url(L"/v1/votes");

  

  client->execute(SamiVotesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VotesDeletePostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCommonResponse* out = new SamiCommonResponse();
    jsonToValue(out, pJson, L"SamiCommonResponse*", L"SamiCommonResponse");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiCommonResponse* 
SamiVotesApi::v1VotesDeletePostWithCompletion(String* cause, String* effect, void (* success)(SamiCommonResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VotesDeletePostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("cause"), cause);
  
  
    queryParams->Add(new String("effect"), effect);
  
  

  String* mBody = null;

  

  String url(L"/v1/votes/delete");

  

  client->execute(SamiVotesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
