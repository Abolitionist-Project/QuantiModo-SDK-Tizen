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
v1MeasurementSourcesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiMeasurementSource* out = new SamiMeasurementSource();
    jsonToValue(out, pJson, L"SamiMeasurementSource*", L"SamiMeasurementSource");

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

SamiMeasurementSource* 
SamiMeasurementsApi::v1MeasurementSourcesGetWithCompletion( void (* success)(SamiMeasurementSource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1MeasurementSourcesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/v1/measurementSources");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1MeasurementSourcesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiMeasurementsApi::v1MeasurementSourcesPostWithCompletion(SamiMeasurementSource* name, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1MeasurementSourcesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(name != null) {
    mBody = new String(name->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/v1/measurementSources");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v1MeasurementsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiMeasurement* out = new SamiMeasurement();
    jsonToValue(out, pJson, L"SamiMeasurement*", L"SamiMeasurement");

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

SamiMeasurement* 
SamiMeasurementsApi::v1MeasurementsGetWithCompletion(String* variableName, String* unit, String* startTime, String* endTime, Integer* groupingWidth, String* groupingTimezone, Integer* limit, Integer* offset, Integer* sort, void (* success)(SamiMeasurement*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1MeasurementsGetProcessor, (void(*)(void*, SamiError*))success);
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
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  
    queryParams->Add(new String("sort"), sort);
  
  

  String* mBody = null;

  

  String url(L"/v1/measurements");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1MeasurementsPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiMeasurementsApi::v1MeasurementsPostWithCompletion(SamiMeasurementSet* measurements, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1MeasurementsPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(measurements != null) {
    mBody = new String(measurements->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/v1/measurements");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v1MeasurementsDailyGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiMeasurement* out = new SamiMeasurement();
    jsonToValue(out, pJson, L"SamiMeasurement*", L"SamiMeasurement");

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

SamiMeasurement* 
SamiMeasurementsApi::v1MeasurementsDailyGetWithCompletion(String* variableName, String* abbreviatedUnitName, String* startTime, String* endTime, Integer* groupingWidth, String* groupingTimezone, Integer* limit, Integer* offset, Integer* sort, void (* success)(SamiMeasurement*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1MeasurementsDailyGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("variableName"), variableName);
  
  
    queryParams->Add(new String("abbreviatedUnitName"), abbreviatedUnitName);
  
  
    queryParams->Add(new String("startTime"), startTime);
  
  
    queryParams->Add(new String("endTime"), endTime);
  
  
    queryParams->Add(new String("groupingWidth"), groupingWidth);
  
  
    queryParams->Add(new String("groupingTimezone"), groupingTimezone);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  
    queryParams->Add(new String("sort"), sort);
  
  

  String* mBody = null;

  

  String url(L"/v1/measurements/daily");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1MeasurementsRangeGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiMeasurementRange* out = new SamiMeasurementRange();
    jsonToValue(out, pJson, L"SamiMeasurementRange*", L"SamiMeasurementRange");

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

SamiMeasurementRange* 
SamiMeasurementsApi::v1MeasurementsRangeGetWithCompletion(String* sources, Integer* user, void (* success)(SamiMeasurementRange*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1MeasurementsRangeGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("sources"), sources);
  
  
    queryParams->Add(new String("user"), user);
  
  

  String* mBody = null;

  

  String url(L"/v1/measurementsRange");

  

  client->execute(SamiMeasurementsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
