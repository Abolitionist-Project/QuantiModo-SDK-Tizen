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
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiPairsApi::pairsGetWithCompletion(String* cause, String* causeSource, String* causeUnit, String* delay, String* duration, String* effect, String* effectSource, String* effectUnit, String* endTime, String* startTime, void(*success)(SamiError*)) {
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
  
  

  String* mBody = null;

  

  String url(L"/pairs");

  

  client->execute(SamiPairsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
