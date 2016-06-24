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
v1PublicVariablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVariable* out = new SamiVariable();
    jsonToValue(out, pJson, L"SamiVariable*", L"SamiVariable");

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

SamiVariable* 
SamiVariablesApi::v1PublicVariablesGetWithCompletion( void (* success)(SamiVariable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1PublicVariablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/v1/public/variables");


  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1PublicVariablesSearchSearchGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVariable* out = new SamiVariable();
    jsonToValue(out, pJson, L"SamiVariable*", L"SamiVariable");

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

SamiVariable* 
SamiVariablesApi::v1PublicVariablesSearchSearchGetWithCompletion(String* search, String* accessToken, String* categoryName, String* source, String* effectOrCause, String* publicEffectOrCause, Integer* limit, Integer* offset, Integer* sort, void (* success)(SamiVariable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1PublicVariablesSearchSearchGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("categoryName"), categoryName);

    queryParams->Add(new String("source"), source);

    queryParams->Add(new String("effectOrCause"), effectOrCause);

    queryParams->Add(new String("publicEffectOrCause"), publicEffectOrCause);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v1/public/variables/search/{search}");

  String s_search(L"{");
  s_search.Append(L"search");
  s_search.Append(L"}");
  url.Replace(s_search, stringify(search, L"String*"));

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1UserVariablesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::v1UserVariablesPostWithCompletion(SamiUserVariables* userVariables, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1UserVariablesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(userVariables != null) {
    mBody = new String(userVariables->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/v1/userVariables");


  client->execute(SamiVariablesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v1VariableCategoriesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiVariableCategory");

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
SamiVariablesApi::v1VariableCategoriesGetWithCompletion( void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VariableCategoriesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/v1/variableCategories");


  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VariablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVariable* out = new SamiVariable();
    jsonToValue(out, pJson, L"SamiVariable*", L"SamiVariable");

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

SamiVariable* 
SamiVariablesApi::v1VariablesGetWithCompletion(String* accessToken, Integer* _id, Integer* userId, String* category, String* name, String* lastUpdated, String* source, String* latestMeasurementTime, String* numberOfMeasurements, String* lastSource, Integer* limit, Integer* offset, Integer* sort, void (* success)(SamiVariable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VariablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("id"), _id);

    queryParams->Add(new String("userId"), userId);

    queryParams->Add(new String("category"), category);

    queryParams->Add(new String("name"), name);

    queryParams->Add(new String("lastUpdated"), lastUpdated);

    queryParams->Add(new String("source"), source);

    queryParams->Add(new String("latestMeasurementTime"), latestMeasurementTime);

    queryParams->Add(new String("numberOfMeasurements"), numberOfMeasurements);

    queryParams->Add(new String("lastSource"), lastSource);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v1/variables");


  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VariablesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::v1VariablesPostWithCompletion(SamiVariablesNew* body, String* accessToken, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VariablesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

  String* mBody = null;

  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/v1/variables");


  client->execute(SamiVariablesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v1VariablesSearchSearchGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiVariable");

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
SamiVariablesApi::v1VariablesSearchSearchGetWithCompletion(String* search, String* accessToken, String* categoryName, Boolean* includePublic, Boolean* manualTracking, String* source, String* effectOrCause, String* publicEffectOrCause, Integer* limit, Integer* offset, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VariablesSearchSearchGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("categoryName"), categoryName);

    queryParams->Add(new String("includePublic"), includePublic);

    queryParams->Add(new String("manualTracking"), manualTracking);

    queryParams->Add(new String("source"), source);

    queryParams->Add(new String("effectOrCause"), effectOrCause);

    queryParams->Add(new String("publicEffectOrCause"), publicEffectOrCause);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

  String* mBody = null;


  String url(L"/v1/variables/search/{search}");

  String s_search(L"{");
  s_search.Append(L"search");
  s_search.Append(L"}");
  url.Replace(s_search, stringify(search, L"String*"));

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VariablesVariableNameGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVariable* out = new SamiVariable();
    jsonToValue(out, pJson, L"SamiVariable*", L"SamiVariable");

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

SamiVariable* 
SamiVariablesApi::v1VariablesVariableNameGetWithCompletion(String* variableName, String* accessToken, void (* success)(SamiVariable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VariablesVariableNameGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

  String* mBody = null;


  String url(L"/v1/variables/{variableName}");

  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
