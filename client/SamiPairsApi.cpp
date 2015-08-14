#include "SamiPairsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiPairsApi::SamiPairsApi() {

}

SamiPairsApi::~SamiPairsApi() {

}

void
pairsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiPairs");

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

IList* 
SamiPairsApi::pairsGetWithCompletion(String* cause, String* effect, String* causeSource, String* causeUnit, String* delay, String* duration, String* effectSource, String* effectUnit, String* endTime, String* startTime, Integer* limit, Integer* offset, Integer* sort, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&pairsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("cause"), cause);
  
  
    queryParams->Add(new String("causeSource"), causeSource);
  
  
    queryParams->Add(new String("causeUnit"), causeUnit);
  
  
    queryParams->Add(new String("delay"), delay);
  
  
    queryParams->Add(new String("duration"), duration);
  
  
    queryParams->Add(new String("effect"), effect);
  
  
    queryParams->Add(new String("effectSource"), effectSource);
  
  
    queryParams->Add(new String("effectUnit"), effectUnit);
  
  
    queryParams->Add(new String("endTime"), endTime);
  
  
    queryParams->Add(new String("startTime"), startTime);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  
    queryParams->Add(new String("sort"), sort);
  
  

  String* mBody = null;

  

  String url(L"/pairs");

  

  client->execute(SamiPairsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
