#include "SamiUnitsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiUnitsApi::SamiUnitsApi() {

}

SamiUnitsApi::~SamiUnitsApi() {

}

void
unitCategoriesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUnitsApi::unitCategoriesGetWithCompletion( void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&unitCategoriesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/unitCategories");

  

  client->execute(SamiUnitsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
unitsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUnitsApi::unitsGetWithCompletion(String* unitName, String* abbreviatedUnitName, String* categoryName, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&unitsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("unitName"), unitName);
  
  
    queryParams->Add(new String("abbreviatedUnitName"), abbreviatedUnitName);
  
  
    queryParams->Add(new String("categoryName"), categoryName);
  
  

  String* mBody = null;

  

  String url(L"/units");

  

  client->execute(SamiUnitsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
