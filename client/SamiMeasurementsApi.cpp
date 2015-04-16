#include "SamiMeasurementsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiMeasurementsApi::SamiMeasurementsApi() {

}

SamiMeasurementsApi::~SamiMeasurementsApi() {

}

void
measurementSourcesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiMeasurementsApi::measurementSourcesGetWithCompletion( void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&measurementSourcesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/measurementSources");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
measurementSourcesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiMeasurementsApi::measurementSourcesPostWithCompletion(IList* Measurements, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&measurementSourcesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  if(Measurements != null) {
    mBody = new String("");
    int sz = Measurements->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)Measurements->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  
  

  String url(L"/measurementSources");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
measurementsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiMeasurementsApi::measurementsGetWithCompletion(String* variableName, String* unit, String* startTime, String* endTime, Integer* groupingWidth, String* groupingTimezone, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&measurementsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("variableName"), variableName);
  
  
    queryParams->Add(new String("unit"), unit);
  
  
    queryParams->Add(new String("startTime"), startTime);
  
  
    queryParams->Add(new String("endTime"), endTime);
  
  
    queryParams->Add(new String("groupingWidth"), groupingWidth);
  
  
    queryParams->Add(new String("groupingTimezone"), groupingTimezone);
  
  

  String* mBody = null;

  

  String url(L"/measurements");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
measurementsV2PostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiMeasurementsApi::measurementsV2PostWithCompletion(IList* Measurements, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&measurementsV2PostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  if(Measurements != null) {
    mBody = new String("");
    int sz = Measurements->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)Measurements->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  
  

  String url(L"/measurements/v2");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
measurementsRangeGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiMeasurementsApi::measurementsRangeGetWithCompletion(String* sources, Integer* user, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&measurementsRangeGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("sources"), sources);
  
  
    queryParams->Add(new String("user"), user);
  
  

  String* mBody = null;

  

  String url(L"/measurementsRange");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
